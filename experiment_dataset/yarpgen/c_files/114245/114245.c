/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (((((arr_12 [i_4 - 2] [i_0 - 3] [i_0 - 4] [i_0 - 1] [i_0 - 1]) ? var_14 : 844424930131968))) ? (((var_8 <= (arr_12 [i_4 + 1] [i_0 - 3] [i_0 + 2] [i_0 - 1] [i_0 - 1])))) : (0 != 9));
                                var_16 = ((~(max((~-9168774718725658996), var_10))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_17 = (min((~1), ((~((844424930131985 >> (661845343 - 661845315)))))));
                                var_18 = (max(var_18, var_13));
                                var_19 = (min(var_19, (((~((((min(var_0, var_12)) != var_14))))))));
                                var_20 += ((238 ? 238 : var_13));
                            }
                        }
                    }
                    var_21 += (arr_1 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_22 = (max(78, 1));
                                arr_25 [9] [i_1] [i_2] [i_7] [i_8] = (min(((((!var_2) ? -var_5 : 255))), (min(156, -155))));
                                var_23 = (max(var_23, (((var_5 > ((((!(((var_0 ? 13359 : var_11))))))))))));
                                var_24 = (min(((min((var_8 / var_5), var_4))), (max(78, ((var_7 ? var_2 : var_11))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((~((255 ? 255 : var_10))))) ? ((844424930131968 >> (((max(-2147483641, 14017701645577396914)) - 18446744071562067971)))) : 0));
    #pragma endscop
}
