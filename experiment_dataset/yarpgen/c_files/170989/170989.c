/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = ((77 & (max(var_6, (max(-1, 2597577993))))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [9] [i_1] [i_1] [9] = 7;
                        arr_13 [i_0] [13] [i_1] [i_3] [i_3] [i_1] = (i_1 % 2 == 0) ? ((((((((arr_4 [i_0] [i_1] [i_2]) ? (arr_4 [i_0] [i_1] [i_0]) : var_17)) + 2147483647)) << ((((((min((arr_4 [i_3] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_3])))) + 84)) - 9))))) : ((((((((((arr_4 [i_0] [i_1] [i_2]) ? (arr_4 [i_0] [i_1] [i_0]) : var_17)) - 2147483647)) + 2147483647)) << ((((((((min((arr_4 [i_3] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_3])))) + 84)) - 9)) - 129)))));
                        var_19 = (max(var_19, (arr_2 [i_3])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] = var_1;
                        arr_19 [i_0] [i_1] [i_2] [i_2] [i_4] = var_18;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_20 = (min(((max(17850, var_18))), (max((arr_14 [i_0] [i_1] [i_1] [4]), var_14))));
                                var_21 += ((~(max((((arr_20 [i_6] [i_0] [i_0]) ? var_11 : var_18)), (67 << var_13)))));
                            }
                        }
                    }
                    var_22 = ((-2 <= ((((arr_16 [i_1] [i_2]) ? ((min(0, 240))) : (((var_9 <= (arr_20 [i_0] [i_1] [i_2])))))))));
                    var_23 = (~(((((arr_6 [6] [i_1] [i_1] [i_0]) > (arr_20 [i_0] [i_1] [i_2]))) ? (var_15 & var_16) : 54042)));
                }
            }
        }
    }
    var_24 = (((((var_2 < var_17) ? (((48785 ? 1 : var_16))) : (max(-1, 68)))) == var_3));
    var_25 = (min(var_12, var_6));
    var_26 = 4457;
    #pragma endscop
}
