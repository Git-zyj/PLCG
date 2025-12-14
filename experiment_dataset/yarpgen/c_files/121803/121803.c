/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 *= 700730690;
        var_14 = ((!(arr_0 [i_0])));
        var_15 += 0;
        arr_3 [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 = ((!((((arr_4 [i_1]) ^ 1931357926)))));
        arr_7 [3] [i_1] = ((!((!(arr_4 [i_1])))));
        var_17 += (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_18 = max((124 | var_10), (~4244862569));
        arr_10 [i_2] = ((var_10 ^ ((((!((min((arr_4 [i_2]), var_0)))))))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_19 *= 124;
        arr_13 [i_3] [i_3] = var_4;
    }
    var_20 = (max(var_20, var_2));
    #pragma endscop
}
