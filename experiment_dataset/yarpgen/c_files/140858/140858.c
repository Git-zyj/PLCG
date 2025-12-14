/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max(var_0, var_8)), ((var_7 ? var_14 : (((var_6 ? 1905442676 : var_5)))))));
    var_17 = (min(var_17, 1905442685));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = ((~((-1995074159 % (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                    var_18 = 22544;
                    var_19 = (((arr_0 [i_1] [i_1]) ? 10 : (arr_0 [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = ((max((arr_7 [i_3 + 1] [i_1] [i_2] [i_3]), (arr_11 [i_2]))));
                                var_21 += (arr_10 [i_3] [i_3 - 2] [i_3] [i_3]);
                                var_22 ^= (arr_5 [i_0] [i_1] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
