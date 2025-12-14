/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_10);
    var_19 = (max(var_19, var_17));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((((((((var_5 ? var_10 : (arr_1 [i_2])))) ? var_5 : var_1))) ? (arr_6 [i_0] [i_2] [i_2] [0]) : ((-113 ? var_1 : var_3)))))));
                    arr_8 [i_1] [i_0] [i_2] = (((((arr_3 [i_0]) ? (arr_3 [i_2]) : (arr_3 [i_0]))) * (arr_3 [i_0])));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((((arr_2 [i_2]) >> (71 - 68))));
                }
            }
        }
        arr_10 [i_0] = var_3;
        var_21 = var_16;
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        arr_13 [4] = -113;
        arr_14 [i_3] &= ((var_10 ? (((62161 ? 86 : 125))) : ((var_2 ? var_12 : ((-161698489994415710 & (arr_1 [16])))))));
    }
    var_22 = var_2;
    #pragma endscop
}
