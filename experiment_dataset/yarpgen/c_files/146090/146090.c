/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_1 < var_9);
    var_12 -= 18392;
    var_13 = (var_4 && 0);
    var_14 = (max(((98 ? 8 : 42150)), -29762));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((((arr_2 [i_0]) ? var_10 : 463647808))) ? (arr_1 [i_0 + 1]) : ((2784161889868207018 ? -4165192016242359928 : -32)))) & (~-8047)));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_15 = arr_6 [i_2] [9];
                    var_16 = var_10;
                    arr_8 [i_2] [i_2 + 2] = (max((((!(arr_7 [9] [i_1] [i_2] [i_2])))), (max((((arr_7 [i_0 + 1] [1] [7] [i_1]) ? var_8 : 1)), (arr_0 [i_2 + 2] [i_2 + 1])))));
                    var_17 = (max(var_17, (((~((var_0 ? (~var_6) : ((var_4 ? (arr_1 [i_2 - 1]) : (arr_6 [i_1] [i_1]))))))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_3] [i_3] [i_2] [i_3] = (max(507904, 25));
                        arr_12 [i_0] [7] [i_2] [i_2] = ((1009777210 ? 7030072501848114309 : -15087));
                        arr_13 [i_2] [i_1] [i_1] [i_2] = (((((arr_0 [i_0 + 1] [i_2 - 1]) || (arr_0 [i_0 + 1] [i_2 + 2]))) ? (min(var_6, (~var_2))) : (((((arr_2 [i_0 + 1]) ? (-2147483647 - 1) : var_5)) - (((arr_5 [2] [i_1] [i_3]) ? var_5 : (arr_0 [i_3] [i_1])))))));
                        var_18 = ((-(((arr_6 [i_2] [i_0 + 1]) ? (arr_6 [i_2] [i_0 + 1]) : 18014398509481983))));
                    }
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_19 = (!141);
                    arr_17 [i_0] [i_0 + 1] [i_1] [i_0] = (!18446744073709551595);
                }
                /* vectorizable */
                for (int i_5 = 4; i_5 < 8;i_5 += 1)
                {
                    arr_20 [i_5] [i_1] [i_0 + 1] [i_0 + 1] = ((arr_14 [i_0 + 1] [i_5 + 1]) >= var_4);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_5] [5] [i_7] = ((-(arr_16 [i_0 + 1] [i_0 + 1] [i_5 - 4] [i_6])));
                                arr_29 [i_0] [i_0 + 1] [10] [i_5] [3] [i_7] = (((arr_3 [9] [i_0 + 1] [i_0 + 1]) >> (((arr_25 [i_0] [i_0] [i_0 + 1] [i_7] [i_7] [i_7] [1]) - 1959693910))));
                            }
                        }
                    }
                    var_20 = ((arr_0 [i_0 + 1] [i_0]) ? (arr_15 [i_0]) : (arr_3 [i_0] [i_0] [i_0 + 1]));
                }
                var_21 = ((((-(arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) >> ((((arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) || (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
