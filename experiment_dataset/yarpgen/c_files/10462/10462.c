/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = (((((!(((-1 ? 664534162 : -5)))))) << (var_1 - 8935251680827310239)));
    var_21 = var_6;
    var_22 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_1] = (arr_1 [i_0]);
                    var_23 = (-(arr_1 [i_1]));
                    arr_10 [i_0] [9] [i_2] [i_2] = (((19 ^ (arr_0 [i_0 + 4]))) + (var_16 > 11));
                    arr_11 [9] [9] [i_1] [i_2] = max((((arr_4 [i_2 - 2] [i_2 - 3] [i_2]) ? 19 : (arr_4 [i_2 - 1] [i_1] [i_0]))), -var_17);
                }
            }
        }
    }
    #pragma endscop
}
