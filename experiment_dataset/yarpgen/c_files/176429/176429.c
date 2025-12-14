/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!((((40 << (var_7 - 2020509038534684240)))))));
        var_16 = ((!((min(-var_11, (max((arr_0 [i_0]), (arr_0 [i_0]))))))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_17 = ((+(((var_12 > var_11) ? (((var_0 >= (arr_3 [i_0])))) : var_0))));

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                arr_7 [i_0] [i_2 - 1] [i_2 + 1] = ((((((!(arr_0 [9]))))) < var_4));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_12 [i_0] [i_0] [1] [i_3] [i_4] = (arr_9 [i_0] [i_1 + 1] [i_2] [i_3]);
                        arr_13 [i_4] [i_0] [i_3] [17] [i_1 + 1] [i_0] [i_0] = (arr_9 [i_0] [i_2 + 1] [13] [i_0]);
                        var_18 = (max(var_18, (arr_4 [i_0 - 1] [i_3])));
                        arr_14 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [1] [i_0] = var_7;
                        arr_15 [i_0] = var_9;
                    }
                    arr_16 [i_0] [i_0] = var_11;
                    var_19 = ((-var_2 <= (arr_6 [i_0] [i_1] [i_2] [i_3])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] = ((!(((~(arr_11 [i_0]))))));
                    var_20 *= (arr_5 [i_2] [i_2] [i_2]);
                    arr_22 [i_2] &= ((var_5 ? (arr_10 [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_2]) : (arr_6 [i_2] [i_2] [i_0 - 1] [i_2])));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_21 = (min(var_21, (((((min(2048, 40))) ? (arr_20 [i_0 - 1] [i_1] [i_1 + 1] [i_2] [i_6]) : ((-((-(arr_24 [i_0] [i_1 - 1] [i_2 - 2] [0]))))))))));
                    var_22 += 4362862139015168;
                }
            }
            var_23 = (((((-(arr_18 [i_0] [i_1 - 1] [i_1 - 1] [16])))) - (min((arr_10 [i_1] [10] [6] [i_1 - 1] [i_1] [i_1] [i_0]), ((var_1 - (arr_5 [i_0] [i_0] [i_1 - 1])))))));
        }
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            arr_27 [i_0] [5] = 1;
            arr_28 [i_0] = ((((min((arr_20 [i_0] [i_0] [i_7 - 1] [i_0 - 1] [i_0]), (arr_20 [i_7 + 1] [i_0] [i_0] [i_0 - 1] [i_0])))) - ((max((arr_20 [13] [i_7] [i_0 - 1] [i_0 - 1] [i_0]), (arr_20 [14] [i_7 - 1] [i_7 - 1] [i_0 - 1] [i_0]))))));

            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                var_24 = ((((1 ? 140 : 230)) <= (((!(-3547489809900616602 && 24313243056358398))))));
                var_25 = (min(var_25, ((max(((((arr_1 [6]) < (arr_20 [i_7 - 1] [i_7] [i_0 - 1] [i_8 - 1] [0])))), (((var_9 + 40) % ((max((arr_1 [2]), (arr_0 [i_7])))))))))));
            }
        }
    }
    var_26 = ((((((var_14 || var_2) | var_6))) ? (min(var_9, (1 - var_13))) : var_2));
    var_27 = (min(var_27, (((((((max(var_14, var_3))) > (min(var_13, var_2)))) || var_3)))));
    #pragma endscop
}
