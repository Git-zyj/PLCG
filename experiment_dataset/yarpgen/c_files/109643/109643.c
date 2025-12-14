/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((((((arr_2 [i_0] [i_0]) - (~var_5)))) || (((var_8 ? (~var_1) : var_4)))));
                arr_4 [i_0] = ((min(-1307, 408262708)));
                var_13 -= (min((arr_0 [i_0]), ((~(arr_1 [i_0] [i_1])))));
                var_14 = -4475230719845907380;
                var_15 = ((((-(arr_1 [i_0] [i_0]))) % var_9));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_16 = (((((var_0 << (arr_8 [i_2 + 2] [i_2 - 1])))) ? ((var_4 ? var_5 : (var_9 && var_6))) : var_3));
                var_17 = (min(var_17, 32762));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_17 [i_2] [i_5] = (max((arr_2 [i_4] [i_6]), (max((((arr_11 [i_6] [i_5] [i_3] [i_2]) ? (arr_10 [i_5 - 1] [i_5 - 1]) : 10589)), (((-(arr_11 [i_2] [i_3] [i_5 - 1] [i_6]))))))));
                                var_18 = ((~((((arr_8 [i_2 + 2] [i_2 - 1]) > (arr_6 [i_2 + 1] [i_2 + 1]))))));
                                arr_18 [i_2] = (((var_9 ? (~var_7) : (arr_13 [i_2] [i_2 + 1] [i_5 + 1] [i_5]))));
                                var_19 = (min((max((arr_14 [i_2 - 1] [i_6]), (arr_14 [i_3] [i_3]))), (max(-7950, -6556693476046169282))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
