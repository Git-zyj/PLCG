/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(var_1, (max(var_8, var_14))))) ? (var_10 + 2683058297) : var_11));
    var_16 ^= var_8;
    var_17 = ((((((var_2 % var_7) - 392962801))) ? ((((1 ? var_2 : var_8)))) : var_4));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((arr_0 [1] [i_0 + 2]) ? (arr_0 [i_0] [i_0 + 1]) : var_8));
        arr_4 [i_0] [i_0] = ((-(arr_1 [i_0 - 1])));
        var_18 = (max(var_18, var_4));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_15 [i_1 + 1] [16] |= ((!(arr_13 [i_1 - 1] [i_1 + 1] [i_1 + 2])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_22 [i_1] = (arr_8 [i_5]);
                            var_19 = -54;
                            var_20 = (((((1 ? (arr_7 [i_1]) : (arr_16 [i_5] [i_2] [i_1] [i_4])))) ? var_2 : (~var_13)));
                            arr_23 [i_1] [12] [i_3] [i_1] [12] = ((19201 & (arr_17 [i_1] [i_1] [i_1 + 2] [i_1])));
                        }
                    }
                }
                var_21 = var_1;
                var_22 = (min(var_22, (arr_16 [2] [2] [16] [2])));
            }
            arr_24 [i_1] = ((((arr_0 [i_1 + 2] [i_1 - 1]) ? (arr_0 [i_1 + 2] [i_1 + 1]) : (arr_0 [i_1 - 1] [i_1 + 2]))));
            var_23 = -109;
            var_24 = 28397;
        }
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            var_25 = ((var_6 ? (((arr_18 [i_1] [i_6] [i_6] [4] [i_6 - 1] [i_1]) ? var_13 : (arr_18 [i_1] [i_1 + 2] [i_6] [i_1 - 1] [i_6 - 3] [12]))) : ((((arr_18 [i_1] [i_1] [i_1] [i_6 - 1] [i_6 - 1] [12]) ^ (arr_18 [i_1] [i_6] [i_6] [i_1] [i_6 - 2] [i_6 - 2]))))));
            arr_27 [i_1] [i_1] [6] = ((-((124 ? (-2147483647 - 1) : 1911520593))));
            var_26 ^= 573094674;
            arr_28 [i_1] [i_1] = (max((((!(((var_13 ? 122 : 127)))))), (min((19201 & 1), (~54)))));
        }
        var_27 -= ((((((arr_25 [1]) + -var_12))) ? (((arr_11 [i_1 + 1] [8]) ? -var_9 : (arr_2 [i_1]))) : (min((arr_9 [i_1 + 2] [i_1 - 1]), (arr_7 [0])))));
    }
    var_28 = ((((4831491131319587352 >= var_3) ? var_10 : ((0 ? -21679 : var_13)))));
    #pragma endscop
}
