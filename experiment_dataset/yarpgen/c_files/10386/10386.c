/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (max((arr_4 [1] [i_0 - 1]), ((max((arr_4 [2] [2]), 1)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] = ((+(((arr_1 [i_0 - 1] [i_4]) + (arr_1 [i_0 - 1] [i_4])))));
                                arr_16 [i_1] [i_3] = (min((((arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_6 [i_1] [i_0 - 1] [i_0] [i_0 - 1]) : (arr_10 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))), 63));
                                var_11 = (1 && 217);
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (max((~var_1), 241));
    var_13 += var_3;
    var_14 = (((((-((var_7 ? 1 : 1))))) ? var_0 : (1 + 1)));
    #pragma endscop
}
