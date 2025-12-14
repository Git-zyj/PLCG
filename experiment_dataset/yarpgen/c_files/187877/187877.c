/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!var_0) && ((((((var_11 ? -27704 : var_7))) ? -717 : ((var_12 ? 25206 : -5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (arr_4 [i_0] [15])));
                            var_15 = var_2;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_16 += (((var_11 + 9223372036854775807) << (((((var_3 ? 117 : var_9))) - 117))));
                                var_17 = (max((arr_11 [i_0] [i_1] [i_0] [i_1]), 21672));
                                var_18 = ((((var_1 + (arr_8 [i_4] [i_4 - 1] [i_4 + 2] [i_5 + 1]))) == ((var_4 ? -27704 : (arr_8 [i_1] [i_4 + 1] [i_4 - 1] [i_5 + 1])))));
                                var_19 = ((((((((-5295 ? 34993 : var_8))) ? ((var_4 ? -27729 : (arr_7 [4] [i_1] [i_4] [i_5]))) : var_7))) ? (((arr_16 [i_0] [i_4 + 1] [i_0] [i_5 - 3] [i_6 - 2]) ? (arr_10 [i_1] [i_4 + 1] [i_4] [i_5 - 4]) : (arr_16 [i_0] [i_4 + 2] [i_4] [i_4] [i_6 + 3]))) : ((-21673 | (arr_5 [i_4 + 1])))));
                                var_20 = (min(var_20, 27695));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
