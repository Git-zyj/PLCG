/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((var_10 & var_7), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = var_8;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [1] [i_1] = ((0 != (arr_4 [i_1] [i_1 - 2] [i_1 + 1])));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_14 |= (max((min(var_1, var_2)), ((min(var_5, (var_9 != var_7))))));
                        var_15 = (min((arr_3 [i_0] [i_3] [i_1 - 1]), (((!(!var_11))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_16 = (min(-var_5, (arr_12 [i_1] [i_5] [i_5] [i_5] [i_1])));
                                arr_14 [i_1] [i_4] [i_1] = (((((max(var_3, (arr_3 [i_0] [i_0] [i_0])))) != 18446744073709551615)) ? (((max(var_2, (arr_2 [i_1 - 2]))))) : (max((arr_8 [i_1 + 2] [i_1 + 1] [i_4 + 2] [i_4 + 1]), (max(var_7, var_3)))));
                            }
                        }
                    }
                }
                var_17 &= (min(var_4, (-1497318664 & 0)));

                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_18 = ((-19114 ? 16700 : -1));
                        arr_21 [i_0] [i_1 - 2] [i_1] [i_7] [i_0] = var_11;
                        var_19 = var_1;
                    }
                    var_20 = (min(var_20, ((((((min((arr_5 [i_6] [i_6] [i_6] [i_6]), (arr_10 [1] [i_0] [i_0] [i_6 + 1]))) / (arr_8 [i_0] [i_1 - 2] [i_1 - 3] [i_6 + 1]))) / ((max((((arr_0 [i_0]) ? var_0 : var_4)), var_1))))))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_26 [i_1] [i_1] [i_1] = max(var_5, (min(var_8, ((max(var_0, (arr_13 [i_1] [i_1])))))));
                    arr_27 [i_0] [i_1] [i_8] [i_1] = ((var_1 ? var_5 : (((((arr_10 [i_8] [i_1] [i_1] [i_0]) ? (arr_1 [1] [i_8]) : var_5)) & var_9))));
                }
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    var_21 = ((((min(var_8, (arr_3 [i_1] [i_1 + 1] [i_9 + 2])))) ? ((min((max(var_8, var_2)), var_9))) : (((!(arr_4 [i_1 + 2] [i_9 + 1] [8]))))));
                    arr_31 [i_1] [i_0] [i_1] = ((((arr_17 [i_0] [i_1] [i_9] [i_9 + 3]) != var_7)) ? ((var_4 ? (arr_17 [i_0] [i_1 + 2] [12] [i_9 + 1]) : var_9)) : (arr_5 [i_0] [i_1 - 2] [i_1] [i_9 + 2]));
                }
                var_22 ^= (min(59, 48835));
            }
        }
    }
    #pragma endscop
}
