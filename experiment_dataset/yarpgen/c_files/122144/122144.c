/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (max(var_7, (((var_5 && var_8) ? (1 <= var_11) : -1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = ((((max(112, 2651))) >> var_8));
                                var_15 &= (!(arr_1 [i_3]));
                                var_16 = (max((((var_1 <= (arr_13 [i_4] [i_4] [i_3] [i_2] [i_1] [12])))), ((var_12 ? (arr_12 [14] [i_4] [i_4 - 1] [i_2]) : (arr_12 [i_4] [8] [i_4 - 1] [i_2])))));
                                arr_17 [i_0] [i_4] [i_2] [1] [i_4 - 1] = (min((((arr_16 [i_0] [i_1] [i_4 + 1] [i_4 + 1] [i_4]) + (arr_16 [i_0] [i_0] [i_4 - 1] [i_4] [i_4]))), (((!(arr_16 [i_4] [i_1] [i_4 + 1] [10] [i_4]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_17 = (((arr_13 [i_0] [i_1] [i_1] [i_2] [i_5] [i_1]) / (1 <= 246)));
                                var_18 = (arr_22 [i_6 - 3] [i_5 - 2] [i_1] [i_1] [i_0]);
                                var_19 = var_5;
                                var_20 = arr_7 [i_2];
                            }
                        }
                    }
                    var_21 = ((min((arr_16 [i_0] [i_2] [i_1] [i_1] [i_0]), 1)));
                }
            }
        }
    }
    var_22 = var_11;
    var_23 = (var_5 == 1);
    #pragma endscop
}
