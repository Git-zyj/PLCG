/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_3 [i_0 + 3] [i_0 + 2]);
                var_17 |= ((4294967295 ? -1963682936 : (((((min(var_11, var_9)))) * var_0))));
                var_18 = (((~var_1) % (max((arr_3 [i_0 - 1] [i_0 + 3]), (arr_1 [i_0 + 1])))));
                arr_5 [i_0] [i_1] = ((~(max((((arr_1 [i_0 + 3]) ? 119 : 47782)), var_3))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] [i_2] [20] [i_5] = (max((43459 % -25), (arr_14 [i_2 - 3] [i_2] [i_2])));
                            var_19 = (max(var_19, (arr_14 [i_2] [i_2] [i_4])));
                            var_20 = (min(var_20, ((var_9 | (((~var_14) ? 118 : (arr_8 [i_2 + 2])))))));
                            arr_19 [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] = var_9;
                        }
                    }
                }
                var_21 = (max(var_21, (arr_13 [i_3] [i_3] [i_2] [i_3])));
            }
        }
    }
    #pragma endscop
}
