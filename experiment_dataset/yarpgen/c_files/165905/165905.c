/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 ? (-2147483647 - 1) : var_9));
    var_17 = var_15;
    var_18 = (var_3 && -31107);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((var_13 ? (arr_4 [i_4 - 2]) : (var_2 * var_10)))) ? (((((var_13 != (arr_4 [i_4]))) || ((-31108 && (arr_4 [1])))))) : ((-(var_11 || var_14)))))));
                                var_20 = (((arr_3 [i_4 - 2] [i_3 - 1] [i_2 + 2]) + var_10));
                                arr_17 [i_0] [i_1] [i_3] [i_3] [i_4 - 2] = (arr_16 [i_3]);
                                arr_18 [i_0] [i_1] [i_3] [i_3] [i_4] [2] = (max(((min((min((arr_3 [i_0] [i_1] [i_3]), -3689)), (arr_14 [i_3] [i_3] [i_2] [4] [i_3])))), var_13));
                                var_21 -= 681479418;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_22 = (((var_15 / var_3) != (172642545 / var_4)));
                        arr_23 [i_0] [4] [1] [i_5] [6] [i_1] = ((31107 != (((((arr_12 [i_5] [i_2 - 2] [i_1 - 1] [i_1 + 1]) && var_4))))));
                        var_23 = (min(var_23, var_2));
                    }
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        arr_28 [i_0] [5] [5] [i_6] [i_6] [5] = (max((max((arr_12 [i_0] [i_0] [i_2] [i_1]), (arr_0 [i_1] [i_1]))), (arr_14 [i_0] [0] [i_0] [i_2 - 2] [i_6])));
                        var_24 = (206 && -29663);

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_25 = (min(var_25, 1484766150847023809));
                            var_26 -= (arr_20 [i_7] [i_2] [1] [2]);
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_35 [i_6] [i_1] [i_1] [0] [i_1 + 1] [2] [i_1] = 13084372383600065701;
                            var_27 -= ((min(((2652725561978182164 ? var_3 : var_1)), (63 - -2652725561978182165))));
                            var_28 = var_7;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
