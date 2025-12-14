/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = 27586;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_15 = (min(var_15, (((var_12 ? (arr_3 [i_0] [i_3 - 3]) : (arr_3 [i_0] [i_1 + 1]))))));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] [i_4] = ((((((arr_12 [i_0] [11] [i_0] [i_2] [8] [i_3] [i_4]) && -2753))) | 1));
                            }
                            var_16 |= var_6;
                            var_17 = var_13;
                        }
                    }
                }
            }
        }
    }
    var_18 = max(4728, 1);
    var_19 = var_4;
    var_20 = (max(var_20, (((var_5 >= ((max((var_13 > var_4), (!5907026287265555862)))))))));
    #pragma endscop
}
