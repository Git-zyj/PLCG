/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = (max((arr_6 [i_0] [i_0] [i_0] [12] [i_0] [1]), var_6));
                            var_17 = (((min(1, (arr_0 [i_0 + 1] [i_3]))) <= (((6 ? (arr_3 [i_0 - 2] [i_3]) : 4294967294)))));
                            var_18 = (((((0 ? 37 : 248))) ? -22 : (min(248, -3203885669254684478))));
                            arr_9 [i_3] [i_1] [i_2] [i_1] [i_2] = (arr_0 [i_0 + 1] [i_0 + 1]);
                        }
                    }
                }
                arr_10 [i_1] &= (min((((((var_11 + (arr_5 [i_0] [i_1] [i_1])))) ? ((min(var_13, 17))) : ((1 ? (arr_0 [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_1] [i_1]))))), ((min(var_2, (!252))))));
            }
        }
    }
    var_19 = (min(var_19, var_4));
    #pragma endscop
}
