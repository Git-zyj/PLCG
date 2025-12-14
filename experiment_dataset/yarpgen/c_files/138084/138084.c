/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((var_15 ? (var_6 < var_3) : var_0)) + (((var_13 % var_9) / (max(241527276, var_15)))))))));
    var_20 *= var_15;
    var_21 = ((~((-1581914742 ? ((1 ? 128 : var_3)) : (var_4 | 9695533405314115493)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (max(((((arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 2]) ? 88 : 197))), 440597448));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = ((((((((arr_6 [i_2 - 1]) << (var_12 - 8316114726918546048))) | 0))) >= ((var_1 & (arr_11 [i_0] [i_1] [i_1] [i_0])))));
                                var_24 = (1 >= 0);
                                var_25 *= (min(((max(((~(arr_5 [i_0] [i_0]))), (arr_8 [i_2 + 3] [i_2 - 2] [i_2 + 3])))), ((((107114440 & (arr_4 [6]))) & (arr_1 [i_3])))));
                                var_26 = (min(var_26, (((1 - (min(241527272, (arr_8 [i_2 - 2] [i_2 + 2] [i_2 + 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
