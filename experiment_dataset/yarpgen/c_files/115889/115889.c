/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((min(((101 ? 1 : 0)), (arr_9 [i_3] [1] [i_1] [1] [i_0] [i_0]))) > (((((var_2 ? var_16 : var_2))) ? ((var_1 ? (arr_3 [i_0]) : var_1)) : (((arr_7 [i_2] [2] [i_2 + 1] [i_2] [i_2]) ? 0 : (arr_7 [i_0] [1] [i_1] [i_2 - 1] [12]))))))))));
                            var_19 = var_10;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [10] [i_5] [i_0] = ((var_3 >= ((+(((arr_11 [i_0 + 1] [i_1] [17] [17]) / var_15))))));
                                var_20 += 0;
                                var_21 ^= (((min((min((arr_9 [i_0] [1] [i_1] [i_4] [i_1] [11]), var_5)), var_7)) != ((-(var_7 + var_6)))));
                                arr_22 [i_0] [i_0] [9] [i_0] [i_0] = ((((min((arr_5 [i_0 - 4] [i_4] [i_6 - 2]), (arr_6 [i_0 + 1])))) && (((var_5 ? 6438278947303532967 : (min((arr_17 [i_5]), var_5)))))));
                            }
                        }
                    }
                }
                var_22 = var_15;
            }
        }
    }
    var_23 &= 953555261;
    #pragma endscop
}
