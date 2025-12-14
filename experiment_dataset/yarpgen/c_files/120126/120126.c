/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((var_2 ? var_10 : (min(47431658, var_6)))), (-2147483647 - 1)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -2147483637;
        arr_3 [i_0] = -3691110932570328591;
        arr_4 [i_0] |= var_0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [1] &= ((var_16 ? (((3040 ? 255 : -3691110932570328591))) : (((arr_6 [i_1] [i_1]) / (arr_5 [i_1])))));
        arr_8 [i_1] = var_6;
        arr_9 [i_1] = (((arr_5 [i_1]) != (arr_5 [i_1])));
    }
    #pragma endscop
}
