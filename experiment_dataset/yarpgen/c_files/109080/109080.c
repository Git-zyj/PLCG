/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_8;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_11 = (((((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0]))))) | (((arr_0 [i_0]) ? 2513790865090456900 : var_3))));
        arr_2 [8] [10] = (min((min(4611686018426339328, (arr_0 [i_0]))), (min((arr_0 [i_0]), -28205))));
        var_12 = (min(-var_2, (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - 11096522521037697821))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_13 = ((!((min((4000243426 | 15), 294723869)))));
        arr_6 [3] [i_1] = (min((arr_1 [i_1] [i_1]), (((~(((arr_4 [i_1]) ? var_8 : var_9)))))));
    }
    var_14 = var_5;
    #pragma endscop
}
