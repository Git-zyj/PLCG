/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((((!(arr_0 [i_1])))) >= ((+(((arr_2 [i_1] [i_1] [i_0]) - (arr_2 [i_0] [i_0] [i_0]))))))))));
                var_19 = (-1 | 0);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (max(((-17 ^ (-127 - 1))), (arr_2 [i_3] [i_3] [i_2])));
                                arr_13 [1] [i_0] [i_2] [i_3] [i_0] = (((arr_9 [5] [i_4 + 1] [i_0] [i_2] [i_4]) + ((+(((arr_7 [i_0] [i_1] [i_0]) - (arr_1 [i_0])))))));
                                arr_14 [i_0] [i_1] [i_1] [i_0] = (max(7174645964687172518, 6640793051037549694));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((~((-(6 ^ 9223372036854775807)))));
    #pragma endscop
}
