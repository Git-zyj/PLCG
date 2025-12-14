/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max((min(var_5, var_14)), ((var_2 ? 0 : var_14)))));
    var_16 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = (+((((((33553408 ? (arr_2 [i_0] [i_1]) : (arr_1 [i_0])))) > (max((arr_8 [i_0] [i_1] [i_2] [i_2]), (arr_3 [i_2])))))));
                    var_17 = (max((min((max(-3, (arr_2 [i_0] [i_1]))), (arr_6 [1] [i_2]))), -19039));
                    arr_10 [i_0] = (min((max((((var_10 > (arr_8 [i_2] [i_1] [i_1] [11])))), (0 % -42))), (max(-45, ((var_3 ? (arr_7 [i_0]) : -19036))))));
                    arr_11 [i_1] [i_1] &= ((~((~(~var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
