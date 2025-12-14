/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_10;
        var_18 = ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_19 += (((-363022503 == 0) % 1));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [14] &= (~33554431);
        var_20 = (((-(arr_3 [1] [i_1]))));
        var_21 = var_5;
        var_22 = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_23 = -14303;
        var_24 = (min(var_24, (0 != 1)));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_25 = (((arr_10 [i_2]) == (arr_10 [i_3])));
            var_26 -= ((min(26229, (-2147483647 - 1))));
        }
        var_27 |= -4294967295;
    }
    var_28 ^= ((-(min(var_7, var_15))));
    #pragma endscop
}
