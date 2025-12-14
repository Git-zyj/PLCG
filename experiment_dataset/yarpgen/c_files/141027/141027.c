/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = 1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, ((((arr_3 [i_0] [i_0 - 3]) ? (arr_3 [i_0 + 2] [i_0 + 3]) : 1)))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_20 = ((((!(arr_1 [i_0])))));
                            var_21 = ((!(arr_11 [i_0 + 3] [i_1] [i_2] [i_3 + 2] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_22 = (((!1) ? (arr_3 [i_0] [i_1]) : var_2));
                            var_23 &= ((-2046727660 ? var_4 : (arr_4 [i_0] [i_0 + 3])));
                        }
                        var_24 = (max(var_24, (((1 ^ (~0))))));
                    }
                }
            }
        }
        var_25 &= ((~(arr_14 [i_0 + 3] [1] [i_0] [i_0] [6] [i_0] [i_0 + 1])));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    arr_24 [i_6 + 1] [i_6 + 1] [i_8] &= ((min(1, 58)));
                    var_26 = (min(var_26, (arr_22 [i_6] [i_6] [i_7] [15])));
                    var_27 = (min(var_27, var_4));
                }
            }
        }
    }
    #pragma endscop
}
