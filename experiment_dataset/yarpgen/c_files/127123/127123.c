/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_10 = (((max((arr_9 [i_4] [i_4] [i_2 - 2] [i_2 + 2] [i_0 + 2]), (arr_9 [i_3] [i_3] [i_2 - 1] [i_2 - 1] [i_0 + 1]))) ? (max(242733453, 128)) : (((max((arr_9 [14] [i_4] [i_4] [i_2 + 2] [i_0 - 1]), 128))))));
                                var_11 ^= (max(((((((var_2 ? var_6 : (arr_4 [6] [15]))) + 2147483647)) << (((min((arr_5 [i_0] [i_1] [i_2] [i_1]), 4052233843)) - 247)))), ((((4052233843 ? 128 : 0)) << (112 - 108)))));
                                arr_14 [i_4] [i_3] [i_2] [i_2 - 1] [i_1] [i_0 + 1] = ((36336 ? (max(((0 ? 131071 : 1083666566310802110)), (arr_10 [i_2 - 2] [i_1 + 1]))) : (arr_8 [i_0] [3] [i_2] [i_1] [i_1] [i_0])));
                                var_12 -= 18446744073709420545;
                            }
                        }
                    }
                    var_13 = var_4;
                    arr_15 [1] [6] [i_0] = ((((!((min(60784, var_6))))) ? ((((min(29288, 1))))) : ((var_4 ? var_1 : (arr_12 [i_1] [9])))));
                }
            }
        }
    }
    var_14 |= var_1;
    var_15 = (min((~var_9), ((var_9 ? (min(185924360, 4553426488136611647)) : 694014621))));
    #pragma endscop
}
