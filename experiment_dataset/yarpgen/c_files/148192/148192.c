/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((~var_11) ? var_18 : (!17))), (var_1 - var_5)));
    var_21 = (min((!-4991427680036224823), var_17));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_22 -= (arr_2 [i_0]);
        var_23 ^= (((min((((arr_1 [i_0] [3]) ? var_19 : 13)), 1)) <= ((~(arr_0 [11] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = 5369;
        var_24 = (min(var_24, (((max(var_13, (!var_16)))))));
        arr_6 [i_1] = ((!(arr_0 [11] [i_1])));
    }
    #pragma endscop
}
