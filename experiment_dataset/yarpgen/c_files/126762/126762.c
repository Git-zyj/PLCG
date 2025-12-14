/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (-24978 && 1382284756);
        var_11 = (max(var_11, (42 | 288089638663356416)));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((((1 ? 1382284770 : var_5)) > 221))));
        var_13 = (max(var_13, (((1 + (162 && -376265596))))));
        arr_6 [i_1 + 1] [i_1 + 1] = ((128 ^ -1382284770) ? -22376 : 27617);
        var_14 = (min(var_14, (((((-22376 ? var_9 : -1382284770)) % ((var_0 ? -22376 : -1382284753)))))));
        var_15 = (((((43399 ? 328494031 : 63))) ? var_2 : -3820276714399196102));
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_16 = var_2;
        var_17 += var_5;
        arr_9 [i_2] = (((!0) ? -3820276714399196090 : (-1 & -1382284765)));
        var_18 += (((-1382284753 && -98) || 255));
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3 + 1] [i_3] = (((!18446744073709551615) && (((2147483647 ? var_5 : 1501785973583094425)))));
        var_19 = (((var_6 && var_5) * ((-1382284757 ? 1 : 122))));
        arr_13 [i_3 + 1] [i_3 - 2] = (((var_6 / 2147483647) * 1179380742316290360));
    }
    var_20 = (max(var_20, var_9));
    #pragma endscop
}
