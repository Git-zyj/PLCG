/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((var_3 * (arr_0 [i_0] [i_0])));
        var_13 = (min(var_13, var_3));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = 19912;
            arr_11 [i_1] = (var_5 << ((((0 ? (arr_0 [i_1] [i_1]) : ((var_8 ? (arr_8 [1] [i_1]) : var_10)))) - 2107174925)));
            var_14 = var_10;
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            arr_14 [i_1] [i_1] = var_2;
            var_15 = (min(var_15, (arr_6 [i_3 - 1] [i_1])));
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_16 = (min(var_16, var_7));
            arr_18 [i_1] [i_1] = (var_7 || 13);
            arr_19 [i_1] [i_1] = (~19);
            var_17 = (min(var_17, (var_9 % -84)));
            arr_20 [i_1] = ((18446744073709551599 ? -1509703218 : 18446744073709551597));
        }
        var_18 = (((arr_9 [i_1]) ? 5090757771262546548 : (((~(var_8 >= var_4))))));
    }
    var_19 = ((-((var_9 ? ((4224657720827310534 ? var_7 : var_9)) : var_11))));
    var_20 = var_3;
    var_21 = var_8;
    #pragma endscop
}
