/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_13));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~108);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, -var_14));

                        for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_17 = 11143815958568327687;
                            var_18 += ((((((!var_13) ? ((min(-108, (arr_9 [i_0] [i_1] [i_4] [i_3] [i_4 + 1] [i_4])))) : (var_3 || 93)))) && ((!(arr_10 [i_4 - 1] [i_1 + 4])))));
                            var_19 -= (((((arr_7 [i_0] [i_1] [i_4 + 1]) + (arr_7 [i_1] [i_3] [i_4])))) ? (arr_7 [i_1] [i_3] [i_4 - 1]) : ((var_4 ? var_8 : (arr_7 [i_0] [i_1 + 2] [i_3]))));
                        }
                        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, ((((~11637707987207899834) | (((min((arr_7 [i_1 + 2] [i_1 + 4] [i_5 + 1]), (arr_7 [i_1 + 1] [i_1 + 2] [i_5 + 1]))))))))));
                            arr_14 [i_5] [i_5] [i_2] = (((0 + 33292288) ? (arr_0 [i_1] [i_2]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_21 = (max(var_21, (min(((~(arr_13 [i_0] [i_0] [i_0] [i_0]))), var_4))));
                            var_22 = (max(var_22, ((min((min((arr_9 [i_1 + 1] [i_5 - 1] [i_2] [i_3] [i_5 - 1] [i_2]), (arr_9 [i_1 - 1] [i_5 - 1] [i_2] [i_3] [i_5 - 1] [i_0]))), (arr_9 [i_1 - 1] [i_5 + 1] [i_2] [i_3] [i_5 - 1] [i_5 + 1]))))));
                        }
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            var_23 = (((((~(min(var_12, var_12))))) ? var_3 : ((((arr_10 [i_0] [i_0]) ? (((min(var_1, 27668)))) : var_7)))));
                            var_24 = ((((((arr_2 [i_0] [i_1]) ? (arr_5 [i_0] [i_0] [i_0]) : var_13))) ? ((-(((arr_16 [i_0] [i_0] [i_0] [i_3] [i_2]) ? var_5 : (arr_13 [i_2] [i_1] [i_2] [i_3]))))) : (max(((min((arr_16 [i_0] [i_1] [i_0] [i_6 - 1] [i_0]), var_13))), (~var_1)))));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_25 |= (arr_2 [i_0] [i_3]);
                            var_26 = ((!((min((arr_7 [i_1 + 2] [i_1] [i_1 - 1]), (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 4]))))));
                        }
                        arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] = 100;
                        arr_20 [i_0] [i_1] [i_1] [i_3] = (max((max(((-(arr_5 [i_1] [i_2] [i_3]))), ((1539651652 ? -573478428 : 6)))), (((!(arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                        var_27 = (max(var_27, (max(var_3, (arr_8 [i_0] [i_3] [i_2] [i_0] [i_0])))));
                    }
                }
            }
        }
    }
    var_28 = (!var_9);
    var_29 = var_11;
    #pragma endscop
}
