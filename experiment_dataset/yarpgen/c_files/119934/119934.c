/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((5622587 ^ (arr_0 [i_0])));
        arr_3 [i_0] = (~0);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] = var_2;
            var_17 = (arr_0 [2]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_18 -= 24;
            var_19 = arr_4 [i_0] [i_0] [i_0];
            var_20 = (max(var_20, ((max((((((var_13 ? 2147483647 : var_5))) || (((1 ? (arr_1 [i_2]) : (arr_4 [i_0] [i_0] [i_0])))))), var_8)))));
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_21 = (~25);
        var_22 = (arr_0 [i_3]);
    }
    var_23 = ((2525712423 << (-1024969833 + 1024969845)));
    #pragma endscop
}
