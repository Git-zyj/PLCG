/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = ((((0 <= (12 ^ 65524))) ? ((4853431079190225130 ? (max(536870848, 15119129263732358903)) : 12)) : (((-12716 ? 9223372036854775806 : (arr_3 [i_0] [i_0]))))));
                    arr_8 [i_1] [i_0] = ((((((var_9 + 2147483647) << (((((~3250) + 3276)) - 25))))) ? (((!((((arr_4 [i_1]) ? 8325274442731947010 : -127)))))) : ((((arr_5 [i_0] [i_2]) < (arr_2 [i_2] [i_1]))))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = (min((arr_3 [i_0] [7]), (min((arr_2 [0] [i_2]), 120))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, var_10));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3 - 1] [i_4] [i_4] = -89;
                                arr_15 [i_4] = 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_2] = (min(((min((-2147483647 - 1), 3244))), (((arr_11 [1] [i_2] [i_5] [i_6]) ? (arr_11 [i_1] [i_2] [i_5] [i_6]) : -127))));
                                var_16 = (~65514);
                                var_17 = (arr_1 [i_0] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(((max(516317575, var_3))), ((((max(var_7, var_11))) ? 18446744073709551615 : 0))));
    var_19 = (((max((!-1711454527), (min(35125, 6660536961145118593)))) - var_13));
    #pragma endscop
}
