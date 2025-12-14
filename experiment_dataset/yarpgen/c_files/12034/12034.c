/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_4] = (~var_7);
                                var_18 = (max(var_18, (((~((((arr_12 [i_0] [i_0]) <= var_10))))))));
                                var_19 = (arr_12 [i_2] [i_4]);
                                var_20 |= ((((126 ? var_9 : (arr_7 [i_0] [i_1] [i_2]))) <= (arr_7 [i_0] [i_0] [i_0])));
                            }
                            var_21 = (((~23254) * 28));
                            var_22 = (((~((min(var_0, var_15))))));

                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                var_23 = min((((((((arr_12 [i_1] [i_1]) == 11215018996870512260))) == var_9))), var_0);
                                var_24 = (arr_16 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_5]);
                                arr_17 [i_5] [i_5] [i_5] [i_5] [i_0] = (max((min(11215018996870512260, 9226099325503980879)), var_4));
                                arr_18 [1] [7] [i_2] [i_2] [i_2] [i_5] = 0;
                            }
                            arr_19 [21] [i_1] [15] [i_3] = ((arr_10 [i_3] [i_3] [i_3] [i_3]) - (((~-110) - (arr_6 [i_0] [i_1] [i_2] [i_3]))));
                        }
                    }
                }
            }
        }
    }
    var_25 = var_15;
    var_26 = (min(var_26, ((((var_13 + var_9) && var_12)))));
    var_27 |= 14891462682942385270;
    #pragma endscop
}
