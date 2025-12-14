/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((!-2048) || (((-60 ? -1 : -29866)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_10 = ((-(arr_4 [i_1 - 1] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = -32766;
                        arr_13 [i_0] [i_0] = (((arr_7 [i_0] [i_1] [i_2] [i_3]) ? (arr_11 [i_1 - 1]) : var_2));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_11 = ((18227 ? 13 : 2147483647));
                            arr_16 [i_4] [i_4] [i_3] [i_2] [i_1] [i_4] = ((-(arr_0 [i_1 + 1] [i_1])));
                            arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] [i_4] = var_4;
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_12 = 3264854660;
                            var_13 = (2911576492 < var_7);
                            var_14 = ((~(arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5])));
                            var_15 = 2657;
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_16 = 127;
                            arr_24 [i_0] [i_6] [i_2] [i_3] [i_6] = (1023 <= var_9);
                            var_17 = ((~(arr_1 [i_1] [i_1 + 1])));
                            arr_25 [i_0] [i_1] [i_2] [i_6] = var_0;
                        }
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            arr_30 [i_7] = ((((max((-32767 - 1), (max((arr_9 [i_7] [i_7] [i_0]), var_7))))) ? ((min((min((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] [i_7]), (arr_18 [i_7]))), ((1872475215 ? (arr_0 [i_0] [i_7]) : var_1))))) : (~-var_4)));
            var_18 = -var_0;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_39 [i_0] [i_7] [i_8] [i_9] = (min((arr_10 [i_0] [i_7] [i_8] [i_9] [i_8]), var_3));
                        var_19 = var_6;
                        var_20 = ((((((var_8 << (25 - 4)))) > var_4)));
                        arr_40 [i_0] [i_7] [i_9] = var_5;
                        arr_41 [i_0] [i_7] [i_8] [i_9] = ((~((~(max(var_0, (arr_5 [i_9] [i_0])))))));
                    }
                }
            }
            var_21 = ((((max(-var_3, var_0))) && (arr_34 [i_0])));
            arr_42 [i_0] [i_7] [i_7] = -1971549915;
        }
        var_22 = var_2;
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_23 = ((((min((-59 + 2147483647), var_8))) ? ((var_4 ? 1430667244 : ((2147483647 ? var_9 : (arr_43 [i_10] [i_10]))))) : ((var_5 * (arr_44 [i_10])))));
        arr_45 [i_10] = (min(5447039319983706540, var_1));
    }
    var_24 = 50;
    #pragma endscop
}
