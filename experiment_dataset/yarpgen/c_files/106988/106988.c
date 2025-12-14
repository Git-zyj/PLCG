/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [13] [i_0] = ((var_5 + (((arr_1 [4]) ? (arr_1 [2]) : (2333445476723043692 >= -25)))));
        arr_3 [i_0] = ((((!(-2147483647 - 1))) ? var_9 : ((var_5 - (arr_1 [i_0 - 2])))));
        arr_4 [i_0] = (((((arr_0 [i_0 - 1]) % var_5)) % 9223372036854775807));
        var_18 = (min(var_18, (((((((var_2 && var_4) ? (var_12 != var_0) : var_1))) && ((((((arr_0 [17]) == (arr_1 [15]))) ? (!var_4) : (((arr_1 [14]) | var_15))))))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_19 = (((-3181976243819984066 / 1073741823) / -var_7));
        var_20 *= ((0 ? -28 : 7173904901821862926));
        var_21 *= (((((((arr_0 [11]) && 0)))) >= 7173904901821862923));
        arr_9 [9] [11] = ((!(((18 ? 11272839171887688681 : 104)))));
    }
    var_22 -= (-((-((7173904901821862936 ? var_5 : var_10)))));
    var_23 = (min(var_23, (~var_14)));
    var_24 &= (((((var_8 ? 536870911 : (!16)))) || (var_13 & var_10)));
    #pragma endscop
}
