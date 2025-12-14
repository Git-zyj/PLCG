/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_10 = ((-24068 ? (arr_2 [i_1]) : (arr_2 [2])));
            var_11 = (min(var_11, 24068));
            var_12 = var_4;

            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_13 = (((arr_3 [i_2]) ? var_0 : 32));
                var_14 = ((var_4 ? -var_0 : 8191));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                var_15 &= ((var_9 ? 0 : 48));
                var_16 = (arr_7 [i_1] [i_1]);
                arr_13 [i_3] [i_1] [i_1] [i_0] = var_3;
            }
        }
        var_17 ^= ((((((arr_10 [7] [0]) - var_9))) ? var_5 : var_5));
        var_18 |= (1721557810 + -24068);
        arr_14 [i_0] = -15831;
        var_19 = (((15828 ? 101 : 607524916)));
    }
    var_20 = (min(var_9, (!-24068)));
    var_21 = min(-966146839, 49704);

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_22 = (max(var_22, (arr_15 [12])));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_23 = 607524916;
            arr_19 [i_4] = ((18446744073709551605 ? 3968934728 : (arr_17 [i_4])));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_24 &= (15831 ? var_1 : ((((!((max((arr_20 [i_4]), 24066))))))));
            var_25 = ((0 * ((((~75) ? 7 : ((32767 ? 15817 : 32407)))))));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            arr_25 [i_4] [i_4] = min((((min(var_4, var_2)))), (max((max((arr_17 [i_4]), var_8)), (((var_6 % (arr_17 [i_4])))))));
            var_26 = (max(49704, (~236)));
        }
        var_27 -= max(((((min(3687442392, var_4))) ? (((var_4 ? var_6 : var_4))) : 18258471485699727458)), (((((min(49718, -1))) ? (max((arr_22 [i_4]), (arr_15 [2]))) : var_9))));
    }
    #pragma endscop
}
