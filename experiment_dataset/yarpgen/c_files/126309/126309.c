/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_13 = (((var_5 ? ((~(arr_1 [i_0]))) : (arr_0 [i_0]))));
        var_14 ^= var_9;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_15 = (((~(arr_2 [i_1 + 2] [i_1]))));
        arr_6 [i_1 + 1] = (0 & -var_9);

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_16 += var_10;
            var_17 = var_2;
        }
        var_18 = ((var_12 * 4035702842) <= (arr_1 [i_1 + 2]));
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        var_19 = (((((var_12 << (((arr_9 [i_3 - 2]) - 96))))) && ((!((min(-1384699297, 2046564652550108908)))))));
        var_20 = (((((arr_2 [i_3 - 1] [i_3 - 1]) <= -27758)) || 55));
        arr_12 [i_3] = (((!0) ? (((((1 ? -2653875763398855309 : (arr_2 [i_3] [i_3])))))) : 18446744073709551615));
        var_21 ^= (2046564652550108908 + 255);
    }
    var_22 |= (min(1073741823, 3036813325));
    var_23 += var_6;
    #pragma endscop
}
