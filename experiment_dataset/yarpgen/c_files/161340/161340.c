/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(((((min(var_5, var_4)) / var_5))), ((~(max(var_9, var_3)))));
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 -= ((((max((max(var_9, var_9)), var_5))) < (max(-var_2, var_4))));
        var_15 = (((((-((min(var_0, var_5)))))) ? (((!var_7) | ((var_3 ? var_1 : var_8)))) : (((~(max(var_2, var_5)))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_8 [i_0] = var_5;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_16 = (max(var_16, ((((((var_10 + 9223372036854775807) << (((var_11 + 8309281734672759) - 40)))) ^ var_8)))));
                arr_11 [i_1 - 1] = (var_5 <= var_5);
                arr_12 [i_1] [i_1 - 1] [i_1 - 1] [3] = ((!(var_4 < var_11)));
                arr_13 [i_0] [i_0] [i_0] = -var_7;
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                var_17 = var_2;
                arr_18 [i_0] [1] [i_0] = (~var_7);
                var_18 = (((var_0 / (2225734862466592962 / -2225734862466592962))) * ((max(var_9, (var_5 / var_7)))));
                var_19 &= (((!-var_6) << (!var_8)));
                arr_19 [i_1 + 1] [i_3] = max(((((max(var_4, var_3)) == (2864802409915637462 ^ 2225734862466592962)))), (max(-var_5, ((var_0 ? var_9 : var_11)))));
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_0] [6] [8] = var_4;
                arr_23 [i_0] [i_0] [i_0] = (min(((-(max(var_2, var_11)))), (((!(((var_10 ? var_3 : var_6))))))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_26 [i_4] = (((((var_1 ? var_5 : var_10))) ? var_5 : var_1));
                    arr_27 [i_0] [i_1 - 1] [0] [11] = ((var_1 / var_2) ? (!var_4) : (var_10 / var_9));
                }
                var_20 = (-(max((var_9 / var_6), (var_7 / var_3))));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                arr_31 [i_6] [i_6] [5] [1] = ((-(!var_0)));
                var_21 = (min(var_21, ((((~var_4) ^ (~var_9))))));
                var_22 = (var_11 ? -var_9 : var_6);
            }
        }
        var_23 = (max(var_23, (min(var_5, (max((max(var_0, var_1)), ((min(var_0, var_5)))))))));
    }
    var_24 |= min(((-((var_7 ? var_9 : var_10)))), ((~(max(var_1, var_5)))));
    #pragma endscop
}
