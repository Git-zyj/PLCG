/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((-(!1)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = (arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 |= (arr_4 [i_4] [i_1]);
                                arr_14 [i_3] [i_1] [i_2] [i_2] [i_0] [2] [i_0] = ((-((var_14 ? (arr_9 [i_0] [16] [i_0] [i_0]) : ((max(var_17, -32758)))))));
                                arr_15 [i_2] [1] [i_2] [i_2] [i_4 - 1] = 11820803412319484922;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_15;
    var_23 = var_5;
    #pragma endscop
}
