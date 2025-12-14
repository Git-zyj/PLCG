/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((var_7 ? ((((var_10 < var_0) && (((var_2 ? var_5 : var_3)))))) : (((((var_8 ? var_11 : var_6))) ? (var_2 < var_8) : var_4))));
    var_14 = (32343 || (11 > 16307));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 &= (((~(arr_0 [1]))));
        var_16 = (min(((min((((!(arr_0 [i_0])))), (arr_0 [i_0])))), (((arr_1 [i_0] [i_0]) ? ((-(arr_1 [i_0] [i_0]))) : (~1)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (max(var_17, -0));
        arr_5 [i_1] |= (arr_3 [i_1] [i_1]);
        var_18 += ((((((arr_4 [i_1]) && (arr_4 [i_1])))) < ((+(((arr_4 [i_1]) ? var_6 : (arr_2 [i_1] [i_1])))))));
    }
    var_19 = (max(((min((var_0 == var_4), 15883))), ((var_0 ? -var_11 : var_0))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_20 = (min(var_20, (min((arr_8 [i_2]), ((!(arr_6 [i_2] [i_3])))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_21 = (((-(((var_6 || (arr_11 [i_4] [i_3] [i_2])))))));
                            arr_17 [i_2] = (--690);

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_22 |= ((-((~(arr_18 [9] [i_3] [1])))));
                                var_23 = (min((var_2 - 1), ((-(arr_11 [i_2] [i_4] [i_6])))));
                                arr_20 [i_2] [i_3] [i_3] [i_5] [i_3] = (max(((max((arr_13 [i_4] [i_4] [i_4]), (arr_9 [i_4] [i_5] [i_5])))), (arr_13 [i_2] [i_5] [20])));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                arr_24 [i_4] [18] [i_4] [i_3] [i_2] = ((~(arr_10 [i_3] [i_5] [i_7])));
                                var_24 = arr_14 [i_7] [i_7] [i_4] [i_4] [i_3] [i_2];
                                var_25 = (arr_22 [i_2] [i_2] [i_5]);
                            }
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_26 = (((-15876 + 2147483647) << (((var_12 + 13303) - 18))));
                                var_27 = 1;
                                var_28 |= (max((((arr_6 [i_5] [i_8]) ? var_11 : (arr_11 [1] [i_4] [i_4]))), ((((arr_11 [i_3] [i_3] [i_8]) >= (arr_15 [i_2]))))));
                                var_29 = var_0;
                            }
                        }
                    }
                }
                var_30 = (min(((((min(var_10, (arr_10 [i_2] [i_3] [i_2])))) % ((~(arr_16 [i_2] [i_2] [i_3] [i_3]))))), 21708));
            }
        }
    }
    #pragma endscop
}
