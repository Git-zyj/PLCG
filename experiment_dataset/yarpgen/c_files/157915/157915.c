/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (max(var_19, (((var_15 ? var_6 : (arr_0 [i_0]))))));
        var_20 *= ((((((arr_1 [i_0]) ? var_6 : var_17))) && (arr_1 [i_0])));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] [i_0] |= ((!(var_14 * var_3)));
            var_21 = (max(var_21, (var_4 + 31744)));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_22 = var_11;
            arr_8 [i_0] [i_2] = (((arr_3 [i_2]) * var_1));
            var_23 = (min(var_23, ((32764 % (arr_2 [i_0])))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = (var_8 >= var_18);

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_17 [i_3] [i_3] [i_3] [i_4] = ((!(var_1 != var_8)));
                var_24 = (((arr_11 [i_0] [i_3] [i_4]) < (arr_11 [i_0] [i_3] [i_4])));
            }
        }
    }
    var_25 *= var_7;
    var_26 = var_5;
    var_27 ^= 134799627;
    #pragma endscop
}
