/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? (max(var_9, ((4294967295 ? 57640 : var_8)))) : 147));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((min(((18446744073709551615 ? 1 : 83)), (((((arr_2 [i_0]) >> (-25505 + 25514))))))))));
                var_13 = (max(((((arr_3 [i_0]) && 0))), 1340258707));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] [i_1] = (max((((((var_9 ? var_10 : var_6))) ? (((-1 ? var_9 : 3804372535))) : 3806541791046522409)), 0));
                    var_14 = (min(((((var_2 ? 3806541791046522409 : (arr_2 [i_1]))) >> (234 - 178))), (((~(arr_7 [i_0] [i_1] [8]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_3] [i_3] = 839090986810166673;
                        var_15 = (((((var_5 ? var_6 : var_3))) ? ((((arr_7 [i_0] [i_0] [i_0]) ? var_8 : -1729))) : ((var_10 ^ (arr_0 [9])))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, ((min(14640202282663029206, ((0 ? (35508493 / 65515) : 375368875064018816)))))));
                        arr_16 [i_0] [i_0] [i_0] = 3;
                        var_17 = ((124 ? 536870911 : ((((arr_2 [i_0]) / 1898543530)))));
                        arr_17 [i_0] [i_2] [i_1] [i_0] = 4294967295;
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_20 [i_0] [i_2] [i_1] [i_0] = (max((((arr_6 [i_0]) ? (max((arr_7 [0] [i_2] [1]), 0)) : (((1274992290 ? var_0 : var_0))))), ((((arr_3 [i_1]) ? 414344380 : 427464178)))));
                        var_18 = (min(var_18, 1235077299675622604));
                    }
                    arr_21 [i_2] [i_1] [i_2] &= ((!(arr_12 [i_2] [i_1] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_19 -= ((((((2954708588 * 0) ? (((arr_26 [i_0] [i_1] [i_2] [i_2] [i_7]) / (arr_9 [i_2] [i_2] [i_2] [i_6]))) : ((-124 ? 9223372036854775807 : 64))))) ? (arr_27 [i_0] [i_0] [i_0] [i_2] [i_0]) : (arr_27 [i_0] [i_1] [i_2] [i_2] [i_7])));
                                var_20 = (max(var_20, ((((max((arr_0 [i_6]), ((-1 ? var_0 : var_1)))) != ((var_10 ? (max((arr_22 [i_0] [i_6] [i_0] [i_0] [i_0]), -1311379741)) : ((0 ? 122 : 1)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((((9692 ? var_3 : 3))) ? (2147483647 * 776306316532570434) : ((min(var_4, var_3))))));
    var_22 = ((17670437757176981181 - (121 + 29435)));
    #pragma endscop
}
