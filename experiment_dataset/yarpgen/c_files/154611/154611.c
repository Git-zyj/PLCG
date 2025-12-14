/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_8));
    var_11 = (min(var_11, (var_2 < -11489)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_3 ? 1 : var_2));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = 11488;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((~(-11489 + 11460)));
        arr_8 [i_1] = ((+(((max((arr_5 [i_1] [i_1]), -493684803)) / var_9))));
    }
    #pragma endscop
}
