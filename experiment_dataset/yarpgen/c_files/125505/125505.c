/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_9 <= 18446744073709551615) ? (max(-var_12, (var_1 == var_13))) : (~var_13)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = var_7;
        var_16 = (arr_3 [i_0]);
        var_17 = var_4;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_18 = (max(var_18, 6));
            var_19 = (arr_7 [i_1]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (((((((arr_9 [i_3]) ^ var_6))) && ((((arr_5 [i_1]) ? var_12 : var_2))))))));
            var_21 = ((arr_10 [i_1]) | (arr_9 [i_3]));
            var_22 ^= (-1 >= 247);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_23 = var_1;
            var_24 = (~(((-2147483647 - 1) ? (arr_3 [i_4]) : (arr_11 [i_4 + 1]))));
        }
        var_25 = (arr_1 [15] [15]);
    }
    var_26 = (~var_7);
    var_27 = (((-(var_13 * -21664))));
    #pragma endscop
}
