/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((var_12 <= ((16 ? var_9 : var_9))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] &= ((((((arr_1 [1] [1]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [18])))) ? var_7 : (max(((7977 & (arr_0 [i_0] [i_1]))), var_5))));
            var_16 = (arr_3 [i_1]);
        }
        arr_7 [24] = (max(((~(max(var_9, (arr_1 [i_0] [10]))))), (arr_3 [i_0])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_17 = 7977;
                                arr_19 [i_5] [i_4] [i_3] [i_2] [i_2] [i_0] = (((arr_3 [i_5]) ? ((((arr_14 [i_5 + 2] [i_2] [i_3] [i_5 + 2] [i_5 + 2]) ? ((((arr_11 [4] [i_2] [i_2] [i_4]) <= var_4))) : (arr_9 [17])))) : var_5));
                                arr_20 [i_2] [i_2] = (arr_2 [i_0]);
                            }
                        }
                    }
                    var_18 = (arr_3 [i_0]);
                }
            }
        }
        arr_21 [i_0] [i_0] &= ((((((arr_17 [i_0] [i_0]) % (var_7 + var_5)))) ? (max(var_5, (arr_1 [i_0] [i_0]))) : (2952291662211356180 >= 1)));
    }
    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_19 = (((arr_12 [i_6] [i_6 + 3]) < (arr_12 [i_6] [i_6 + 3])));

        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_29 [i_6 + 2] [i_6 + 2] &= (arr_23 [i_6 + 1] [i_7 + 2]);
                arr_30 [i_7] [i_6] = (((((arr_11 [i_6] [i_7] [i_8] [i_7]) == (arr_15 [i_6 + 1] [i_6 + 1] [i_6 + 1]))) ? (((max((!var_11), (arr_12 [i_6 + 3] [i_6 + 3]))))) : var_12));
            }
            arr_31 [i_6] = -2383714084;
            var_20 &= var_13;
            var_21 &= (((arr_0 [i_6] [i_7 + 4]) << (((((~1) ? var_2 : 1)) - 3298185638))));
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            var_22 = ((max((arr_11 [i_9] [i_9] [i_9 + 3] [i_9 + 3]), 7983)));

            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_23 &= (min((((arr_34 [i_6 - 1] [i_9 + 3] [i_6 - 1] [i_6 - 1]) ? (arr_5 [i_6 + 1] [i_9 + 1] [i_10]) : (-2952291662211356205 * 1))), ((((arr_34 [i_10] [i_6] [i_6] [i_6 - 1]) ? var_6 : (arr_35 [i_6] [i_9 + 2] [i_9 + 2] [i_10]))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_24 = -var_8;
                            var_25 = ((((max((max(1, var_14)), (arr_12 [i_11] [i_6])))) ? (arr_1 [i_11] [i_12]) : (arr_22 [i_9])));
                            var_26 = ((var_0 % (56954 + var_2)));
                        }
                    }
                }
            }
            arr_42 [i_6] = (min(((var_7 | (arr_36 [i_6] [i_9 + 2] [14] [i_6 - 1]))), (((arr_36 [i_6] [i_9 + 2] [4] [i_6 - 1]) >> (((arr_36 [i_6] [i_9 + 2] [10] [i_6 - 1]) - 321086158))))));
            var_27 = (min((max((arr_11 [i_9 + 3] [i_9] [i_6 + 1] [i_6]), var_13)), (((arr_12 [i_6 + 1] [i_6]) ? (arr_11 [i_9 + 3] [i_6] [i_6 + 1] [i_6]) : (arr_11 [i_9 + 3] [i_9] [i_6 + 1] [i_6])))));
        }
        var_28 = (max(var_28, (((((((((arr_37 [i_6] [i_6] [i_6] [i_6]) & 0))) ? 0 : 2147483647)) & (arr_34 [i_6] [i_6] [2] [i_6]))))));
    }
    for (int i_13 = 1; i_13 < 15;i_13 += 1) /* same iter space */
    {
        var_29 = (max(var_29, ((max(((((min(-24527, 1))) ? ((-2952291662211356209 ? 1 : var_1)) : var_13)), (((arr_16 [13] [i_13 + 1] [i_13] [i_13 + 3] [i_13 + 1] [i_13 + 1]) ? (arr_16 [i_13 + 3] [i_13 + 3] [i_13] [i_13 + 2] [2] [i_13 + 2]) : 178)))))));
        var_30 &= (((((~(17744897 == 1)))) ? (max(-9052520887832243573, (arr_8 [i_13] [i_13 + 2]))) : 0));
        var_31 = (((((-13 ? 17744897 : (arr_2 [i_13])))) ? ((max((max(17744897, var_7)), (arr_39 [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 2] [14])))) : (arr_33 [i_13 + 2] [i_13 - 1])));
    }
    var_32 = (max(var_32, (((var_2 ? (var_2 < var_2) : var_13)))));
    var_33 = (min((11248643456112793399 || 8176), ((~(var_9 || 6649)))));
    #pragma endscop
}
