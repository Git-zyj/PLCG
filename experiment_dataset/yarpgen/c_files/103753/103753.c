/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = 35319;
        arr_3 [i_0] [i_0] = var_12;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [1] [3] = (((var_11 ? (arr_1 [i_1] [2]) : -5521575411655495568)));
        arr_7 [i_1] = (max(((1 ? (~1) : (arr_4 [i_1]))), 228));
        arr_8 [i_1] = var_9;
        var_17 = (max(((99329813122756428 ? -9223372036854775803 : (arr_0 [8]))), 65501));
        arr_9 [i_1] = ((((min(-480, (arr_5 [i_1] [7])))) ? 99329813122756435 : (arr_4 [i_1])));
    }
    var_18 = (22182 || 668663699);
    #pragma endscop
}
