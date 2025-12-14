/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((min((min(var_17, var_14)), ((max(var_14, var_6)))))), (min((~var_12), (~var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((max((arr_0 [13] [i_0]), (((arr_6 [2] [i_2] [i_1] [i_0]) + (arr_2 [i_2]))))) * (arr_2 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [7] [1] [1] [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_0]);
                                var_21 &= (!-1290066940160710353);
                            }
                        }
                    }
                    var_22 *= (arr_11 [i_0]);
                    var_23 = (arr_5 [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    var_24 = min((min(var_15, var_16)), (min((var_1 ^ var_9), var_10)));
    #pragma endscop
}
