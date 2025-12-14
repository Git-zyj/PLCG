/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1 + 1] = (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : var_0));
            arr_6 [i_0] [i_1 + 1] = (((arr_4 [i_0] [i_1]) > (arr_0 [i_0] [i_0])));
            var_11 = (((arr_2 [i_1]) / (((arr_4 [i_0] [i_1]) / (arr_0 [i_0] [i_0 - 1])))));
            var_12 += (((arr_1 [i_0 + 4]) ? ((~(arr_0 [i_0] [i_1]))) : var_2));
        }
        var_13 = var_4;
        var_14 = (((((max((arr_1 [i_0]), var_3)))) ? (((((((arr_2 [i_0 + 4]) == var_7)))) / ((65384 ? (-2147483647 - 1) : (arr_4 [i_0] [i_0]))))) : (((((min(var_10, (arr_3 [i_0 + 2])))) ? var_10 : (min((arr_2 [i_0]), (arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_0 + 3] [i_0 + 3] [i_2] [i_4 - 2] |= ((((((arr_8 [i_3] [i_3]) ? (max((arr_3 [i_4]), var_3)) : ((((arr_9 [i_0] [i_0] [i_0]) ? (arr_2 [i_3]) : (arr_0 [i_0] [i_2]))))))) ? ((((!((min(var_2, (arr_1 [i_4])))))))) : (max((min(var_6, (arr_8 [i_0] [i_3]))), ((var_8 ? var_6 : var_9))))));

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_15 = (min((min(var_8, (arr_12 [14] [i_5 + 1] [i_0 + 1] [i_0] [i_0]))), (arr_13 [i_0] [i_0 - 1] [i_0] [i_0])));
                            arr_17 [i_0] [i_0 - 1] [i_0] [i_0] = ((-((((arr_1 [i_0 + 2]) > (arr_13 [i_0] [i_2] [i_3] [i_2]))))));
                            arr_18 [i_0] [i_0] = (min(((((-2147483647 - 1) ? var_10 : 1))), (((634489881752355565 - 4346125582556619684) ? (min((arr_2 [i_0]), (arr_4 [i_0] [i_5]))) : ((((arr_8 [i_0 + 1] [i_0]) << (((arr_2 [i_0]) - 836181819)))))))));
                            var_16 = (max(var_16, ((max((arr_10 [i_0] [i_3] [i_5 + 1]), var_9)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_4 - 1] [i_6] [i_2] [i_4 + 1] = (((arr_12 [i_0 + 1] [1] [i_0] [i_0] [i_0 + 4]) ? (arr_9 [i_0 + 1] [9] [i_0 + 1]) : (arr_13 [i_0] [i_0] [i_0] [i_0])));
                            var_17 = (~(arr_16 [i_0] [i_0] [i_0] [i_2] [i_0] [5] [i_6]));
                            var_18 = ((-(((arr_2 [i_6]) ? (arr_20 [i_6] [i_6] [1] [1] [5] [i_0]) : var_8))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_19 = ((((max((arr_4 [i_0] [i_4 - 2]), (max(634489881752355565, (arr_2 [i_0 + 3])))))) ? (~var_0) : ((~(min((arr_13 [i_0] [i_2] [i_2] [i_4]), (arr_3 [i_0 + 4])))))));
                            var_20 = ((!((((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0 + 3]) ? (((arr_16 [i_0] [i_2] [i_7] [i_4] [i_3] [i_2] [i_4]) ? var_9 : var_6)) : var_10)))));
                            arr_26 [i_4] [i_4] [i_3] [i_0] [i_3] = (arr_4 [i_0] [i_4 + 1]);
                            var_21 = ((9013473286997450974 ? (1981744209936328268 == 0) : (min(-var_10, (arr_2 [i_4 - 1])))));
                            var_22 *= (min((((((max((arr_20 [i_0] [i_0] [i_2] [i_3] [i_2] [i_7]), (arr_11 [i_2] [i_3] [i_3] [i_3])))) && (arr_11 [i_2] [i_0 + 1] [i_3] [i_4 - 2])))), (min(1, 64))));
                        }
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_23 = arr_2 [i_8];
                        var_24 ^= ((var_1 ? -var_3 : ((((((arr_20 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2]) + (arr_13 [i_2] [i_3] [i_2] [i_2]))))))));
                        arr_29 [i_0] [i_2] |= ((((((((!(arr_15 [i_0] [i_3] [i_2] [i_3] [i_8])))) + ((max((arr_24 [i_0] [i_0] [4] [i_2] [i_3] [i_8] [i_3]), (arr_22 [i_0] [i_0 + 3] [i_3] [i_0] [i_0]))))))) && ((min((arr_7 [5] [i_2]), (max((arr_9 [12] [12] [i_0]), var_0)))))));
                        var_25 = (max(var_25, var_4));
                    }
                    arr_30 [i_0] [i_0] [i_0] [i_0] = (~((+((((arr_27 [i_0] [i_0] [i_0] [i_0]) <= var_2))))));
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        var_26 = (((((arr_31 [i_9 + 2] [i_9 + 2]) != var_10)) ? (arr_16 [i_9] [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2]) : (arr_31 [i_9 + 2] [i_9 + 2])));
        var_27 = ((-(((arr_32 [i_9 + 2]) ? -var_9 : -var_9))));
    }
    var_28 = ((((0 ? 1840827287 : (4762 || 135275089)))) && ((max(((min(var_3, var_1))), (min(var_6, var_0))))));
    var_29 = var_5;
    var_30 = (1 ^ 127);
    #pragma endscop
}
