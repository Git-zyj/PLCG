/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_14;
    var_16 = var_0;
    var_17 = (min(var_17, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2] [i_2] |= ((~(((arr_3 [i_0] [i_1]) ? (((arr_8 [i_1] [10]) ^ (arr_3 [i_0] [i_0]))) : (arr_1 [i_1])))));
                    var_18 = (min(var_18, ((var_5 ? 1 : ((~((max((arr_0 [i_2]), (arr_0 [i_0]))))))))));
                    var_19 += ((65535 ? 75 : 1));
                }
            }
        }
    }
    #pragma endscop
}
