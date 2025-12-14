/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 ? ((max(var_9, (((244 << (var_10 - 1641773789))))))) : ((var_0 ? (((var_1 ? var_10 : var_7))) : var_3))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (((max(var_3, var_12))));
                var_15 += (arr_3 [i_0] [i_0 + 2] [i_1]);
                var_16 = var_3;
                var_17 |= (((1654203114 ? 1654203114 : 1206060722)));
                arr_4 [i_0] = var_9;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_18 = (((arr_12 [i_3]) && (arr_7 [i_4])));

                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        var_19 = (arr_14 [i_5 - 3] [i_5 - 3] [i_4] [i_4]);
                        var_20 = (!1654203119);
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            var_21 = (((arr_22 [i_3]) | var_0));
                            var_22 = (arr_19 [i_7 + 1] [i_7 + 2] [i_7 - 2] [i_7] [i_7 - 2]);
                            var_23 = (arr_18 [i_2] [i_7 + 3] [i_7] [i_7]);
                        }

                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            var_24 = (min(var_24, (250 > var_3)));
                            arr_25 [i_8] [i_3] [i_4] [i_3] [i_2] = 30;
                            var_25 = (arr_23 [i_8 - 2] [i_8 + 1] [i_8] [i_8 + 2] [i_8 + 2]);
                            var_26 = ((18252 ? -3363910747468852609 : (((-1654203115 ? 3168173206 : var_7)))));
                        }
                        var_27 = -76;
                        var_28 += (arr_23 [i_2] [i_3] [i_4] [i_4] [i_6]);
                        var_29 = (((((var_9 ? var_7 : (arr_24 [i_3] [i_4] [i_6])))) ? ((54689 ? 125829120 : (arr_13 [i_2] [i_3]))) : (((35011 ? (arr_5 [i_3]) : (arr_9 [i_2] [i_2]))))));
                    }
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        var_30 = (arr_7 [i_9 + 1]);
                        var_31 += (~32161);
                        var_32 &= (arr_27 [i_9] [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 1]);
                        arr_29 [i_2] [i_4] [i_3] = ((~(arr_26 [i_2] [i_9 - 2])));
                    }
                }
            }
        }
        var_33 = (max(var_33, ((((arr_8 [i_2] [i_2]) ? (var_8 || var_1) : (~var_12))))));

        for (int i_10 = 2; i_10 < 21;i_10 += 1)
        {
            var_34 = (max(var_34, ((((var_2 || var_4) != ((-(arr_30 [i_10 + 2]))))))));
            var_35 = (arr_17 [i_10 + 4] [i_10 - 2] [i_10 + 3] [i_10 + 2] [i_10 - 1] [i_10 + 2]);
        }
        var_36 = (~var_6);
    }
    #pragma endscop
}
