/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        var_18 = var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = ((4105090786033711322 ? (arr_4 [i_1]) : 41019));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_20 = 84;
            arr_8 [i_1] [i_2] = ((~((92 ? 250 : 1))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_21 = (1 == 2555509185);
            arr_11 [i_3] [i_1] [i_1] = (~(arr_6 [i_3] [i_1]));
            arr_12 [i_1] [5] [i_3] = (((arr_6 [i_1] [13]) ^ 2002601419));
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_22 = (((~1) + (max(-72, (arr_14 [i_4] [i_4])))));
        arr_15 [i_4] [i_4] = 62;

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_23 *= (((var_17 || var_2) ? ((-19 ? (arr_13 [i_4]) : (min(var_0, (arr_13 [i_5]))))) : (((((max(255, (arr_5 [i_4])))) ? var_7 : (!2135897761886714972))))));
            var_24 = (((((1058707371 & (arr_6 [i_5] [1])))) ? (min((arr_4 [i_4]), 65535)) : ((min(50672391, 4294967282)))));
            arr_18 [6] [i_4] [3] = 16;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_21 [i_4] [i_4] = (((arr_7 [i_4] [i_4] [i_6]) + (1 / 22392)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_26 [i_4] [i_4] [i_4] [i_8] = (((arr_0 [i_6] [i_6]) ? (arr_19 [i_8]) : (arr_9 [i_4] [i_8])));
                        var_25 += ((6 ? 9006924376834048 : 3697335569170017392));
                        var_26 = ((var_9 != (1 ^ var_16)));
                    }
                }
            }
        }
        arr_27 [i_4] = ((((84 ? var_4 : var_6)) & -13459));
    }
    var_27 = (((((29 && (((-4516866395561646666 ? 19034 : var_1)))))) > ((18107 - ((-1798255688 ? 402653184 : 1))))));
    var_28 = ((var_11 ? ((max(-85, -279076582))) : ((var_9 ? (max(var_12, -4516866395561646666)) : (28315 >= 71)))));
    #pragma endscop
}
