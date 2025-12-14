/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (4294967295 <= var_6);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_11 = (min(var_11, (((-3031682145324518659 ? -30684026 : -3031682145324518659)))));
        var_12 = (min(var_12, ((((arr_3 [i_0 - 1]) ? -58 : (arr_3 [i_0 + 3]))))));
        arr_4 [i_0] [i_0] = 0;
        var_13 ^= (((arr_0 [i_0]) ? ((9223372036854775807 << (((((arr_0 [i_0]) + 1646734525732161550)) - 58)))) : 62480));

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            arr_8 [i_0] [i_1] = (((arr_7 [i_1 - 4] [2]) ? -2090363743 : (arr_6 [i_0 + 2] [i_1 + 1])));

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_13 [i_0] [i_1] [i_1] [i_2] = (arr_9 [i_1]);
                var_14 *= (((3554333784726089203 * 18446744073709551615) > 2891440739));
                arr_14 [i_0 + 2] [i_1] [i_1] [i_0 + 2] = 241;
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {

            for (int i_5 = 4; i_5 < 18;i_5 += 1)
            {
                var_15 = (((~var_3) % (arr_22 [i_3])));
                var_16 -= (arr_21 [i_3] [i_4 + 1] [i_5 - 3] [i_5 + 1]);
                var_17 = (arr_16 [i_3]);
                arr_24 [i_3] [i_3] [i_3] [i_5] &= 47974;
            }
            var_18 = var_0;
            arr_25 [i_3] = ((!(arr_19 [i_3])));
            arr_26 [1] = (~((var_7 ? (arr_17 [18]) : (arr_20 [1] [i_4 + 1]))));
        }
        var_19 = ((((1 ? -519676823 : (arr_16 [i_3]))) <= var_3));
        var_20 -= (((arr_17 [i_3]) ? 7827335660442940531 : 24));
        var_21 = 3042;
        arr_27 [11] = ((-(arr_23 [i_3] [i_3])));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_22 = (arr_28 [i_6] [i_6]);
        var_23 = -0;
        var_24 = (min((max(33446, 18446744073709551585)), (arr_29 [i_6])));
        arr_30 [1] [i_6] = (((~var_6) >= (arr_28 [i_6] [i_6])));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_25 *= (max(((((arr_9 [0]) - (arr_9 [8])))), ((3042 ? 456303431 : -28381))));
        var_26 += (((var_0 ? (arr_1 [i_7] [i_7]) : (arr_22 [i_7]))));
        var_27 += ((max((arr_6 [i_7] [i_7]), ((((arr_7 [i_7] [0]) ? var_9 : var_3))))) - ((((((3 >= (arr_28 [i_7] [i_7]))) || ((((arr_10 [i_7] [i_7] [i_7] [i_7]) - var_4))))))));
    }
    var_28 = (max(((min(var_7, 2))), (((((min(var_3, 0))) * (!87))))));
    #pragma endscop
}
