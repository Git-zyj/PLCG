/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (~var_6);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = (((~var_0) ? ((-977389982 ? (arr_2 [i_0]) : var_7)) : (arr_4 [i_0])));
            arr_7 [i_0] [i_1] = (~-37);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = 37;
            var_17 |= arr_9 [i_0];
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_18 = (arr_0 [4]);
        var_19 = var_13;
    }
    var_20 = var_1;
    var_21 += ((!(((var_9 ? (~61) : (!1))))));
    #pragma endscop
}
