/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1985823538881085523;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = ((1985823538881085519 & ((((arr_2 [i_0] [i_1]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0] [i_0] [i_1]))))));
                    arr_9 [i_0] [i_1] [i_2] = (max((min((arr_0 [i_0]), (arr_0 [i_0]))), (max(var_4, (arr_0 [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_3] [9] [i_1] [i_1] [i_0] [i_3] = ((var_12 >= (arr_10 [i_2] [i_3 - 1] [i_3] [i_3])));
                        var_14 = (((arr_10 [i_0] [i_0] [i_3] [i_3 + 1]) ? 1985823538881085534 : (arr_2 [i_2] [i_2])));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_17 [i_3] = -1768369890;
                            arr_18 [i_3] [i_3] [i_2] [i_2] [i_2] = var_6;
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = var_9;
                            var_15 &= (~var_12);
                        }
                        arr_20 [i_3] [i_3] [i_3] [i_0] = (~var_6);
                        var_16 = (((arr_13 [i_0] [i_0] [i_2] [i_2] [i_2]) - var_10));
                    }
                }
            }
        }
    }
    #pragma endscop
}
