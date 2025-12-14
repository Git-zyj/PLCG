/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (28672 * 0);
        var_19 = (((((arr_0 [i_0]) ? ((max(var_16, 28677))) : 28700)) < ((var_3 ? ((max(1, (arr_1 [i_0] [9])))) : 1))));
        arr_2 [1] = (max(7133, (max((arr_0 [i_0]), (7142 + var_12)))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((-(arr_4 [i_1])));
        arr_7 [i_1] = ((((((!7108) <= (arr_4 [i_1])))) <= (var_15 == -22)));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = var_1;
        var_20 ^= ((((28677 ? 7128 : 0)) + (arr_8 [i_2])));
        var_21 = (max(var_21, (((-8 ? (arr_5 [i_2] [i_2]) : ((((arr_4 [i_2]) & 1))))))));
    }

    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        var_22 = (max(1, ((28672 ? -28673 : (arr_13 [1])))));
        arr_14 [3] &= ((9 ? (((-5 + 2147483647) >> (28663 - 28641))) : -28702));
    }
    #pragma endscop
}
