/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!-81);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [22] = 81;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3] = 218;
                            var_19 = var_15;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_23 [i_0] = (((((!((max(262143, (arr_0 [i_4]))))))) ^ (min((((arr_22 [i_0] [i_0] [i_0] [i_4] [i_5] [i_0]) ? 49078 : (arr_16 [i_1]))), (0 <= 74)))));
                                var_20 += (min((((262143 ? ((-(arr_10 [i_1] [i_1]))) : (((arr_4 [i_4]) ? var_9 : var_9))))), ((-((var_15 / (arr_9 [i_0] [i_1] [i_4] [i_4])))))));
                                var_21 = var_15;
                                arr_24 [20] [i_1 + 1] [i_4] [i_5] [i_0] = min((((arr_10 [i_0] [i_0]) != (arr_21 [i_0] [i_0] [i_4] [i_5] [i_1 - 1] [i_5 + 1] [12]))), ((var_16 || (arr_21 [i_0] [i_0] [i_4] [i_0] [i_1 - 1] [i_5 + 1] [i_1 - 1]))));
                            }
                            var_22 = var_4;
                            var_23 = (i_0 % 2 == zero) ? (((var_14 << (((arr_4 [i_4]) & (((arr_17 [i_0] [23] [i_0] [23]) / 300452744924345738))))))) : (((var_14 << (((((arr_4 [i_4]) & (((arr_17 [i_0] [23] [i_0] [23]) / 300452744924345738)))) - 17)))));
                        }
                    }
                }
                arr_25 [i_0] = ((((((arr_21 [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_1 - 2] [i_1]) ^ (arr_21 [i_0] [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 2])))) ? ((((((arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) ? (arr_3 [i_0]) : 1073741823))) ? (!66) : var_3)) : (arr_18 [i_0] [i_0] [i_1 - 1])));
            }
        }
    }
    #pragma endscop
}
