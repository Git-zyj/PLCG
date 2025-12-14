/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((var_5 != (((var_7 == var_15) ? (~53) : var_6))));
    var_18 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_1] = 13005;
            var_19 = ((var_7 ? ((-13005 ? var_5 : 12981)) : (var_3 && 53)));
            var_20 |= var_9;
            arr_6 [i_1] [i_1] [i_1] = ((var_8 && (((var_15 >> (var_4 - 5914837654379132408))))));
            var_21 = (((((-24839 ? var_9 : (arr_3 [i_0] [9])))) / var_15));
        }
        arr_7 [i_0] [i_0] = ((((((min(3101335801, 71))) ? (min(8423458949380910850, var_16)) : ((var_12 ? var_15 : -4546080911360991374)))) <= var_4));
        var_22 = var_6;
        var_23 = (max((arr_2 [i_0] [i_0]), -var_15));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (min((var_10 < var_15), ((+(min((arr_9 [i_2] [i_2]), var_14))))))));
        var_25 = (min(var_25, (((3101335788 ? 452251930 : 0)))));
        var_26 = (((((((((arr_8 [i_2] [15]) < 6354639605127238931)) ? ((0 ? -5681 : -1823905590)) : var_6)) + 2147483647)) << (((min((min(var_15, (arr_0 [i_2]))), ((112 ? 14499552648660995845 : var_13)))) - 4326633763776844587))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_27 = ((11002 ? ((var_5 ? 0 : var_12)) : var_1));
            arr_15 [i_2] [i_2] = ((((-29564 ? -70 : 1193631507)) + (((-1372102476516002653 ? -125 : -14445)))));
            arr_16 [14] [i_3] = (arr_8 [i_2] [i_3]);
        }
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_28 ^= (((((arr_18 [i_4 + 1]) <= (arr_18 [i_4 - 1]))) ? (((arr_18 [i_4 - 1]) ? (arr_18 [i_4 + 1]) : (arr_18 [i_4 + 1]))) : (((min(-113, -72))))));
        var_29 = var_15;
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        arr_24 [i_5] [i_5] = ((((((arr_22 [i_5 - 1]) != 14499552648660995845))) * (((18248432694532341253 ? var_11 : 26678)))));
        arr_25 [i_5] = (1 > ((((min(-27662, 15488038997886040164))) ? 18446744073709551601 : ((14519 ? 7761480927409687705 : -24)))));
    }
    var_30 *= (((~3101335789) ? var_10 : (((((-27 + 2147483647) << var_10)) ^ var_14))));
    var_31 = (min(0, var_1));
    #pragma endscop
}
