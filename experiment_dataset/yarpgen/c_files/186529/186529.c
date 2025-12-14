/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_16 && (((((var_13 ? var_11 : var_0)) * ((min(458828493, 4417))))))));
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((min(var_1, (arr_0 [i_0 - 1]))))) >= (min((((arr_6 [i_0]) / var_13)), 2818167059))));
                arr_8 [i_0] = ((((min(8732, 1))) ? ((((!((min(var_8, var_8))))))) : (((arr_4 [i_0] [i_1] [i_1]) * ((((arr_1 [i_0]) * (arr_3 [i_0] [i_0]))))))));
                arr_9 [i_1] [i_0] = var_5;
                arr_10 [i_0] [i_0] [i_0] = (((((((var_6 || var_0) || (((arr_1 [i_1]) <= (arr_1 [i_0]))))))) >= (min(var_4, ((((arr_5 [i_0] [i_0] [i_1]) >= (arr_4 [i_1] [i_1] [i_0]))))))));
                arr_11 [i_1] = var_8;
            }
        }
    }
    #pragma endscop
}
