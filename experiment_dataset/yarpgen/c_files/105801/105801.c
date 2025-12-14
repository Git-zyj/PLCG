/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_10 *= (max((!-var_6), (min((arr_2 [i_0] [20]), (max((arr_2 [1] [1]), (arr_3 [i_0] [i_1 + 2] [i_1])))))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_11 = ((((!((((-2147483647 - 1) ? -813370539163089285 : (arr_4 [i_0] [i_1 + 1] [7] [3])))))) ? -5 : 1));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_11 [i_0] [i_0] = (min((min((arr_5 [i_0] [i_0] [i_4]), ((5 ? (arr_7 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))), ((1 ? (arr_9 [i_0] [i_0] [6] [i_2] [i_3] [12] [0]) : -2893340173773102809))));
                            arr_12 [i_0] [i_0] [1] [i_1 + 2] [i_0] = ((!((min(((max(var_0, (arr_8 [i_4] [i_0] [i_2 - 1] [i_4])))), ((1 ? (arr_2 [i_2] [i_0]) : var_7)))))));
                            var_12 = (((((-(arr_0 [i_1 + 1] [i_3])))) ? (arr_10 [i_4] [i_2] [i_2]) : (arr_6 [12] [i_1 - 1] [i_2 - 1])));
                            arr_13 [i_4] [i_0] [i_2 - 1] [i_1] [i_0] [i_0] = (~1);
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_13 = (min(var_13, (((!((((arr_3 [i_2 - 1] [i_2 - 1] [0]) ? (arr_3 [i_2 - 1] [i_2 - 1] [9]) : (arr_3 [i_2 - 1] [i_2 - 1] [13])))))))));
                            var_14 -= (1 ? 5539820131541017120 : -2893340173773102809);
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_15 -= (arr_2 [i_6] [i_6]);
                            arr_18 [i_0] [5] [i_2 - 1] [i_0] [i_0] = (min(((((((arr_17 [i_0] [i_1 + 1]) ? (arr_0 [i_6] [i_2]) : (arr_9 [i_6] [i_6] [1] [1] [1] [1] [i_6])))) ? ((((arr_14 [i_0] [i_1] [1] [i_0] [i_0]) ? var_8 : (arr_10 [i_3] [1] [i_0])))) : (((arr_7 [i_0] [i_0]) ? var_9 : var_4)))), ((min(((var_6 ? (arr_9 [9] [i_6] [i_3] [i_2] [9] [i_0] [i_0]) : (arr_5 [i_2] [i_0] [i_2]))), (((var_9 == (arr_4 [7] [i_1] [i_1] [i_1])))))))));
                        }
                        var_16 *= (!18446744073709551615);
                        var_17 -= ((!(((var_7 ? (((arr_14 [i_0] [i_0] [i_0] [18] [18]) ? -813370539163089285 : var_0)) : (arr_4 [i_3] [i_2] [i_1 - 1] [i_0]))))));
                    }
                }
            }
        }
    }
    var_18 = ((var_6 ? -250 : -var_2));
    #pragma endscop
}
