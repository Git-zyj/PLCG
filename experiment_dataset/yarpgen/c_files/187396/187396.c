/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_8));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 + 1] [i_1] [i_0 + 3] [i_0] [i_4] [i_2 + 1] [i_0] = (0 / 379865673);
                                var_12 = (i_0 % 2 == 0) ? ((((var_8 >> (((arr_3 [i_1 + 2] [i_0] [i_1 - 4]) + 20576)))))) : ((((var_8 >> (((((arr_3 [i_1 + 2] [i_0] [i_1 - 4]) + 20576)) - 824))))));
                            }
                        }
                    }
                    arr_12 [8] [i_1 + 1] [i_1] &= var_10;
                }
            }
        }
    }
    var_13 = (max(var_13, 19760));
    var_14 = (((var_6 > var_5) | var_5));
    #pragma endscop
}
