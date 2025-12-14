/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -96;
    var_14 = (((((var_12 >> (var_11 - 18894)))) ? var_6 : (((max(-96, var_7))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_4 [4] = (-91 && -9832);
            arr_5 [i_0] [i_1] = (9831 < 1);
            var_15 = ((-(arr_1 [i_0])));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (max(var_16, (((((min((arr_0 [0]), -66))) ? ((var_4 * (arr_0 [i_2]))) : ((-(arr_6 [2]))))))));
            var_17 -= (!-112);
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] [i_5] [i_3] [i_4] [i_5] [3] = (arr_16 [5] [1] [i_5] [i_5] [i_4] [0] [i_0]);
                            var_18 ^= ((~(((!((min((arr_12 [i_0]), var_0))))))));
                        }
                    }
                }
            }
            var_19 = (min(var_19, (((((((arr_12 [i_3]) ? (arr_10 [i_0] [10] [i_3] [i_0]) : var_11))) ? var_2 : (arr_10 [i_0] [5] [i_3] [i_3]))))));
        }
        arr_19 [i_0] = ((-21700 ? -22324 : 1617));
        arr_20 [i_0] [i_0] = (((max((arr_11 [i_0] [i_0] [i_0]), (-109 != -118))) ? ((min(var_5, (arr_10 [i_0] [i_0] [i_0] [i_0])))) : ((-21700 ? -26491 : 22323))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_20 += ((arr_21 [5]) >= ((max((max((arr_21 [8]), (arr_23 [i_7]))), (max(1, 94))))));
        var_21 = (min(var_21, (((16633 ? -1 : 82)))));
        var_22 = -97;
        var_23 = (max(var_23, (arr_22 [i_7])));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_26 [18] = ((!(((-(arr_25 [i_8]))))));
        arr_27 [i_8] [i_8] = 122;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_35 [i_8] [i_10] [i_10] [i_10] [i_10] = var_5;
                        arr_36 [i_10] [10] [i_10] [i_11] [i_11] = ((-21700 ? 1 : -96));
                    }
                }
            }
        }
    }
    #pragma endscop
}
