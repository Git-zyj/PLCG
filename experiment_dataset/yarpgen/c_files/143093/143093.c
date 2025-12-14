/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (((var_9 - var_12) ? (((-25 ? 37816 : -23))) : (arr_1 [i_0])));
        arr_3 [1] [i_0] = (~var_18);
        var_20 = var_0;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] = ((4294967295 == ((var_11 ? -23 : 3334853179))));
            arr_7 [i_0] = 985101195;
            arr_8 [i_0] [i_0] = (!18446744073709551612);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_2] [2] [5] = (((arr_12 [i_1] [i_3]) ? (arr_9 [i_2 - 1] [i_2] [i_3 + 4]) : ((var_14 ? var_18 : var_15))));
                        var_21 = (var_11 <= var_8);
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                var_22 = (min(var_22, (((~(((arr_5 [i_0] [i_0]) + var_11)))))));
                var_23 = (arr_10 [i_5] [i_5 - 3] [i_5 - 1]);
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_24 = (min(var_24, (((((((arr_21 [5] [5]) ? var_11 : var_0))) ? 33 : (((var_18 ? var_1 : 24))))))));
                arr_23 [19] [i_0] [i_6] = (arr_10 [i_0] [i_4] [0]);
                var_25 = var_9;
                var_26 = (min(var_26, ((((arr_22 [i_0] [i_4] [i_6]) || 44)))));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_32 [i_0] = -25;
                            var_27 = var_9;
                        }
                    }
                }
                arr_33 [i_4] [i_4] [14] = (((arr_29 [i_0] [15] [i_4] [16] [i_7]) ? (arr_9 [i_0] [i_4] [8]) : var_13));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        {
                            arr_40 [i_0] [18] [i_7] [i_10] [13] = (166 - var_17);
                            arr_41 [i_4] [i_4] [i_4] [i_4] [i_10] = var_16;
                            var_28 = (max(var_28, 0));
                        }
                    }
                }
                arr_42 [i_0] = 65535;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_29 = ((-23 ? -1628320291 : (arr_47 [i_13 - 2] [1] [i_12] [14] [i_4] [5])));
                            arr_48 [i_0] [18] [i_7] [i_12] [i_12] [i_13] [i_13] = ((19 >> (13190 - 13166)));
                        }
                    }
                }
            }
            var_30 += (-((0 ? 7 : (arr_20 [i_0] [i_0] [i_4] [i_4]))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    {
                        var_31 = -65526;
                        var_32 = (min(var_32, 4294967295));
                    }
                }
            }
            var_33 = (1628320290 / -17);
            var_34 = 4233841908;
        }
    }
    var_35 = ((~((var_17 ? ((var_8 ? -18 : 9109722421783729523)) : (1628320291 || var_2)))));
    #pragma endscop
}
