/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_6 [i_1] [i_1] [i_2] = (var_7 <= var_13);
                var_20 = (((var_4 | var_18) ? -var_3 : (var_8 || var_7)));
            }
            var_21 = 48;
            var_22 = var_0;
        }
        arr_7 [i_0] = ((-(max(((-1296343800 ? var_8 : var_5)), (var_18 || var_9)))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] = (~48);
        var_23 = ((-((-(min(20, var_0))))));
        var_24 = (min((((((65515 ? var_14 : var_3))) ? (~var_14) : (((245760 ? var_10 : var_3))))), (var_2 == 1)));
    }
    var_25 = var_16;
    #pragma endscop
}
