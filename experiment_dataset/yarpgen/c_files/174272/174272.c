/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, 8));
                    var_21 = (min(var_21, (arr_2 [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = ((126 ? 745628887 : ((((117 - (arr_1 [1] [i_2])))))));
                                var_23 *= ((((max(((3516722132582215473 ? var_7 : var_5)), (arr_7 [14] [i_1 + 4] [i_1 + 3] [14] [14] [14])))) ? (118 - 1) : var_3));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_24 = (min(var_24, (((((((arr_15 [14] [14] [i_5]) ? (arr_16 [i_6]) : (((arr_13 [24]) ? (arr_13 [22]) : (arr_14 [i_6])))))) ? -var_13 : 112)))));
            arr_17 [i_5] = (((~((var_7 ? -102 : (arr_15 [i_5] [i_5] [1]))))));
            var_25 = (min((arr_13 [i_5]), (((-9223372036854775794 ? 936987455 : -76824272)))));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_26 = (min(((3680848874 / (arr_16 [i_7]))), ((min(-1, 5766)))));
                    arr_25 [i_5] = ((~(((arr_20 [i_5] [i_5] [i_5]) ? var_12 : 33554431))));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_27 = ((8388607 ? 2058897682 : 6696584383079630517));
                                var_28 = (min(var_28, (((((((arr_21 [i_10] [i_8] [i_5]) ? var_16 : (arr_29 [22]))) | (arr_20 [20] [10] [20])))))));
                                var_29 = (min(var_29, (((-4 ? (arr_20 [i_8] [i_8] [22]) : (min((arr_14 [6]), ((min(936987440, 3484618150))))))))));
                                var_30 = (arr_30 [i_10] [i_10] [i_9 - 3] [i_9 + 1] [i_9]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (max(var_31, (((min(var_18, var_10))))));
    #pragma endscop
}
