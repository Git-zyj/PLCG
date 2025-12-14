/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_12;
    var_15 |= (((var_7 - (~var_8))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = (max((~1), var_9));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0 - 1] [i_0 - 1] = ((((arr_0 [i_0]) ? 1 : 1)));
            var_17 |= 1;
            var_18 = ((1979392793722845015 && (!1)));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [i_2] [i_2] = 1;
            var_19 = ((-2631660112460815930 + ((max(var_0, ((var_2 ? 1 : 6097)))))));
            var_20 = var_10;
        }
        var_21 = (((5660 < var_3) <= 1));

        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            var_22 = ((!((min(((-2517453739563032656 ? 371862258 : 192)), (((-2056740077 < (arr_8 [i_3])))))))));
            var_23 = -2517453739563032655;
        }
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_24 = (((((arr_12 [i_4 - 1] [i_4 - 1]) & (arr_12 [i_4 - 1] [i_4]))) - (max((arr_12 [i_4 - 1] [i_4 + 2]), (arr_12 [i_4 - 1] [i_4])))));
        var_25 = (((var_12 * var_2) ? (arr_11 [i_4 + 1]) : (min((arr_11 [i_4 + 2]), (arr_11 [i_4 + 1])))));
        arr_13 [i_4 + 2] = (((((208 ? 2517453739563032656 : 1))) ? (arr_10 [i_4]) : 1));
        arr_14 [i_4 - 1] = ((!(((-((var_4 ? (arr_10 [i_4]) : (arr_12 [i_4] [i_4 + 1]))))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_26 ^= (min((var_1 / var_9), -16396958209320324883));
        var_27 = (max(var_27, (((-10673 <= (~var_4))))));
        arr_19 [i_5] = var_12;
    }
    #pragma endscop
}
