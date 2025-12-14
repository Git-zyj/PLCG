/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (max(var_19, (max((arr_1 [i_0]), (max(-64, 235))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_20 = (((((arr_8 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1]) + 2147483647)) << (((((((arr_8 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 - 1]) + 2147483647)) >> (((arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]) + 134)))) - 511))));
                        var_21 = arr_10 [i_0];
                        arr_12 [i_0] [i_0] [8] [i_0] &= 74;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        var_22 = (((arr_13 [i_4]) + (arr_13 [i_4 + 1])));
        arr_15 [i_4] = ((((max((arr_13 [i_4 + 1]), (arr_13 [i_4 + 2])))) ? ((((arr_14 [i_4]) && (arr_13 [i_4 + 2])))) : ((((arr_14 [i_4]) > 123)))));
        var_23 = ((((((185 ? 123 : (arr_13 [i_4]))))) ? var_4 : ((min((arr_13 [i_4 - 1]), 64)))));
    }
    var_24 = var_3;
    var_25 = (((((-((max(11, var_2)))))) ? ((+((var_8 ? (-127 - 1) : 127)))) : ((~((max(255, var_0)))))));

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_26 += (max((((arr_16 [i_5]) ? (((arr_13 [i_5]) ? 127 : (arr_17 [i_5]))) : 34)), -53));
        arr_18 [13] = 17;
        var_27 += ((~(((-91 < (arr_16 [i_5]))))));
    }
    #pragma endscop
}
