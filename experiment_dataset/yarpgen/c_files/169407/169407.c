/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] [i_0 + 1] &= var_6;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (((arr_3 [i_0 - 2]) ^ (!var_16)));
            arr_5 [3] = (arr_0 [i_0 + 1] [i_0 + 1]);
        }
        var_19 = (((arr_0 [i_0 + 1] [i_0 - 1]) & var_6));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (1154630779106896793 * var_8);
        arr_9 [i_2] = 513995398;
        arr_10 [i_2] = (((~var_12) ^ (arr_1 [i_2 + 1])));
        var_20 = (arr_7 [i_2]);
    }
    var_21 = (var_11 < var_17);
    var_22 = (!var_9);
    #pragma endscop
}
