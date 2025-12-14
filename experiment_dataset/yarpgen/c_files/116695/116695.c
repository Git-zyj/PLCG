/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 -= var_1;
        var_13 = ((((max(var_1, (max(9, 1680271758))))) ? ((+((max((arr_0 [i_0]), 27))))) : ((-(((arr_0 [i_0]) ? (arr_1 [i_0]) : 247))))));
        arr_3 [i_0] [i_0] = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) - var_1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            var_14 = (min(var_14, ((((-2147483647 - 1) > ((-21964 ? 2 : (19 - 9))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((arr_1 [i_0]), ((((var_5 - var_5) > ((max(var_7, var_11))))))));
                            var_15 -= var_3;
                            var_16 -= ((+(((arr_7 [i_2 - 3] [i_4 - 2] [i_1] [i_4 - 2]) ? (arr_7 [i_2 - 2] [i_4 - 1] [i_1] [i_4 - 1]) : var_8))));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2 + 1] [i_3] [i_3] [i_5] = (max((~29751), var_2));
                            var_17 = (max(((28760 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_10)), ((max((arr_2 [i_0]), (~var_0))))));
                        }
                        var_18 = (min((((arr_9 [i_0] [i_0] [i_2] [i_3]) ? (max((arr_0 [i_0]), -8948184484072695245)) : 4294967273)), var_8));
                        var_19 = (max(var_19, (arr_7 [i_2 - 3] [i_3] [i_1] [i_3])));

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = 28741;
                            var_20 = ((-((-(arr_17 [i_6 - 1] [i_0] [i_2 + 2] [i_2 - 3] [i_0] [i_2 + 1])))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_21 = ((((max((arr_9 [i_7] [i_0] [i_0] [i_0]), (((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >> (82 - 80)))))) ? (((((var_7 ? (arr_14 [i_0] [i_1] [i_2] [i_0] [i_7] [i_7] [i_7]) : (arr_10 [i_0])))))) : (min(((min((arr_1 [i_1]), 70))), (min(239827214569185922, (arr_18 [i_0] [i_1] [i_2] [i_2 + 2] [i_2 + 1] [i_2 - 2] [i_7])))))));
                        var_22 = (max(((((min(var_6, var_2))))), ((~(arr_18 [i_0] [i_0] [i_1] [i_1] [i_2] [i_7] [i_7])))));
                        var_23 = (min(var_23, ((((min(((max(-11, var_1))), ((82 ? var_2 : -11))))) ? ((~(arr_24 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 1]))) : (var_7 != var_0)))));
                        var_24 = (arr_19 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 2]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_25 = (min(var_25, ((-(arr_8 [i_1])))));
                        var_26 = 28779;
                        arr_28 [i_0] [i_1] [i_0] [i_8] = (((arr_11 [i_0] [i_0]) ? (arr_22 [i_0] [i_1] [i_2 - 2] [i_8] [i_8]) : (arr_23 [i_8] [i_8] [i_8] [i_2 + 2] [i_2 - 3] [i_2 - 1])));

                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_27 -= 109;
                            var_28 = var_3;
                            var_29 = ((((0 ? var_2 : var_2)) + (~2)));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_30 = (max(var_30, (((-28761 ? ((-(arr_1 [i_1]))) : (((arr_10 [i_10]) ? var_0 : 101)))))));
                            var_31 = (((9223372036854775807 ^ var_1) ? (-32244 - 0) : var_0));
                            var_32 = ((3967 ? 0 : (-9223372036854775807 - 1)));
                        }
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            var_33 = (-6 / 5);
                            var_34 &= ((~(~var_8)));
                        }
                        var_35 ^= ((arr_29 [i_2 - 3] [i_2] [i_2 - 3] [i_2 - 2] [i_2] [i_2] [i_2 - 2]) > (arr_29 [i_2] [i_2 + 2] [i_2 - 3] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 1]));
                    }
                    var_36 = (min(var_36, (((((arr_1 [i_2 - 3]) != 37))))));
                    var_37 += ((((((max(var_3, 1))) + ((11854184176932553373 ? 26706 : 16332940608398923721))))));
                }
            }
        }
    }
    var_38 = 1188804439;
    var_39 = (min(var_39, ((3610582834 ? ((max(((max(var_8, var_3))), 4))) : ((max(3610582834, var_2)))))));
    #pragma endscop
}
