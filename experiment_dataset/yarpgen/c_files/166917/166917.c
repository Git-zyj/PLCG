/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_0]);
                            arr_10 [i_0] [i_1] [i_1] [i_0] = (arr_7 [i_0] [i_0] [i_0]);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_12 = (((((max(var_9, (arr_3 [i_0] [i_1] [i_0])))) / (arr_8 [i_0] [i_1] [i_4] [i_4] [i_0]))));

                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        arr_15 [i_0] [i_5] [i_4] [0] [i_0] = ((((((arr_13 [i_0] [i_1] [i_1] [i_5 - 2]) ? (arr_1 [i_5 - 1]) : -1231301344))) ? (arr_1 [i_5 + 1]) : (min((arr_1 [i_5 - 3]), (arr_1 [i_5 - 1])))));
                        var_13 = (((arr_12 [19] [19] [19] [19]) * ((((max(var_6, 2717890060))) ? -var_5 : ((var_4 * (arr_5 [i_0] [i_0] [i_0])))))));
                        arr_16 [i_0] [i_4] [i_1] [i_0] [i_0] = (min((arr_5 [i_0] [i_1] [i_5 + 1]), -65511));
                    }
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_19 [i_0] [i_1] [i_1] [i_0] = ((-((0 ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (72 / 4294967280)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_14 = ((~(min((min((arr_22 [i_8] [i_7] [i_0] [i_0]), 0)), (~var_3)))));
                                var_15 = (((-(106 != -16753))));
                                var_16 = (((((~(((-28 + 2147483647) << (1 - 1)))))) ? var_4 : (((-(arr_11 [i_0] [i_0] [i_0]))))));
                                arr_27 [i_0] [7] [i_0] [i_0] [i_0] [7] [i_0] = (((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) && var_7));
                            }
                        }
                    }
                    var_17 += (arr_6 [i_6] [i_0] [i_0]);
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((arr_2 [i_0]) ? ((((!(arr_12 [i_0] [i_0] [i_0] [i_0]))))) : (min(((((arr_1 [i_0]) ? (arr_5 [i_0] [1] [18]) : var_10))), (max(var_8, 29)))));
                }
                arr_29 [i_0] = ((!(16628749741404693773 && 16884865701799826802)));
            }
        }
    }
    var_18 = ((0 ? (min(var_3, (min(var_1, 18446744073709551607)))) : ((max(1, 3048666402)))));
    var_19 = (min(((var_9 ^ ((21 >> (var_1 - 13650))))), ((max((!var_3), (29 && -6))))));
    var_20 &= (min((min(((max(var_1, var_0))), var_4)), var_11));
    var_21 = (max(var_21, (((var_3 ? ((min(var_1, var_5))) : ((-(var_5 / 18446744073709551608))))))));
    #pragma endscop
}
