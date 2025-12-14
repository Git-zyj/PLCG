/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 ? (var_12 + -99) : var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((-39195307 == (!17179868160))))));
                                arr_14 [i_2] [i_2] [i_2] [i_0] [i_0] = (((~var_9) ? (((-(arr_4 [i_2 + 1])))) : (arr_11 [i_1 - 3] [i_1 - 1] [i_2] [i_1])));
                                var_19 = (max(var_19, (arr_8 [i_4] [i_1] [i_4] [i_4])));
                            }
                        }
                    }
                    var_20 = 4245621842;
                    var_21 += (~(arr_13 [i_0] [i_0] [i_1] [i_0] [i_1]));
                }
            }
        }
    }
    var_22 = (min(var_14, var_13));
    #pragma endscop
}
