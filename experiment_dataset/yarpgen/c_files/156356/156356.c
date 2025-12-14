/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_0));
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (max(((max((!74), var_6))), (min((!61), (min((arr_2 [i_1]), (arr_6 [5] [5] [5])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_16 += (max(((160 ? (arr_3 [i_1 + 1]) : 74)), (min((arr_5 [i_0]), (arr_7 [i_1 - 1] [i_3 + 1])))));

                            for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                            {
                                var_17 |= ((((((arr_0 [i_3 + 2] [i_1]) >= (66 > 1)))) >> (((((arr_1 [i_0] [i_1]) << (((((arr_1 [i_2] [i_3]) ? var_11 : (arr_1 [i_4] [i_0]))) - 17928721420768135861)))) - 268435454))));
                                var_18 = ((+(((arr_10 [i_4 - 1] [i_3 + 1] [i_2] [i_2] [i_1 - 3] [i_0]) - (arr_10 [i_0] [i_0] [1] [i_0] [i_0] [i_0])))));
                            }
                            for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_5] [i_1] [i_2] [i_3] [i_5 + 1] = ((((max((arr_0 [i_5 + 2] [i_5 - 1]), (arr_16 [i_5] [i_5] [i_5] [i_5] [i_3 + 1] [i_5] [i_1 - 3])))) ? (((((arr_16 [i_3] [i_5] [8] [i_1 - 3] [i_3 + 2] [i_5] [i_1 - 3]) > (arr_0 [i_5 + 1] [i_5 + 2]))))) : (min((arr_16 [i_1 + 2] [i_5] [i_3 - 1] [8] [i_3 - 1] [i_5] [i_1 + 2]), var_9))));
                                arr_18 [i_0] [i_1 - 2] [i_1 - 1] [i_2] [i_3 + 3] [i_5] = var_7;
                            }
                            for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_2] [2] [i_0] [i_3] [i_3] [i_2] |= ((((max(27361, (arr_4 [i_0])))) + -86));
                                var_19 = var_4;
                            }
                            var_20 -= 15687297923300744537;
                            var_21 = (min((1 + 1), ((max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_2]), var_9)))));
                            var_22 = (min(var_22, var_0));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 12;i_9 += 1)
                            {
                                var_23 -= (((arr_1 [i_1 - 3] [i_1 - 2]) & 85));
                                var_24 = (min(var_24, (var_10 < var_12)));
                            }
                            for (int i_10 = 1; i_10 < 8;i_10 += 1)
                            {
                                var_25 = (arr_3 [i_0]);
                                var_26 = (min(var_12, var_4));
                            }
                            var_27 = (max(var_27, (((!((max(-84, (arr_7 [i_1] [i_7])))))))));
                            var_28 = (((arr_13 [i_0] [i_1] [10] [i_8] [i_8]) == (((arr_28 [i_1 + 3] [i_1 - 2] [i_7] [i_7] [i_7]) ? (arr_7 [i_1 - 2] [i_1 + 1]) : (arr_7 [i_1 - 1] [i_1 + 2])))));
                            var_29 = ((+(min((((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 3494080414 : (arr_1 [i_1] [11]))), ((((arr_29 [i_0] [i_0] [7] [i_0] [i_0] [10] [i_0]) + (arr_19 [i_7]))))))));
                        }
                    }
                }
                arr_34 [i_0] [i_0] = (max((arr_32 [i_0] [1] [i_0] [6] [i_1] [3]), (max((arr_1 [i_0] [i_1 + 3]), var_11))));
            }
        }
    }
    var_30 = (max(16646144, 9192525576784416973));
    #pragma endscop
}
