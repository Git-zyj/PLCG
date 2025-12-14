/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (max((min(var_9, ((max(var_6, var_12))))), 15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_0] [i_2] = (arr_2 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 0;
                                var_20 = (max(var_20, (min((max((-15718 & 0), (arr_14 [i_4 + 1] [i_4] [i_4] [i_4] [i_4 + 1]))), (max(0, 1369569522))))));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4 - 1] [i_1] [i_0] = (!((!(419803284 / 30955))));
                                var_21 = (max(var_21, ((((((-(arr_10 [i_3] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) && (arr_4 [i_1]))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] = (((min((arr_12 [i_1] [i_1] [i_1]), (arr_12 [i_2] [i_2] [1])))) << ((((min((arr_12 [i_0] [i_1] [i_2]), (arr_12 [i_0] [i_1] [i_2])))) - 26797)));
                }
            }
        }
    }
    #pragma endscop
}
