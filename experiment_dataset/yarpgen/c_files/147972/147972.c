/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((93 ? 30 : 2171615229)), 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = (((((arr_2 [i_0]) - (arr_2 [i_0]))) / (arr_10 [i_0] [i_2] [i_0])));
                        arr_11 [i_0] [i_3] = (max(((!(arr_8 [i_2] [i_0] [i_0]))), ((!(var_9 + var_3)))));
                        var_13 = (min((1 * 0), (arr_3 [i_0])));
                        var_14 = min(((((var_6 ? 1 : (arr_7 [i_0] [i_1] [11]))))), (max(((1 ? (arr_2 [i_0]) : var_9)), 35203187)));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_15 = var_3;
                            arr_14 [11] [i_1] [i_2] [i_1] [i_0] = (((((2456135503435353826 ? var_3 : var_1))) ? var_6 : (arr_6 [i_0] [i_1] [i_0] [i_3])));
                            var_16 = (min(var_16, (arr_8 [i_4] [i_4] [i_4])));
                            var_17 = ((!((!((min(1, var_6)))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_18 -= (var_2 * var_7);
                            var_19 = (14913641460557786831 > 1);
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_0] [i_5] [9] = (((!var_9) || 1492));
                            arr_20 [i_0] [i_3] [i_1] [i_1] [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_24 [i_0] [15] [i_1] [i_1] [i_1] [i_0] = (arr_4 [i_0]);
                            var_20 = (min((arr_12 [i_2]), (arr_3 [i_0])));
                        }
                    }
                    var_21 = (max(var_21, (((!((((arr_16 [i_1] [i_1] [i_1]) % var_2))))))));
                }
                var_22 += ((13539 ? var_4 : (arr_17 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_1])));
                var_23 = (((((arr_18 [i_0] [i_1] [i_1] [i_1] [i_1]) ? (arr_18 [i_0] [i_1] [8] [i_1] [i_1]) : (arr_3 [i_1])))) ? ((-(arr_15 [i_1] [i_1] [i_1] [i_0] [i_1]))) : var_6);
                var_24 = (min(var_24, ((min(60, ((((arr_1 [i_0] [i_1]) && (arr_12 [15])))))))));
            }
        }
    }
    var_25 = (max(var_25, (!-1403507426)));
    #pragma endscop
}
