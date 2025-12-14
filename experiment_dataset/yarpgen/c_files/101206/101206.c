/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(932, 58637));
                                var_10 = (+-1009622466);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_11 = var_4;
                                var_12 = var_9;
                            }
                        }
                    }
                    var_13 = (min((((max(936, var_7)))), ((~(arr_5 [i_2 - 1] [i_2 - 2] [i_2])))));
                    var_14 = (max(var_14, (~0)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                var_15 = (!64620);
                arr_29 [i_8] = (min((64609 <= 1), ((var_9 != (min(46238, 9223372036854775807))))));
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
