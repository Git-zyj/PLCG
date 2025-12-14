/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = (min((min(255, (arr_5 [i_0 + 1]))), ((min(var_0, (arr_5 [i_0 + 1]))))));
                                var_18 = (min((((arr_4 [i_0]) * ((1158594780 ? (arr_1 [i_0] [i_1]) : 192)))), ((((var_6 >= (arr_10 [i_0] [i_1] [i_2] [i_3])))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] = ((((min((min((arr_4 [i_0]), 32)), 0))) > ((min(var_1, var_13)))));
                }
            }
        }
    }
    var_19 = (min((((min(543538150, var_10)) / (min(-543538151, var_6)))), (var_1 || var_10)));
    #pragma endscop
}
