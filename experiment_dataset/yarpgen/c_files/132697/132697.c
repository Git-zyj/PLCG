/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_1;
    var_14 = ((((((max(1466261895756661770, 16744448))) ? ((var_6 ? var_11 : var_2)) : (var_3 + var_11))) >= var_4));
    var_15 = max(-var_8, ((max(var_2, ((max(var_5, var_0)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 += (((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0])))) ? ((var_11 ? (arr_0 [i_0] [i_0]) : var_8)) : ((((arr_2 [i_0]) ? var_7 : (arr_1 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_5 [i_0] = -186;
            arr_6 [i_0] [i_0] [i_0] = (-5089289151721152472 / 536870911);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [2] [i_2] = var_10;
            var_17 = (max((((((!(arr_4 [i_0]))) && var_2))), (((arr_1 [i_2]) | (((max((-32767 - 1), (-32767 - 1)))))))));
            arr_10 [i_0] = (((arr_0 [i_0] [5]) + (((arr_2 [i_0]) ? (((!(-32767 - 1)))) : (arr_3 [14] [i_2])))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_13 [i_0] [i_3] = ((((max(((max(139, (-32767 - 1)))), -var_8))) ? (((((arr_3 [i_0] [i_0]) < var_7)))) : (((arr_1 [i_0]) - (arr_4 [i_0])))));
            var_18 = (3728858967 != 357072102);

            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_19 = (3475930475 ? 333040847565872482 : (arr_14 [i_0] [22] [i_6]));
                            var_20 = ((((arr_16 [i_4 - 1]) ^ (arr_16 [i_4 + 1]))));
                        }
                    }
                }
                var_21 = ((((max(((var_10 ? (arr_2 [i_0]) : var_2)), (arr_11 [i_0] [i_3] [i_3])))) || ((((((var_3 ? (arr_18 [i_0] [i_3] [i_3] [i_4 - 1]) : (arr_16 [i_0])))) ? (((var_10 ? (arr_1 [i_0]) : (arr_15 [i_0] [i_3] [i_4])))) : (max((arr_15 [i_0] [i_0] [i_0]), var_8)))))));
                arr_22 [i_0] [i_3] [i_0] |= (arr_4 [i_3]);
            }
            var_22 = (max(var_22, ((((((819036821 ? 6 : (-32767 - 1)))) ? (((arr_4 [7]) ? (arr_21 [i_0] [i_0] [i_3] [i_3]) : (arr_12 [i_0]))) : (max((max((arr_16 [i_0]), (arr_2 [i_3]))), var_0)))))));
        }
        arr_23 [i_0] [i_0] = (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == (((-1 ? ((max(249, -56))) : (((3801048901 >= (arr_3 [i_0] [i_0])))))))));
    }
    #pragma endscop
}
