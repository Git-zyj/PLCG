/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = ((((!(9987610717092317013 % 16992047190574354178))) ? var_3 : ((var_6 * (var_1 && var_8)))));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_10 = (max(var_10, ((((((arr_10 [i_1 + 3] [i_2 - 3] [1] [1] [i_2 - 4]) - (((17 ? 27 : var_5))))) / (~var_0))))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_2 + 1] [i_1] [i_0] [i_4] = (max(((1125899906842112 ? 1 : (arr_8 [i_0] [i_0] [i_0] [i_4]))), -var_8));
                            var_11 ^= ((((((38601 ? 40 : (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? -15 : (((arr_8 [i_4] [i_3] [2] [i_0]) ? var_3 : var_9)))));
                            arr_14 [i_1] [i_1] [i_1] = (min(((-(var_6 / var_5))), (var_9 == var_6)));
                            var_12 = (arr_3 [i_0]);
                            var_13 = ((((((arr_1 [i_4]) - ((var_4 ? 7082 : var_2))))) ? (((var_4 - var_3) >> (var_5 && var_4))) : (((((var_8 ? var_4 : var_5)))))));
                        }
                    }
                }
            }
            arr_15 [i_1] = ((9124 ? (((var_6 ? (max(var_0, 3146669909)) : (((var_1 ? 1793998241 : 1557415996)))))) : var_5));
            arr_16 [1] [i_1] [i_1 + 1] |= ((~(((arr_7 [0] [i_1 + 1] [0]) | 1))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_25 [i_1] [i_5] = (((((((-32 <= (arr_2 [i_0])))) < ((45 >> (((arr_6 [i_6] [i_5 - 2] [i_0] [i_0]) - 68)))))) ? (((((!var_6) < ((-(arr_7 [i_5] [i_5 - 1] [i_5 - 2]))))))) : (arr_10 [i_1] [i_1] [i_1] [i_1 - 1] [i_5 - 2])));
                        var_14 = ((!(var_4 | var_7)));
                    }
                }
            }
        }
        var_15 = -54;
    }
    var_16 = (max(var_16, 45));
    var_17 = -var_3;
    #pragma endscop
}
