/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~(!var_8)))) % ((var_3 ? var_4 : (!var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            arr_10 [i_0 - 2] [i_1] [i_4] = (!var_2);
                            var_11 -= (((~var_6) < (arr_2 [i_0] [i_0])));
                            var_12 += (var_7 % 31124);
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            var_13 = ((!((!(arr_3 [i_0 - 2])))));
                            var_14 = (min(var_14, (arr_0 [i_0 - 3])));
                            arr_14 [i_0] [i_1] [i_0] [i_1] [i_2] [i_3] [i_5] = (arr_0 [i_0]);
                        }
                        var_15 = (max(var_15, -34425));
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_17 [i_6] [i_2] [i_1] [12] [i_0 - 3] [i_0 - 1] = ((!(((((((arr_6 [i_0]) ? 55 : var_7))) ? ((max(31121, 1))) : (arr_0 [i_2 - 1]))))));
                        var_16 = ((((arr_9 [i_0 - 1] [i_1 - 1] [4] [i_0 - 2]) | 4294967295)));
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_17 = var_3;
                        var_18 = ((~((((arr_18 [i_0 - 1] [i_1 - 2] [i_2] [i_2] [i_0 + 1]) | var_9)))));

                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            var_19 = (((arr_15 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 1]) << (((arr_8 [i_0] [i_8] [i_7 + 1] [i_2] [i_1] [i_1] [i_0]) - 169))));
                            var_20 = var_2;
                        }
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            arr_28 [i_0] [i_1] = ((-212 - (arr_21 [i_9] [i_9 + 1] [i_9 + 1] [i_9 - 3] [i_9 + 1] [i_9 - 1])));
                            var_21 = (min(26, (arr_13 [i_7 + 2] [i_7 - 1])));
                        }
                        var_22 = (arr_25 [i_0] [i_1] [i_7 - 1] [i_7] [i_2]);
                        var_23 |= 1426990342936461846;
                    }
                    var_24 = (((arr_5 [i_0 - 2] [i_1 - 2] [i_2]) ? (((1 ? (arr_20 [i_0] [i_1 + 1] [i_2 - 1] [7] [i_0] [i_0 - 2]) : var_5))) : (((min(var_7, var_1))))));
                }
            }
        }
    }
    var_25 = var_4;
    #pragma endscop
}
