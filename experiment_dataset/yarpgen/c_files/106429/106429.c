/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = arr_2 [i_0 + 3];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 &= -1329550137;
                                var_14 *= (arr_11 [i_0 - 2] [i_0 - 2] [i_2]);
                                arr_15 [i_3] [i_3] [i_1] [i_3] [2] [i_1] = (max((arr_7 [i_1] [i_1 - 1] [i_1] [i_3]), (arr_2 [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 |= var_4;
    #pragma endscop
}
