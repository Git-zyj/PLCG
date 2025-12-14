/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((56322 ? 20 : 18778));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 *= (((((!(arr_2 [i_0])))) * (((arr_6 [i_0]) >> ((((var_1 ? var_12 : var_3)) - 58962))))));
                var_19 = 26077;
                arr_7 [12] [i_1] = ((-(9238 + 255)));
            }
        }
    }
    var_20 = (!var_6);
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 7;i_3 += 1)
        {
            {
                var_21 = (arr_11 [3] [i_3]);
                var_22 = (min(((var_2 ? ((45 ? var_4 : 3049135479)) : 0)), ((((((15869794144205481365 >> (16383 - 16335)))) && (((247 ? (arr_9 [4] [i_3 + 3]) : 234))))))));

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_23 = 8586316180014312450;
                                var_24 = (((arr_2 [i_3 - 1]) || ((((~(arr_8 [2])))))));
                            }
                        }
                    }
                    var_25 = (((max(3803831064676605496, 0)) == var_0));
                    var_26 = (max(var_26, var_5));
                }
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 7;i_9 += 1)
                        {
                            {
                                var_27 = (min(var_27, (((((min(((min((arr_15 [i_8]), 220))), (((arr_17 [i_2] [i_3] [i_3 - 2] [i_7] [i_8] [1]) / 3853252117834907095))))) ? ((max(9228, -111))) : (((((arr_22 [i_2] [i_7] [i_8] [5]) / (arr_12 [i_2]))))))))));
                                arr_27 [i_8 + 2] [i_8 + 2] [i_9] [i_8] [i_8] [i_8] = ((((((arr_14 [i_8 + 2] [i_2 - 2]) ? var_3 : (arr_14 [i_8 + 1] [i_2 - 2])))) ? (arr_12 [i_2 - 1]) : 0));
                                var_28 |= ((max((arr_0 [i_2 - 1]), var_5)));
                            }
                        }
                    }
                    var_29 = (arr_13 [i_2 - 1] [4] [i_2] [i_2]);
                    var_30 *= ((max(var_7, (arr_14 [i_3 - 2] [i_3]))));
                    var_31 = (min(var_31, (~var_1)));
                }
                var_32 |= (arr_17 [i_3] [i_3 + 2] [i_3 - 1] [1] [1] [8]);
                var_33 = (min(var_33, (((-(min(var_12, (max((arr_2 [i_2]), (arr_17 [8] [i_2] [i_2] [8] [9] [6]))))))))));
            }
        }
    }
    #pragma endscop
}
