/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_16 = (min((((~var_9) | (arr_3 [i_0 + 1] [i_1 + 2]))), (((((var_10 + (arr_0 [i_1]))) ^ (arr_1 [i_0] [i_1]))))));
            var_17 = (min(var_17, ((((arr_4 [8] [i_0 + 1]) ? (!var_13) : (arr_4 [14] [i_0 - 2]))))));
            arr_5 [i_0] = var_15;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_0] |= (((((+((var_11 ? (arr_2 [i_2]) : var_7))))) + (((-9223372036854775807 - 1) ? (-9223372036854775807 - 1) : 2108513608))));
            var_18 ^= (((((max((arr_7 [i_0] [i_2] [i_0]), var_6))) ? ((-5550375099107950709 ? 14 : -68)) : ((var_11 ? var_11 : (arr_8 [12] [i_2] [i_2]))))));
            arr_11 [i_2] [i_2] [i_2] &= (max((arr_9 [i_0] [i_0] [i_2]), (((!(arr_1 [i_0 + 1] [i_0 - 2]))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_0] [i_2] [i_0] = (((arr_8 [i_0 + 3] [i_2] [i_0]) ? (arr_8 [i_0] [i_2] [i_0]) : (arr_8 [i_0] [i_2] [i_0])));
                var_19 = ((((arr_1 [i_2] [i_3]) ? var_13 : (arr_12 [i_0 - 1] [i_0 - 2]))));
                var_20 += (((arr_2 [i_3]) != (!17336684875286207862)));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {
                var_21 ^= (((1 != 5550375099107950692) ? (arr_4 [i_2] [i_2]) : var_4));
                var_22 = (((arr_9 [i_0] [i_0] [i_4]) ? (((var_11 * (arr_12 [i_4] [i_4])))) : var_12));
                arr_18 [i_0] [9] [1] [i_0] = (arr_8 [i_0 + 3] [i_0 - 2] [i_0]);
                arr_19 [i_2] [i_0] = (((var_10 % (arr_16 [i_4] [i_4]))));
            }
            var_23 *= (max((((arr_13 [i_0] [1] [i_2] [i_2]) ? var_9 : (max((arr_15 [i_2] [i_2] [i_2]), 5550375099107950703)))), ((max(((3146690408110337851 ? 0 : 0)), 14544879894535532777)))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_24 [i_0] = var_12;
            arr_25 [i_0] = var_14;
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_24 = (((((-1469167629 ? (251 <= 65535) : (~var_14)))) ? (arr_2 [i_6]) : (((!(arr_9 [i_0] [i_0 + 1] [i_0 + 1]))))));
            var_25 = (max((min((!-728809385), (min(var_5, (arr_0 [i_6]))))), -var_0));
        }
        var_26 *= ((var_2 ? 1 : (max(var_15, ((max(1, (arr_2 [2]))))))));
        var_27 = (!var_1);
        arr_28 [0] [i_0 + 1] |= (arr_1 [i_0 + 3] [i_0 + 3]);
    }
    var_28 = ((max(((var_7 ? var_2 : var_3)), (min(var_3, var_15)))));
    var_29 = (min(var_29, ((((((var_0 << (15333 - 15331)))) ? var_0 : var_14)))));
    #pragma endscop
}
