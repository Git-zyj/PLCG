/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = var_14;
    var_21 = var_2;
    var_22 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_23 = (max((min((arr_4 [i_0 + 1] [i_2]), (arr_4 [i_0 + 1] [3]))), (min((-9223372036854775807 - 1), (-9223372036854775807 - 1)))));
                    var_24 = ((9223372036854775807 != (-9223372036854775807 - 1)));
                    arr_8 [i_0 - 1] [i_0 - 1] [i_2] = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_25 = (min((min(-1, (-9223372036854775807 - 1))), ((21787 + (-9223372036854775807 - 1)))));
                                var_26 = ((((!(45 <= 17715672329918719872))) && (min(((!(arr_13 [i_0 - 1] [i_1] [12] [i_3] [i_4] [i_3]))), (((arr_6 [i_0] [i_1] [i_2] [i_3]) >= (arr_10 [13] [i_2] [13] [1])))))));
                                arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = var_0;
                            }
                        }
                    }
                }
                arr_15 [i_0 - 1] [9] [i_1] = (!9223372036854775807);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_27 = var_12;
                            var_28 = ((((min((-9223372036854775807 - 1), 18446744073709551603))) ? ((-(arr_17 [i_0 + 1]))) : (((arr_3 [i_0]) ? (arr_18 [i_5] [i_5] [i_1]) : (max((arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [0] [i_0] [0]), (arr_6 [i_0 + 1] [i_1] [i_5] [i_6])))))));
                            var_29 = (((arr_7 [i_6] [i_5 + 2] [i_1]) / (arr_7 [i_0 + 1] [i_5 - 1] [i_6])));
                            var_30 = (min((min(9223372036854775807, -9223372036854775807)), ((min((arr_13 [i_0] [i_0] [0] [13] [i_0 + 1] [i_6]), (arr_2 [i_0]))))));
                            arr_21 [i_0 - 1] [i_1] [i_5] [i_6] [i_6] = (arr_4 [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
