/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_20 = ((~((var_6 ? -4096 : var_9))));
            arr_7 [i_1] = (((((4111 ? var_12 : 4100))) ? ((0 ? var_13 : 1889473571)) : -4096));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 = (0 ? -10471 : var_14);
            arr_11 [i_2] = (var_14 ? var_1 : 12288);
            var_22 = ((var_10 ? var_3 : var_1));
            arr_12 [14] [14] [14] = 1572919485;
            arr_13 [i_0] [i_2] [4] = 46084202;
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_23 = (max(var_23, -var_4));
            arr_18 [i_3] = -4117;
        }
        var_24 = var_8;
    }
    var_25 = (((((max(2, 1175167225)) >> (var_13 * 0))) < (min(50331648, ((var_10 >> (var_19 + 106)))))));
    var_26 = var_2;
    var_27 = (max(var_27, (((((var_6 ? ((var_12 ? 2 : 0)) : var_15)) & 613016858259173134)))));
    #pragma endscop
}
