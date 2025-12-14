/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((((max((arr_1 [i_1]), (arr_1 [i_0])))) && (((~(arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [9] = 31519;
                            arr_10 [i_2] [i_1] [i_2] [i_3] = -29479;
                            arr_11 [i_2] [i_2] [i_2] [i_3] [6] [i_0] &= (((((~(((arr_3 [i_1]) ? var_8 : var_4))))) ^ (max((0 | 0), (arr_7 [i_0] [i_1] [i_3] [i_0] [10])))));
                            var_12 = ((+(((!((((arr_6 [i_3] [i_0] [i_2] [i_3]) ? (arr_2 [i_2] [i_1]) : var_3))))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_1] = ((var_1 ? (arr_3 [i_0]) : ((((!(arr_16 [i_5])))))));
                        var_13 = (~(arr_16 [i_0]));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_22 [i_0] = (((arr_15 [i_6] [i_5] [i_1] [i_0]) >> (arr_15 [i_6] [i_6] [i_6] [i_6])));
                            arr_23 [i_0] [8] [i_1] [i_5] |= (18446744073709551607 * 3949092796);
                            arr_24 [i_1] [i_5] |= arr_20 [i_0] [i_1] [i_4] [i_1];
                        }
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_14 = (((arr_12 [i_7] [i_1] [i_1]) && 29467));
                        var_15 = (max(var_15, ((!(arr_6 [i_0] [i_1] [i_4] [i_0])))));
                        var_16 = (arr_26 [i_7] [i_4] [i_4] [i_1] [i_0]);
                    }
                    var_17 ^= (((((13 >> (-29463 + 29522)))) && (arr_14 [i_0] [i_1] [1])));
                }
            }
        }
    }
    var_18 = var_8;
    var_19 = (max(var_10, (((((var_3 >> (19034 - 19014))) | var_6)))));
    #pragma endscop
}
