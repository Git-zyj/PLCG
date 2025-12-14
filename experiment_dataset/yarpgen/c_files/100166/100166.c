/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 ^= (((((((arr_0 [i_0]) ? (arr_4 [i_0] [i_0] [i_2]) : (arr_4 [i_2 - 1] [i_1 - 1] [i_2])))) && (arr_4 [i_1 - 1] [i_2 - 1] [i_2]))) ? (((min((min((arr_3 [i_0]), (arr_8 [i_0] [i_1] [i_0] [i_1]))), var_7)))) : 164);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_19 = (max(var_19, ((((arr_3 [i_0]) * (max((var_6 * 92), 20571)))))));
                        arr_11 [i_1] = (min(((910498920300584731 ? 4294967295 : 18115797352728630421)), (arr_3 [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_20 = var_14;
                            var_21 = (((arr_16 [i_1] [i_4] [i_0] [i_1] [i_1]) % (((var_15 || (arr_3 [i_1]))))));
                        }
                        var_22 = (((((140 ? 395895238 : (arr_1 [i_1 - 1] [i_1 - 1])))) ? (arr_17 [i_0] [i_0] [i_1 + 1] [i_2 - 1] [i_4]) : ((((!(arr_3 [i_1])))))));
                        var_23 = ((((min((arr_16 [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_4] [i_1]), (arr_5 [i_1 + 1])))) - (((var_0 <= (arr_2 [i_1] [i_1]))))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_24 -= (arr_4 [i_0] [i_0] [i_0]);
                        var_25 = (max(var_25, (((~((-(arr_1 [i_1 - 1] [i_2 - 1]))))))));
                        var_26 = (arr_9 [i_1] [i_1] [i_2]);
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] &= ((((~(arr_17 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1]))) & (((-79 + 2147483647) << (((arr_17 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) - 93))))));
                        arr_24 [i_7] [i_1] [i_2] [i_1 - 1] [i_1] [i_0] = max(-32767, 18115797352728630421);

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_8] [i_1] [i_8] = ((-330946720980921194 ? ((~(arr_12 [i_1 + 1] [i_2 - 1] [i_1] [i_2] [i_7] [i_8]))) : ((((arr_7 [i_1] [i_1]) ? ((-(arr_3 [i_1]))) : (arr_22 [i_1 - 1] [i_7] [i_8]))))));
                            arr_29 [i_1] = var_9;
                            arr_30 [i_0] [i_1 + 1] [i_2] [i_1] [i_7] = (((max((arr_3 [i_1]), (arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]))) ^ (arr_8 [i_0] [i_1] [i_1] [i_0])));
                            arr_31 [i_8] [i_1] [i_2 - 1] [i_1] [i_0] = -29255;
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_34 [i_0] [i_1 - 1] [i_1] [i_7] [i_7] = (arr_27 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                            arr_35 [i_0] [i_1] [i_2 - 1] [i_1] [i_1] = ((!(((arr_7 [i_1 + 1] [i_1]) != var_15))));
                            var_27 = (min(91, (min(178, 17))));
                        }
                    }
                    var_28 = (((((arr_9 [i_1] [i_2 - 1] [i_1]) ? (arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_2 - 1]) : (arr_13 [i_0] [i_1] [i_1 - 1] [i_2 - 1])))) ? ((var_4 + (arr_13 [i_0] [i_1] [i_1 - 1] [i_2 - 1]))) : (((21605 ? (arr_9 [i_1] [i_2 - 1] [i_1]) : (arr_3 [i_1])))));
                    arr_36 [i_1] [i_0] [i_2 - 1] [i_2 - 1] = ((((((max(40449, (arr_18 [i_0] [i_1] [i_2] [i_1 + 1])))) ? (arr_2 [i_1] [i_1]) : (min(-29236, 1397122670))))) | (max(((38337 ^ (arr_12 [i_0] [i_1 + 1] [i_1] [i_0] [i_0] [i_2]))), (~8471865681921989958))));
                }
            }
        }
    }
    var_29 = (max(((((var_2 ? var_12 : var_9)) << (((3281916396718025882 - var_2) - 3281916396718025871)))), var_0));
    var_30 = var_6;
    #pragma endscop
}
