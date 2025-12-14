/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(var_13, (((((1 ? var_6 : var_14))) ? ((min(var_8, var_12))) : ((max(var_0, 1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 ^= var_13;
        arr_4 [15] [15] = 1;

        for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_8 [5] [1] [i_0] = (((arr_2 [i_0]) - (!19597)));
            arr_9 [i_0] [i_1] = (arr_3 [i_0]);
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_19 ^= ((~65535) ? ((var_10 ? (arr_7 [i_0]) : var_16)) : var_3);
            var_20 = ((-(~var_12)));
            arr_13 [2] [i_2] = ((var_10 ? (arr_2 [i_2 + 2]) : (arr_12 [i_2 + 2] [i_2])));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_21 = (((((var_5 << (var_6 - 8749724654200932536)))) ? (~var_11) : (arr_16 [i_3])));
        var_22 = (((var_16 ? (arr_15 [19]) : var_12)));
        arr_18 [i_3] = 29450;
    }
    #pragma endscop
}
