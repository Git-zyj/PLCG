/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_8 ? 73477182 : var_8))) ? ((134217727 ? 322674109904798557 : 3971)) : var_14)));
    var_18 = (max(((var_9 >> (5699032628820464932 != -1))), var_10));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((((~var_10) * var_3))) ? ((~(arr_1 [18]))) : ((-((max((arr_1 [6]), 1008))))));
        arr_4 [i_0] = ((~(((((var_2 ? var_4 : (arr_2 [i_0])))) ? (max(var_5, 2147483647)) : (((var_9 ? 2487620179 : (arr_2 [i_0]))))))));
    }
    var_19 = (min(((!((min(var_6, var_1))))), var_2));
    var_20 ^= var_6;
    #pragma endscop
}
