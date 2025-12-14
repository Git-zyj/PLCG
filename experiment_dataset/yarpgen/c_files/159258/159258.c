/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((2938 ? 224 : -2935));
    var_18 = (min(var_18, (((~var_13) ^ (min((var_2 << var_4), var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (((~(arr_4 [16] [i_1] [i_0]))));
                var_20 = (max(var_20, (((3 ? 65311 : -1145989586)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((65311 - (arr_8 [22] [i_2 - 2] [i_2] [i_3])))) ? (arr_7 [i_0] [i_2 - 2] [i_0] [i_3] [i_4 + 1] [i_0]) : ((((arr_5 [i_0] [i_2 - 2] [i_3]) ? (arr_7 [i_0] [i_2 - 2] [i_2] [i_3] [i_4 + 1] [i_3]) : (arr_5 [i_0] [i_2 - 2] [11]))))));
                                arr_14 [i_0] [i_0] = min(((((var_8 ? 211 : (arr_12 [i_1]))) + (((min(var_7, var_7)))))), -20);
                                var_21 = (max(var_21, ((((min(20, 6)) > (arr_8 [i_0] [i_1] [i_2 - 2] [i_4 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
