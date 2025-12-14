/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = ((((((8064 + 255) ? 23733 : 0))) ? (((((var_8 ? var_2 : var_2))) ? (arr_0 [i_0]) : (!-1126608416))) : (((-((198 ^ (arr_4 [i_0] [9] [i_0]))))))));
                arr_5 [i_0] [i_0] [i_0] = min(230, (((!((((arr_2 [i_0]) << (71 - 60))))))));
                arr_6 [i_0] [i_1] |= (((arr_4 [i_0] [i_1] [i_1]) ? 1 : 9));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_2 - 1] = 3754;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_14 [2] [i_1] [6] |= -61781;
                        arr_15 [i_3] [i_3] [i_3] [i_3] = 208;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_19 [i_3] [i_1] [i_1] [i_1] [i_1] = (8063 & var_0);
                            arr_20 [i_3] [i_1] [i_2] [i_3] [i_4] [6] [i_0] = (((arr_10 [i_2] [i_2] [i_2 - 2]) || (((58 ? (arr_0 [i_0]) : 184)))));
                            var_11 = (max(var_11, 214));
                            var_12 ^= ((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 207 : (arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_3]));
                        }
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_0] [i_2] [i_5] = (((((-(arr_0 [i_2 - 1])))) || ((min(57473, (arr_17 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 1] [i_2]))))));
                        var_13 = 8796093022207;
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_14 = var_9;
                        var_15 = (var_7 ? (min((arr_13 [i_2 - 2] [i_6] [i_6] [i_6] [i_6] [i_6]), 8)) : (-var_6 / 60989));

                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_31 [i_0] = ((((((((arr_9 [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_2] [i_6]) : var_3))) ? var_5 : (((max(37147, 51)))))) < 34830));
                            var_16 += (!9223372036854775552);
                            var_17 = ((((((((36692 ? 65527 : 1))) ? (28371 < 36667) : ((min(28404, 4546)))))) ? var_0 : (((((37132 ? (arr_1 [i_2]) : 28)) >> (var_8 - 2558941184))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_18 = (((arr_34 [i_0] [i_1] [i_1] [i_1] [i_2 - 2] [i_6] [i_8]) ? var_1 : (arr_34 [i_0] [i_1] [i_1] [i_6] [i_1] [i_8] [i_2])));
                            arr_35 [i_0] [i_0] [i_0] = ((-(arr_21 [i_2 + 1] [i_2 + 1] [i_2] [i_6])));
                            arr_36 [i_0] [i_1] [i_2] [i_6] [5] [i_6] = (~28390);
                            var_19 = 1;
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] = (((arr_16 [i_0]) % ((((arr_28 [i_2 + 1] [i_2 + 1] [i_2 - 1]) || (arr_28 [i_2 - 2] [i_2 - 2] [i_2 + 1]))))));
                            var_20 = (1 >= 2147483647);
                            arr_40 [0] [i_1] [i_2] = ((-(((arr_27 [i_0] [i_1] [i_2] [i_2 - 1]) ? 0 : 2441279387))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, ((min(((var_1 ? 73 : var_6)), var_6)))));
    var_22 = ((511729143154695398 | ((218 ? ((var_9 ? var_1 : var_7)) : (3327118862 & var_7)))));
    #pragma endscop
}
