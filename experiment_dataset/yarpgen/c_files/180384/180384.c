/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 0;
    var_18 = (80 ? var_10 : (((min(111, 70)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 *= ((!((!(arr_6 [i_1 - 1])))));
                    arr_9 [i_2] = ((((max((arr_3 [i_1] [i_1] [i_1 + 1]), ((18446744073709551615 ? (arr_1 [1]) : var_4))))) != (max((arr_0 [i_0]), (((arr_1 [2]) + (arr_5 [i_0] [i_1 + 1])))))));
                    var_20 = ((!(2382071269 && 176)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3 + 1] [i_2] [i_2] [i_1 + 1] [i_0] = (!80);
                                arr_15 [i_0 + 2] [i_0 + 3] [i_0 + 4] [i_0 - 3] [i_0] &= var_7;
                                arr_16 [i_1] [i_2] [i_4] = ((arr_0 [1]) && ((((!var_7) - (arr_0 [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_21 = (((arr_11 [i_0] [i_1 - 1] [i_5] [i_5 - 2] [i_5] [12]) <= (max((arr_11 [i_0] [i_1 - 1] [i_2] [i_5 + 2] [7] [1]), var_3))));
                                var_22 = (1 < 18634);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (~0);
    var_24 = 0;
    #pragma endscop
}
