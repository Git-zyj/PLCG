/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? var_1 : ((0 ? var_0 : (min(var_8, var_3))))));
    var_12 = (max(((-((max(11, 215))))), ((215 ? 1 : 75))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_13 = var_5;
        var_14 = (((arr_1 [i_0]) + -41));
        arr_2 [i_0] [i_0 - 1] = var_7;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 = (((var_4 || var_4) - var_8));
            arr_7 [i_0] = (!32756);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_10 [i_2] = (-41 < 0);
            var_16 = (!var_9);
        }
        var_17 = ((~(!var_4)));
    }
    #pragma endscop
}
