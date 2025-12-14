/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((9223372036854775807 ^ 226) | (35 ^ 229))) ^ ((((var_7 | 27) ^ (var_9 | 14))))));
    var_14 = ((((((var_0 >> (var_12 - 802002283123541910))) << (39 < var_0))) << (((var_8 > var_1) * (226 % 226)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((((229 >> (var_11 + 7798185358880542719))) < (((arr_1 [i_0]) >> (var_5 + 285006249)))));
        var_16 = (((var_1 || 1866855433) > ((((arr_1 [i_0]) < (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((((var_0 > 3018753547) << (((222 < (arr_3 [i_1])))))) << (((((((var_3 ^ -47) + 2147483647)) << (((237 > 35) - 1)))) - 2147483581))));
        var_17 = (((((26 * var_4) % ((212 << (54091 - 54085))))) <= ((((var_8 << (((arr_1 [i_1]) - 108)))) >> ((((arr_4 [i_1]) > var_8)))))));
        var_18 = (max(var_18, ((((((((var_11 + 9223372036854775807) << (arr_2 [i_1]))) >> (1 % 229))) <= (((244 << ((((32 << (29 - 15))) - 524272))))))))));
        var_19 = (((((var_2 | var_5) ^ (226 & 229))) < (((((var_5 + 2147483647) >> (-60 + 74))) % (((var_5 + 2147483647) << (((arr_2 [i_1]) - 1))))))));
    }
    #pragma endscop
}
