/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max(55246, 55246)), var_5));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] [i_1] [4] [i_2] = ((-((1695741312748737662 ? var_9 : -20))));
                                var_11 = ((max(var_5, (max(var_7, var_7)))));
                            }
                        }
                    }
                    var_12 -= (max(var_3, (~var_0)));
                }
            }
        }
    }
    var_13 = var_9;
    var_14 = (min(var_14, ((max(((~(min(6119, var_0)))), var_3)))));
    #pragma endscop
}
