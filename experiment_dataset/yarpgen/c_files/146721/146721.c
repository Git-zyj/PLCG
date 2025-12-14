/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_5 ? var_3 : (min(var_8, 12398136248983630555))))) ? var_0 : ((((var_3 ? 825709229114937130 : -825709229114937137)) >> ((((var_11 ? -825709229114937130 : var_11)) + 825709229114937134))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_2 + 1] [i_2] [i_2] [i_0] = (min(28722, (min(((100 ? 825709229114937130 : 1)), -825709229114937151))));
                                var_13 = ((((~(arr_6 [i_2 + 1] [i_1]))) & (arr_11 [i_2 - 2] [i_2 + 1])));
                            }
                        }
                    }
                }
                var_14 = (max(var_14, ((min((min((max(1, 269598713)), 1)), ((min((arr_7 [i_0] [i_1] [i_1]), (arr_7 [i_1] [i_0] [i_0])))))))));
            }
        }
    }
    var_15 *= var_4;
    #pragma endscop
}
