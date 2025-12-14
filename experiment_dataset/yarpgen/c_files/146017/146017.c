/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(3, var_4));

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_11 = (min((--4842549525115948312), (((min(4753332058663035241, (arr_1 [i_0 + 3]))) - (((-(arr_1 [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_12 = -6868251533326430811;
                        arr_10 [i_0] |= (arr_8 [i_1 + 1] [i_3] [i_2] [i_3]);
                        arr_11 [10] [i_1] [i_1] [i_3] = (((arr_2 [i_3]) ? -4842549525115948296 : (max(var_6, (((arr_0 [i_0]) ? (arr_8 [i_0] [i_0] [i_2 + 3] [0]) : (arr_4 [i_0] [i_0 - 2] [i_0 - 2])))))));
                        arr_12 [i_3] [i_3] = (arr_2 [i_0 + 3]);
                        var_13 = (min(((((arr_7 [i_2] [i_2] [i_0]) ^ (arr_8 [i_0] [i_1] [i_2] [i_3])))), (~3865389647)));
                    }
                }
            }
        }
        arr_13 [i_0] = 3338;
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_14 += ((14336 << (63835 - 63824)));
        var_15 *= ((min(12, var_5)));
    }
    var_16 = (min(var_16, (max((var_8 ^ var_5), var_0))));

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_20 [i_5] = (arr_14 [13]);
        arr_21 [i_5] = (arr_8 [14] [14] [14] [i_5]);
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        arr_24 [i_6] [i_6] |= (max((((arr_22 [i_6 - 1] [i_6 - 1]) ? var_8 : (arr_22 [i_6 - 1] [i_6 - 1]))), (min((arr_22 [i_6 - 1] [i_6 - 1]), var_0))));
        var_17 *= ((((((min(var_5, 62197))) ? (arr_22 [i_6 - 1] [i_6 + 1]) : (arr_22 [i_6] [i_6 - 1]))) << (168 || 1992279182)));
        arr_25 [i_6] |= min(((max(((min(var_4, (arr_23 [i_6])))), var_6))), (((((var_7 ? (arr_22 [i_6] [i_6 - 1]) : var_5))) ? (!3799) : ((4972 & (arr_22 [16] [i_6]))))));
        arr_26 [i_6] &= (!-1);
    }
    #pragma endscop
}
