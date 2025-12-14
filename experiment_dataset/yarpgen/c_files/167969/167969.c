/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (((214 == var_11) * (99 - 117)));
                    var_17 = (((((arr_1 [i_0]) | (arr_2 [i_0] [i_0 - 1]))) | (41 && 181)));
                    arr_7 [i_2] = (((var_11 == var_1) * ((((arr_2 [i_0] [i_0 + 2]) <= 16)))));
                    var_18 = ((((var_14 % (arr_5 [i_2] [i_2]))) * (((arr_5 [i_2] [i_2]) >> (var_14 - 154)))));
                    arr_8 [i_2] = (((((((arr_4 [i_0] [i_0] [i_1] [i_2]) * var_14)) / (var_11 ^ 63))) >= ((var_11 * (arr_0 [i_0 + 2] [i_0 - 1])))));
                }
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
