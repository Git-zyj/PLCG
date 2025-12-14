/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] = (arr_3 [i_1]);
                                arr_14 [i_0] [6] [i_0] [i_0] [i_0] [i_0] = (!10);
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] [i_2] = -24313;
                    arr_16 [i_0] [i_0] = (min(-31, ((-((min(27, (arr_1 [i_0]))))))));
                    var_20 = (min(var_20, (((min((min(504, var_16)), 1))))));
                }
            }
        }
    }
    var_21 = ((!(+-1)));
    var_22 = -7;
    #pragma endscop
}
