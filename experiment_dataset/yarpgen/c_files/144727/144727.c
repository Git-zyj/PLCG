/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((var_0 ? var_9 : ((var_8 ? 55234 : var_1))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = ((!((min((((-98 ? var_9 : 98))), 4294967278)))));
        var_12 *= (((((+((var_7 ? (arr_0 [16]) : (arr_1 [i_0] [i_0])))))) ? (arr_1 [i_0] [i_0]) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 = (max(var_13, ((max(((~((109 ? 2240818728013848428 : -95)))), (arr_3 [8] [8]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_14 *= min(((-(arr_6 [i_3] [i_3] [i_3] [i_0]))), 89);
                        var_15 = (min(var_15, ((max(((((arr_1 [i_0] [16]) ? (arr_1 [14] [i_0]) : (arr_1 [i_0] [i_3])))), 11576341560675180986)))));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_1] [17] = -73;
                            arr_13 [i_0] [1] [i_2] [i_1] [i_0] = ((((((var_3 > (arr_9 [i_0]))))) ? (arr_8 [i_0] [i_1] [i_3] [i_3]) : (((~var_1) ? (arr_11 [i_3] [i_0] [i_1]) : (min((arr_9 [i_0]), 11821624531491899973))))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] [i_5] = ((!((min((arr_15 [3] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]), (min(1121159606, 4674673876964351892)))))));
                            var_16 = (((((((arr_9 [i_0]) ? 4674673876964351900 : var_0))) ? 14976480811735317768 : ((max((arr_11 [i_0] [i_0] [i_0]), var_2))))));
                        }
                        arr_17 [17] [i_0] [i_0] [i_0] = (max(((((arr_3 [i_0] [i_1]) < (arr_1 [i_1] [i_3])))), (((arr_8 [1] [1] [i_1] [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [15] [i_2]) : var_1))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_17 *= (var_3 ? (min(4674673876964351917, ((max(var_8, var_8))))) : (((((arr_22 [i_8] [i_7] [i_6]) || ((min(15534850687593994810, (arr_8 [i_6 + 1] [16] [16] [i_6 + 1])))))))));
                            var_18 *= (((((0 > var_3) ? ((var_3 ? 61997 : 10177153399956311906)) : (((1918258605 | (arr_1 [i_0] [3])))))) - (((((max(0, var_9))) ? var_8 : (((arr_18 [i_8]) ? 10373 : var_7)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                var_19 = (arr_30 [i_10]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_20 *= ((((250 == (max((arr_36 [i_10]), -6439)))) ? ((((!(arr_35 [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1]))))) : var_5));
                            arr_38 [i_9] = ((((max(var_3, -121))) ? (max((((var_3 ? (arr_29 [i_9]) : 65532))), ((-(arr_30 [i_9]))))) : (((min(var_0, (arr_29 [i_9]))) * -var_7))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
