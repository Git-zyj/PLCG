/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((((135 ? var_4 : var_7)) & 135))) || (((var_0 << (var_1 - 202))))));
    var_16 = ((max((min(var_1, var_9), var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 ^= ((-((4573700068945851956 ^ (140 <= var_12)))));
                                arr_15 [i_4] [i_0] [i_0] [i_0] [i_0] = 255;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 = ((var_3 < (((arr_1 [i_5]) / var_7))));
                                var_19 += 140;
                            }
                        }
                    }
                    var_20 &= ((((min((arr_18 [5] [i_1] [i_2] [i_2] [i_2]), ((min(var_0, 7936)))))) && -176534271));
                    arr_21 [i_0] [i_0] [i_2] = ((min(-246, ((max(var_14, var_4))))));
                }
            }
        }
    }
    #pragma endscop
}
