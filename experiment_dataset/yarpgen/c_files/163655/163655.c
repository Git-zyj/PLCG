/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 13935;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = 35081;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_22 *= (var_11 | -112);
                            var_23 = (((((12676029672667181432 ? (arr_9 [i_0] [i_1] [i_2] [i_3 + 2]) : -323309297816508872))) ? (((3 * (arr_1 [i_0 - 1] [i_3])))) : (arr_5 [i_0 + 1])));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 11;i_4 += 1)
                            {
                                var_24 = (((13593 | 15400386639424361150) ? (1 | 14323) : 9543574215130814154));
                                var_25 ^= (var_2 && (arr_8 [i_0] [i_1] [i_2] [i_3 + 1]));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [1] [i_1] [7] [i_5] [i_6] = var_5;

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                            {
                                var_26 = (1256958311374980118 <= 0);
                                arr_26 [i_0 - 1] [0] = 0;
                                var_27 = var_19;
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                            {
                                var_28 = (max(var_28, var_4));
                                var_29 = (max(var_29, ((((((var_2 ? var_4 : var_12))) ? (arr_19 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_2)))));
                            }
                            arr_30 [i_0] [i_6] = 12612585183331109374;
                            var_30 = (!6749);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
