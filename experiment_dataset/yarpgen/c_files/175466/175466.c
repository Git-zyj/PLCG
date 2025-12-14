/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 += ((252 ? var_10 : (((-2147483647 - 1) ? -37 : (arr_3 [i_1] [i_0] [i_0])))));
                arr_5 [i_0] = var_6;
                var_12 = var_3;
                var_13 -= (arr_1 [8]);
                arr_6 [i_0] = ((~((((~(arr_3 [11] [11] [i_1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_14 ^= (arr_2 [15] [i_2] [i_2]);

                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        var_15 = (min(((((arr_2 [i_4 - 2] [i_5 + 2] [i_2 - 2]) >= (arr_2 [i_4 + 1] [i_5 + 2] [i_2 - 2])))), (max((((8782282647269176387 ? -1 : var_1))), (((arr_3 [i_2] [i_3] [i_2]) * 8782282647269176387))))));
                        var_16 = (min(var_16, ((((((!((((arr_15 [2] [i_4]) ? 14 : 29)))))) % (max((arr_12 [i_2 - 2] [i_2 + 1]), ((1 ? (arr_8 [6] [i_5]) : var_7)))))))));
                        arr_17 [i_3] [i_3] = (max((arr_4 [i_2] [i_2 + 1]), (((~var_9) ? (min(var_4, 8782282647269176387)) : (((max(var_6, 127))))))));
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_17 -= (-55 + 86);
                            var_18 = (((arr_1 [i_3]) ^ (arr_1 [i_3])));
                            var_19 = (arr_18 [i_3] [i_4 - 4] [i_6 - 1] [i_7] [i_2 - 1] [i_4]);
                            var_20 = 1;
                            var_21 |= ((!(((15799345085360597682 ? (arr_0 [i_7]) : var_0)))));
                        }
                        arr_23 [i_6] [i_3] [i_3] [7] = 2147483647;
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_22 = (((((2147483647 ? 574208952489738240 : (!var_8)))) ? (3258325153425893831 != 108) : ((((((arr_24 [i_2] [i_2] [i_4] [i_8] [i_2] [i_4]) ? var_1 : var_5))) ? (max(var_5, -1)) : (((var_1 ^ (arr_20 [i_2]))))))));
                        arr_26 [i_3] [i_4] [i_3] [i_3] = (((-(~var_9))));
                        arr_27 [i_2] [i_3] = 574208952489738231;
                        var_23 = 68719411200;
                        var_24 = ((-728145381 ? (arr_10 [i_2 - 1] [i_2 - 1]) : ((var_5 ? (arr_10 [i_2 + 1] [0]) : (arr_10 [i_2 + 1] [i_2 - 2])))));
                    }
                    arr_28 [i_3] = -var_5;
                    var_25 = ((~(((((-1 ? 1 : 3761665979))) ? ((0 ? 54722 : (arr_22 [i_2] [i_2 - 2] [9] [i_2 - 1] [i_2 + 1] [i_2]))) : (((-(arr_3 [i_2] [i_3] [i_3]))))))));
                    var_26 = (-107 / 33292288);
                    var_27 += (!7);
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_28 = (max((min((arr_14 [1] [i_3] [i_3]), 0)), -1));
                    arr_31 [8] [i_2] [i_3] [i_9] &= (((max(var_5, 4593232375582149216))));
                }
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    arr_35 [i_2 + 1] [i_3] [i_3] = (arr_19 [i_2]);
                    arr_36 [7] [7] [i_3] = (max((((((~(arr_4 [i_2] [6])))) ? var_0 : (arr_9 [i_2 - 2]))), (((-((var_5 + (arr_2 [i_10] [i_3] [i_2 - 2]))))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    var_29 = (arr_9 [i_2 - 2]);

                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        arr_43 [i_2 - 1] [6] [i_3] [i_12] = (24601 ? -155403635 : (arr_18 [i_3] [i_3] [i_3] [i_2 - 1] [i_3] [i_12]));
                        var_30 = 1;
                    }
                }
                var_31 = ((+((1 >> (((arr_12 [i_2 - 1] [i_2 - 2]) - 75))))));
                var_32 = (max(var_32, var_9));
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 6;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_33 *= ((!(arr_2 [i_14] [i_14] [2])));
                            arr_48 [i_3] = (((-1 & -127) ? (!var_8) : (arr_29 [i_2 + 1] [i_3] [i_13] [i_3])));
                            var_34 = ((-((var_0 ? var_7 : (arr_11 [i_13 - 4])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
