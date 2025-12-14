/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_19 = (((((arr_6 [i_0] [i_1] [i_2]) ? (arr_6 [i_2] [i_1] [i_0]) : var_13)) + ((-((((arr_0 [i_0]) > (arr_4 [i_2]))))))));
                    var_20 = (((-((var_16 ? (arr_4 [i_1]) : (arr_4 [i_0]))))) / ((min(((min(1, 0))), -var_5))));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_21 = 10711;
                        var_22 = ((-(arr_5 [i_0] [i_1] [i_1] [i_3])));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_4] [i_3] [i_3] [11] [i_3] [i_0] = (((((var_18 ? var_3 : ((((arr_1 [i_2] [i_3]) > var_7)))))) ? 828663011 : ((((min(158, 16382))) ? (max(var_1, (arr_1 [i_0] [i_2]))) : ((558725492 ? 3633533861 : 255))))));
                            var_23 = ((var_15 ? (((((-(arr_7 [i_2] [i_3])))) ? ((min((arr_10 [i_3] [i_1] [i_3]), var_2))) : ((808904561 ? 1229294517 : 12)))) : ((((((var_17 ? (arr_2 [i_2] [i_4]) : var_18)) <= (((arr_5 [i_0] [i_1] [i_3] [i_4]) ? (arr_2 [i_4] [i_4]) : var_13))))))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_3] = (((arr_16 [i_3] [i_3] [i_3] [i_2] [i_0] [i_1] [i_3]) ? ((((9223372036854775807 ? var_12 : (arr_9 [i_3]))) | (arr_17 [i_5] [i_3] [i_1] [i_2] [i_1] [10] [i_0]))) : (max(((((arr_14 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0] [i_1]) + (arr_10 [i_1] [i_1] [i_3])))), (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_14 : (arr_9 [i_3])))))));
                            var_24 = (93660124 ? 345 : 1);
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_25 = 21;
                            var_26 += (((var_18 ? var_10 : ((58 ? var_17 : var_15)))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_27 = ((!(((+(((arr_10 [i_1] [i_0] [i_1]) ? var_14 : var_10)))))));
                        var_28 = (arr_7 [i_0] [i_1]);
                    }
                    var_29 = (min(var_29, ((-((var_4 ? 1 : (-1433613129 / var_13)))))));
                }
                var_30 += (max(((var_9 ? ((var_18 ? var_2 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((arr_6 [i_0] [i_0] [i_1]) ? var_5 : var_8)))), ((var_7 ? 1 : (arr_24 [i_0])))));
            }
        }
    }
    var_31 = (1680120222 ? -2132399387 : 0);
    var_32 = (max(var_32, ((max(var_12, var_5)))));
    #pragma endscop
}
