/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (((max(var_13, (((-(arr_0 [i_0])))))) - (min((max((arr_1 [i_0]), var_14)), (var_12 + var_9)))));
        var_17 = ((!(((~var_13) != (~var_13)))));
        var_18 = (arr_0 [i_0]);
        var_19 = (((((((min((arr_1 [i_0]), var_6))) ? ((~(arr_1 [i_0]))) : (4294967295 < -6475313559652768992)))) ? (arr_1 [i_0]) : var_3));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_20 = ((!(arr_7 [i_2] [i_2] [i_2])));
                        var_21 = (((((var_5 ? var_11 : var_1))) ? (arr_5 [i_1]) : ((~(arr_10 [i_1] [i_2] [i_3] [i_3 + 2] [i_4] [i_4])))));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_22 = (~var_7);
                            var_23 = ((!(arr_13 [i_4] [i_3 - 2] [i_1] [i_1])));
                            var_24 = var_1;
                            var_25 = ((-((var_13 ? (arr_3 [i_1 + 1] [i_1]) : var_10))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_26 = var_3;

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_27 = (((arr_5 [i_1]) ^ (arr_20 [i_1 - 1] [i_6 + 1] [i_1])));
                            var_28 = ((!(arr_16 [i_1] [i_1] [6] [13])));
                        }
                    }
                    var_29 = ((var_2 % (arr_12 [i_1 - 2])));
                }
            }
        }
        var_30 = (var_10 + var_9);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        var_31 = (arr_6 [14]);
        var_32 = arr_11 [i_8] [12] [12] [4] [i_8] [i_8];
        var_33 = (((((~(arr_13 [i_8] [i_8] [i_8] [i_8])))) ? var_14 : 250));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                {
                    var_34 = (!var_6);
                    var_35 = ((var_12 <= (((arr_24 [i_10 - 1] [i_9]) ? (arr_25 [i_9]) : var_2))));
                }
            }
        }
        var_36 = ((var_0 + (arr_28 [i_9])));
        var_37 = ((!(arr_30 [5] [i_9])));
    }
    var_38 = var_12;
    var_39 = ((((~(~-1))) | ((~(~-1)))));
    #pragma endscop
}
