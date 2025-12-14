/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_1 ? -84 : var_2)) / var_16)) > (((max(21, var_3)) % var_0))));
    var_20 = ((var_5 >= ((((max(var_13, 35)) <= 2626414189)))));
    var_21 ^= ((!((33 >= ((var_4 ? var_5 : var_5))))));
    var_22 = ((var_10 == (((246 == (max(var_3, 1668553112)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_23 = ((var_17 == (((233 % 33) ? (((((arr_0 [13]) != 26)))) : (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_24 -= -22;
            var_25 = ((((((((arr_0 [i_1]) + var_4)) >= var_8))) % 71));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_26 = (arr_9 [6] [i_0] [i_0]);
            var_27 = ((var_18 ? (min(var_0, (var_1 > 61))) : (((max(var_14, ((((arr_8 [11] [i_2] [i_0]) > (arr_0 [i_0]))))))))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_28 = var_17;
            var_29 = ((((((159 ? 1048575 : var_18)) % ((var_8 ? var_6 : 33)))) >> (((((arr_3 [i_0] [i_3]) ? (arr_9 [i_0] [i_0] [3]) : (2937204233 / var_4))) - 222))));
        }
        var_30 = (!var_11);
        arr_13 [i_0] = (var_13 >= 8323072);
        var_31 = (max((((4286644223 >= var_9) - (var_9 == var_12))), ((((arr_0 [i_0]) <= (((var_1 && (arr_11 [i_0] [i_0] [8])))))))));
    }
    #pragma endscop
}
