/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((max(var_15, ((9598 ? 15499 : 15)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [7] [i_0] = var_18;
                    arr_8 [3] [11] [i_0] [i_0] = ((((((var_12 + (arr_6 [i_1] [3]))) + 9223372036854775807)) << (((((arr_6 [i_2] [i_1 + 1]) + 1608345140071294588)) - 48))));
                }
            }
        }
    }
    var_21 = ((var_6 ? ((30233 ? 128 : 1)) : ((((var_13 % var_0) > -3)))));
    #pragma endscop
}
