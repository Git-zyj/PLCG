/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(1127851707740937299, (!18446744073709551615)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_17 [i_0 + 1] [i_1] [i_0 + 1] [9] [i_0 + 1] [i_4] = 1;
                                var_16 = ((((((((arr_11 [i_0] [i_1] [i_1] [i_3 + 3]) % 17318892365968614316))) ? var_9 : (min(var_4, (arr_1 [9])))))) ? (arr_8 [3] [3] [i_3 - 2]) : (~var_9));
                            }
                        }
                    }
                }
                var_17 = (max(((2 ? var_12 : var_12), (arr_11 [i_0 - 1] [i_1] [i_1] [i_0]))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                arr_27 [i_0] [i_0] [i_5 - 1] [10] [4] = 7892348970469656813;
                                arr_28 [i_1] [i_6] [i_7] = (13147375989853310662 - 17318892365968614318);
                                var_18 = 5299368083856240954;
                                var_19 = (var_4 ? (arr_26 [i_0 + 1] [i_5 + 1] [i_5]) : 2);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 11;i_8 += 1)
                            {
                                arr_31 [i_0] [10] [i_5] [i_8] [5] [5] = (7715073368042241466 & 10554395103239894802);
                                var_20 = arr_0 [i_0 + 1] [i_1];
                            }
                            for (int i_9 = 3; i_9 < 7;i_9 += 1)
                            {
                                var_21 = ((var_7 ? ((var_14 & (arr_30 [i_0 + 1] [3] [i_5 - 1] [2] [i_6] [i_6] [i_9]))) : (min(var_4, (arr_15 [6] [i_1] [i_5] [i_1] [3] [i_5 - 1])))));
                                arr_34 [i_0 + 1] [i_1] [6] [5] = (-(max(-var_0, (max((arr_26 [i_5 + 2] [i_9] [i_5]), 5299368083856240941)))));
                            }
                            arr_35 [i_0] [i_0] [i_5] [i_0] [7] = max(12997816667354207279, (arr_0 [4] [i_5 - 1]));
                            arr_36 [i_0] [0] [i_1] [i_1] = var_12;
                            var_22 = max((min(8367586675975200620, (arr_2 [i_0 - 1] [i_0] [i_0 + 1]))), (((((var_0 ? 5299368083856240953 : (arr_7 [i_0] [i_1] [i_0] [7])))) ? (max((arr_3 [i_0] [i_0] [i_6]), (arr_24 [i_0] [8] [i_5] [i_6] [10] [6]))) : var_8)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
