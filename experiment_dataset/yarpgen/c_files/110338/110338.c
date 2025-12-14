/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = (min((arr_6 [i_0] [i_1] [i_1] [i_2 + 2]), ((var_4 ? (arr_2 [i_0] [i_1] [i_2]) : (~-2886947866411406503)))));
                    var_13 ^= ((((((var_1 ? 0 : (arr_5 [i_0] [i_0] [i_0]))))) ? (arr_4 [i_1 + 2]) : -1));
                    var_14 = (max(var_14, (-32767 - 1)));
                    arr_8 [i_0 - 1] [i_1] [i_2] = ((((((((21 ? var_8 : var_4))) ? (max((arr_6 [i_0] [i_0 + 4] [7] [i_0]), var_7)) : (((var_3 ? var_0 : (arr_0 [i_0]))))))) ? 1504399510 : 2));
                    arr_9 [i_2] [i_1 + 1] [i_1] [i_0 - 1] = (4294967295 < var_1);
                }
            }
        }
    }
    var_15 = 22;
    var_16 = (min(var_1, var_4));
    #pragma endscop
}
