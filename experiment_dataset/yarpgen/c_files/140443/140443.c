/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = ((min((((57997 ? 1448034097 : var_6))), (arr_1 [i_0]))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] = ((((4294967295 ? (arr_4 [i_0]) : (arr_3 [i_0]))) % ((max(((((arr_4 [10]) <= (arr_0 [4] [i_1])))), ((6267 ? (arr_3 [i_1]) : var_0)))))));
            var_15 = -6505;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = (((((arr_7 [i_2] [i_0]) ? (max((arr_7 [13] [i_2]), (arr_1 [i_0]))) : ((var_13 ? 19142 : 18446744073709551602)))) * (((arr_8 [i_2]) ? 18446744073709551602 : (((3544952470004715451 ? (arr_5 [i_0] [i_2]) : 122)))))));
            arr_10 [i_0] [i_2] = -1;
            var_16 = (((min(var_13, (arr_7 [i_2] [i_0])))) ? (max((arr_0 [i_0] [i_2]), 4294967288)) : (min((arr_7 [i_2] [i_0]), (arr_0 [17] [i_2]))));
            var_17 = (max(var_17, (((((((arr_7 [i_0] [i_2]) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_2] [i_0])))) % (arr_7 [i_0] [i_0]))))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = (-9223372036854775807 - 1);
        arr_15 [i_3] = ((arr_11 [i_3]) >= (arr_0 [i_3] [i_3]));
        var_18 = 255;
        arr_16 [i_3] = (((arr_7 [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : (arr_7 [i_3] [i_3])));
        arr_17 [5] [i_3] = (((((-105 ? (arr_11 [i_3]) : var_9))) ? (((arr_4 [17]) ? var_0 : (arr_1 [i_3]))) : 162));
    }
    for (int i_4 = 4; i_4 < 11;i_4 += 1)
    {
        var_19 = (-9223372036854775807 - 1);
        arr_20 [i_4] = (((arr_2 [i_4] [i_4]) >= ((((((arr_18 [i_4] [5]) ? 2046170779735881206 : -1))) ? (arr_0 [i_4 - 1] [i_4]) : var_11))));

        /* vectorizable */
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_28 [i_6] [i_5] [i_5] [i_4] = (arr_7 [i_5] [i_4]);
                arr_29 [i_4] [i_5 + 1] [i_4] = (((((arr_4 [i_6]) ? (arr_12 [i_5 - 3]) : (arr_2 [i_6] [i_6]))) * (arr_5 [15] [i_5 - 3])));
            }
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                arr_32 [9] = (arr_5 [i_7 + 1] [8]);
                arr_33 [i_7 - 1] [i_5] [i_7] [i_7] = (((arr_24 [i_7] [i_7] [i_7 - 1]) ? (arr_1 [i_4 - 1]) : var_5));
                var_20 = ((var_4 ? (arr_23 [4]) : (arr_7 [i_5 - 2] [8])));
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                arr_36 [i_8] [i_5] [i_4] = ((((((arr_34 [i_4 - 1] [4]) >> (((arr_18 [7] [i_4 - 3]) - 2038244607))))) ? (arr_21 [i_5 - 1] [i_5 - 2] [i_5 - 2]) : ((28167 ? (arr_0 [i_8] [i_5]) : (arr_1 [i_8])))));
                var_21 = ((-((var_8 ? (arr_30 [i_5] [i_5]) : 1))));
                var_22 = (arr_25 [i_4 - 2] [i_5 - 2] [i_4 - 2] [i_4 - 2]);
                arr_37 [i_5 - 3] [i_5] [i_4] = (arr_5 [i_8] [0]);
                arr_38 [1] = (arr_21 [i_4 - 4] [i_4 + 1] [i_4 - 2]);
            }
            var_23 = -105;
        }
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 20;i_9 += 1)
    {
        arr_41 [i_9 - 2] [i_9] = (((arr_40 [i_9]) ^ (arr_40 [i_9])));
        arr_42 [20] = var_4;
        var_24 = ((!5860467258732449634) ? ((var_6 << (4228180105 - 4228180105))) : (((1593044492 * (arr_40 [i_9])))));
        var_25 = (((((1 ? 4294967295 : (arr_40 [i_9])))) ? ((((arr_40 [i_9]) + (arr_40 [i_9])))) : (arr_39 [i_9 + 2] [i_9 + 4])));
    }
    var_26 = (max((min(var_11, 32)), (((-1287050981 + 32767) ? var_9 : ((var_5 ? var_6 : var_0))))));
    #pragma endscop
}
