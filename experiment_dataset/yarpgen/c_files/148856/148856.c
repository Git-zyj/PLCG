/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (max((arr_1 [i_1]), (-24735 ^ 1036505388)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] = (28221 ^ -2036);
                                arr_15 [i_1] [i_2] = ((-1 ? (arr_5 [i_1]) : (max((arr_13 [i_4 + 1] [i_2] [i_4 - 2] [i_2] [i_1]), (arr_13 [i_4 - 2] [i_2] [i_4 - 3] [i_2] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (65535 ^ var_5);
    var_15 = (max((~var_12), var_1));
    var_16 = (1 ^ var_7);
    #pragma endscop
}
