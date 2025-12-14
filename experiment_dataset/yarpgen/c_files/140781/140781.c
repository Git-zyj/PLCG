/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_15, ((max(var_5, (var_1 && 0))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (((var_2 - 0) < ((-(arr_1 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, 65535));
                            var_20 = (min((((((1 ? 0 : 96))) ? (arr_10 [i_0] [i_0]) : (arr_2 [i_0]))), (arr_3 [i_3])));
                            var_21 = (min((arr_10 [i_1] [i_1]), 96));
                        }
                    }
                }
                var_22 = (min(var_22, ((((((max((arr_10 [i_0 - 1] [i_0 - 1]), (arr_4 [i_1] [9]))) ? 1 : ((max(0, (arr_7 [6] [6]))))))) ? (arr_2 [1]) : 255))));
            }
        }
    }
    #pragma endscop
}
