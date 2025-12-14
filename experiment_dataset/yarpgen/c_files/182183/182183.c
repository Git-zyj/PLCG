/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_0 ? 13835058055282163712 : 262143))) ? (max(13835058055282163721, var_12)) : ((-1 ? 2147483647 : 13835058055282163712))))) ? ((max(((max(var_14, 1))), (((var_9 + 2147483647) >> (var_9 + 7325)))))) : (((((262136 ? var_7 : var_10))) ? (((192 ? var_6 : var_9))) : 4))));
    var_16 = ((0 ? (max((~var_13), -var_10)) : (var_14 == var_14)));
    var_17 = var_13;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_18 &= 1572864;
            var_19 = (((arr_0 [i_0]) ? (~4611686018427387916) : (var_5 != 1)));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_20 = (((arr_0 [i_0]) << (((arr_3 [i_0 + 2] [i_0 + 3] [8]) - 10330550123824988924))));
            arr_8 [i_0] = ((((((arr_7 [i_0] [i_0] [i_2]) ? var_1 : 180))) > ((var_4 ? -4 : (arr_5 [i_0])))));
            arr_9 [i_0] [i_0 + 2] [i_0] = (arr_6 [i_0] [i_0]);
            arr_10 [13] [i_0] [i_2] = (((arr_6 [i_0] [i_0]) ? var_6 : (arr_1 [i_0])));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_21 = (arr_0 [i_0]);
            arr_13 [i_0] = ((arr_11 [i_0] [i_3] [i_0]) != (arr_3 [i_0] [7] [i_0]));
            arr_14 [12] [i_0] = arr_11 [i_0 + 2] [i_0 - 1] [i_0];
            var_22 = (-1 / 75);
        }
        arr_15 [i_0] = -var_14;
        var_23 = ((7 ? ((var_3 ? (arr_12 [i_0 + 1] [i_0 + 1] [i_0]) : var_12)) : (arr_0 [i_0])));
    }
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        arr_18 [i_4] = ((4611686018427387904 ? 18446744073709551615 : 4611686018427387904));
        var_24 = (max((arr_16 [i_4 + 1]), ((((min(var_9, var_1))) ? 15 : (arr_17 [i_4])))));
        var_25 = (max((((1 > 9223372028264841216) ? (((arr_16 [i_4]) ? 1 : -12)) : (arr_16 [i_4 - 4]))), ((((arr_16 [i_4 - 2]) >> ((((var_3 >> (((arr_17 [i_4]) + 2857391576569789738)))) - 963937387)))))));
    }
    #pragma endscop
}
