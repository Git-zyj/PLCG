/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = var_1;
                            var_15 = (((var_0 & 13466483874229569803) & ((max(var_1, var_5)))));
                            var_16 = 8377274416672024107;
                            var_17 ^= (952980542 | 17442497397097506771);

                            for (int i_4 = 2; i_4 < 7;i_4 += 1)
                            {
                                var_18 = (((((arr_11 [i_1 - 2]) < ((((arr_6 [i_1] [i_1] [i_2 - 2]) < var_12))))) ? (max(4980260199479981791, -24768)) : (min((arr_1 [i_0] [i_0]), (var_0 && 34002)))));
                                arr_15 [i_0] [i_2] [10] [i_4] = -905965218;
                                var_19 = (((((arr_12 [i_2] [i_3] [i_3] [i_3 - 3]) & var_11)) << (3449910606674633281 > -24765)));
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_20 = (~48788);
                                var_21 ^= ((215341075 ? ((var_2 - (max(var_4, (arr_9 [1] [i_2] [i_2 - 2] [i_2] [1]))))) : (((var_0 ? (arr_7 [i_3 - 2] [i_1 - 1] [i_2 + 1]) : (arr_7 [i_3 - 2] [i_1 - 1] [i_2 + 1]))))));
                                arr_19 [i_0] [i_1] [i_2 - 4] [i_3] [i_5] = 952980543;
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                            {
                                var_22 |= (((((24764 > (arr_0 [i_0] [i_0]))) ? (arr_8 [i_1 - 2] [i_1] [1]) : ((1 ? var_0 : var_1)))) & ((((((((arr_4 [i_6]) ? (arr_4 [i_0]) : var_9))) || ((max(-847359668, 16748))))))));
                                arr_22 [i_0] = arr_11 [i_0];
                                var_23 = (min(var_23, (((-24751 - (~-964616132))))));
                            }
                        }
                    }
                }
                arr_23 [i_0] [1] [i_0] |= min(-23308, ((48788 ? (-17573 ^ -1732) : (((103 || (arr_13 [i_1] [2])))))));
                var_24 ^= (min((max(1534107129, (arr_16 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1]))), (((arr_16 [i_0] [i_1 - 2] [i_0] [i_1 - 2] [i_1 + 1]) ? var_11 : (arr_16 [i_0] [i_1 - 2] [i_1] [i_1 - 2] [i_1])))));
            }
        }
    }
    var_25 &= ((var_12 ? ((var_0 ? var_10 : -6735)) : -var_8));
    var_26 = -var_7;
    #pragma endscop
}
