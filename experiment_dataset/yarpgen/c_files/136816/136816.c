/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_2] [i_1] [i_2] = var_15;
                            arr_10 [i_2] = ((!((((arr_5 [i_0] [i_3] [i_1 + 1]) ? (arr_4 [i_0] [i_0] [i_2]) : -347783095345619690)))));
                            arr_11 [i_2] [1] [i_2] = (min((arr_2 [i_0]), (!var_13)));
                        }
                    }
                }
                var_18 = (min(var_18, (arr_0 [i_0])));
                var_19 ^= var_14;
                arr_12 [i_0] [i_1] = ((((((min(28770, -89))))) ? ((((min((arr_5 [i_0] [7] [i_1 + 1]), 1))) ? -56 : ((var_0 ? var_6 : 88)))) : (((var_5 ? ((-(arr_2 [i_0]))) : ((min(31, 36766))))))));
            }
        }
    }
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_21 [i_4] = ((!((max((arr_7 [i_4] [i_5 + 1] [i_6] [i_4]), (arr_7 [i_4] [i_4] [i_5 + 2] [i_6]))))));
                    arr_22 [i_4] = (!15558);
                }
            }
        }
    }
    #pragma endscop
}
