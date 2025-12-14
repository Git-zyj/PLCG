/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = 1851403358;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_2] [i_1] [i_4] = ((max(var_9, (arr_6 [i_3 + 4] [i_3 - 3] [i_3 - 3] [i_3 - 1]))));
                                var_19 *= (!685933875);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_24 [i_5] [i_5] [i_5] [i_8] [12] = (((min(var_13, (arr_23 [i_7]))) / ((((((3348710596 ? (arr_12 [i_5] [i_5]) : 12435074883998434341)) != (!23564)))))));
                            arr_25 [0] [i_6] [i_5] [i_8] [i_7] = (48 * var_12);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_20 = (min((((~(~var_9)))), (((min((arr_26 [i_5] [i_10]), 675915770)) ^ (var_5 ^ 0)))));
                            var_21 = (max(var_21, ((max(((-9223372036854775795 - (arr_20 [i_5] [i_5] [i_5] [i_10 + 3]))), (!4294967287))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((max(1217817385, (min(var_5, var_17)))));
    #pragma endscop
}
