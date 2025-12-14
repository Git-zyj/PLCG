/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2902036771473739261;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (max((!-1553111202), ((-2039490886 ? (((1553111201 << (((arr_8 [i_0] [i_1] [i_3 - 2] [i_3 - 2] [i_4 - 2]) - 28646))))) : ((1553111202 ? (arr_0 [i_4]) : var_8))))));
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_1] [i_1] = (~1553111202);
                            }
                        }
                    }
                    var_20 = (max(var_20, (((var_16 ? (min(-949436957, (((arr_2 [i_1] [i_0]) ? (arr_9 [i_0] [i_0] [i_0]) : var_7)))) : ((~(arr_2 [i_2 - 1] [i_2 + 1]))))))));
                    arr_15 [i_0] [i_1] [i_2 - 1] [i_0] = arr_1 [i_2];
                    var_21 *= ((!((((1553111213 <= 1378345449) ? ((max(-1553111202, 1))) : ((59184 ? (arr_1 [i_0]) : 0)))))));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_22 = ((!(((var_14 ? ((var_6 ? var_11 : 2053432001)) : ((((11115572871538048736 && (arr_17 [i_0] [i_0] [4] [2] [i_0]))))))))));
                        arr_18 [3] [3] [i_1] = 7416;

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_23 |= ((-(arr_2 [i_2 + 1] [i_2 + 1])));
                            arr_22 [i_1] [i_2 + 1] [i_1] [i_1] = (arr_6 [4] [i_1] [10] [1] [i_6]);
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_24 = (((((((max(var_10, var_12))) ? (min(var_3, (arr_12 [i_0] [i_0] [i_0] [1] [i_0] [i_0]))) : (arr_4 [i_1])))) | (min((min(6446755718462633795, (arr_19 [i_0] [i_1] [5] [i_5] [i_7] [i_2 - 1]))), (var_7 & -105)))));
                            arr_26 [i_1] [i_1] [i_2 + 1] = -949436962;
                        }
                        var_25 += ((2916621825 ? ((((!(((-9290 ? 13258162924309622444 : 0))))))) : ((1 ? (~949436957) : (arr_6 [13] [4] [i_2 + 1] [i_5] [1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
