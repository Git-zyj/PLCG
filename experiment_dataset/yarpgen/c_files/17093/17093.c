/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_3 - 3] [i_1] [i_4] [i_3] [i_4] [i_2 - 1] = (max((min(((((arr_12 [i_4] [i_1] [i_3 - 2] [i_3] [i_4 + 1] [i_2]) ? (arr_12 [i_4] [i_4] [i_2] [i_3] [i_3] [i_4 + 1]) : var_11))), (max(var_8, (arr_1 [2]))))), ((((arr_12 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4 + 1] [i_4]) ^ (arr_10 [i_3 - 1] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1] [i_4]))))));
                                var_14 = ((((max((min(16383, 1920)), (arr_12 [i_4] [i_2 - 1] [i_3] [1] [i_3 + 3] [i_4 + 1])))) ? ((-(((arr_2 [i_4 - 1]) ? (arr_6 [13] [i_1] [i_4]) : var_8)))) : (((63615 ? (((arr_14 [i_4] [i_4]) >> (63634 - 63616))) : 0)))));
                                var_15 = var_11;
                            }
                        }
                    }
                }
                arr_16 [i_1] = (((arr_1 [i_0]) >> ((((arr_1 [i_0]) != ((((arr_5 [i_0] [i_1]) << (18446744073709535217 - 18446744073709535215)))))))));
                var_16 *= (((max((arr_7 [i_0]), var_0))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            {
                var_17 = (max(34894, (arr_7 [i_6])));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_32 [i_5] [10] [i_5] [i_7 - 1] [i_5] [i_9] [i_9] = 18446744073709535221;
                                var_18 = (min(var_18, ((((-(63613 == var_8)))))));
                                arr_33 [i_5] [i_5] [i_5] = (var_1 * var_0);
                                var_19 = (6911952958663891594 >= -60061704);
                                arr_34 [i_9] |= ((((((arr_29 [i_5 - 1] [i_7 + 2]) == (arr_9 [i_5 - 2] [i_5 - 2] [i_6 + 1])))) * (arr_14 [i_6] [i_9])));
                            }
                        }
                    }
                }
                arr_35 [i_5] = (arr_21 [i_6] [i_6 + 1] [i_5]);
            }
        }
    }
    var_20 = (max(var_20, (((((((63613 ? var_11 : var_2)))) + ((max(var_0, var_8))))))));
    #pragma endscop
}
