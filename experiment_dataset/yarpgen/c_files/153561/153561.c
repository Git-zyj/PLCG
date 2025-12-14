/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_11 *= ((-(max((((arr_5 [i_1 + 2] [i_1 + 2] [i_2]) + var_4)), -1))));
                    var_12 = (min(var_12, ((max((((arr_3 [i_0] [i_1 + 2]) * (arr_1 [i_2]))), (((-9349 + 128) | (((var_2 ? (arr_5 [i_0] [i_1] [i_2]) : var_5))))))))));
                    var_13 -= (arr_6 [15] [i_1] [i_0]);
                }
                var_14 |= ((((((~(arr_4 [1] [i_0]))))) > (((var_9 < 52679) + (arr_1 [i_1 + 3])))));
            }
        }
    }
    var_15 = (min(-var_0, (((var_2 > var_3) ? var_9 : (min(var_0, var_5))))));

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_16 = (((((arr_6 [i_3] [i_3] [i_3]) == (arr_6 [i_3] [i_3] [i_3])))) <= (arr_0 [i_3]));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                {
                    var_17 *= 32639;
                    var_18 -= var_4;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_22 [i_4] [i_4] [i_4] [i_4] [i_7] [i_4] = (((~var_9) <= (((((arr_17 [i_3] [i_6]) && (-93 - var_4)))))));
                                var_19 = (!var_4);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 |= ((min((~var_9), var_9)));
    #pragma endscop
}
