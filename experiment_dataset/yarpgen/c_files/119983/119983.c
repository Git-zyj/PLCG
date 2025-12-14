/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = (max((((min(var_7, var_11)) / var_5)), (22 / 22)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_17 = 233;
        var_18 = (21 <= 22);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = (arr_1 [i_1] [i_1]);
        var_19 = ((var_9 ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1])));
        var_20 -= var_11;
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = 39923;
        arr_11 [i_2] [i_2] = ((((229 ? (arr_8 [i_2 + 3]) : (arr_7 [i_2 + 2] [i_2 + 1]))) >= ((~(arr_7 [i_2] [i_2])))));

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_14 [i_2] [i_3] = 10335351491342748459;
            var_21 += 141;
            var_22 = (((((min(0, (-127 - 1)))) >= -1)));
            var_23 = 5276576376066389561;
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_24 ^= 241;
            var_25 ^= (arr_7 [i_2] [i_4]);
            var_26 = -63;
            var_27 = (((var_1 * var_13) ? ((10699042654524333820 ? ((min(-120, 29206))) : 241)) : ((((((min(1, 160)))) >= (arr_7 [i_4] [i_2]))))));
        }
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_28 = (4 * -63);
        var_29 = 26778;
        var_30 = ((((((var_7 & var_1) ? (-70 | 62) : var_1))) ? var_5 : -55));
    }
    #pragma endscop
}
