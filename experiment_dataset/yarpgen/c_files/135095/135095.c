/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((((var_6 ? var_5 : var_10)) * var_2))), ((-((0 ? 9422617660146091761 : 606324320))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 = (min(var_15, (((-(((arr_0 [i_0]) ? 0 : 606324320)))))));
        var_16 *= ((2444650804265860083 ? 18446744073709551615 : 1484283632));
        var_17 = (arr_1 [i_0 + 1] [i_0 + 1]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [i_1] = (68719476735 - ((0 ? -1996709147 : 68719476735)));
            var_18 = (((arr_3 [i_0 - 1] [7]) ? (arr_2 [i_0]) : (arr_3 [i_1] [i_1])));
            var_19 = (max(var_19, (arr_0 [i_0])));
        }
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (~559739105);
        var_20 = (min(var_20, (arr_7 [6] [7])));
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        var_21 = min((((((max(21173, 255)))) * 281474976710400)), (arr_7 [i_3] [i_3]));

        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            arr_14 [i_3] [i_4] = (arr_10 [i_4 + 2] [i_3 + 1]);

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_22 = (0 % 8191);
                var_23 *= (((((0 ? -21173 : 0))) ? (min((arr_10 [i_3 - 1] [i_3 - 2]), 1)) : (((-21174 ? (arr_15 [i_3 - 1] [i_4] [i_4 + 3]) : (arr_11 [i_5]))))));
                var_24 = (max(var_24, (7049349496923641758 % 2)));
            }
            var_25 += (63 | 5971835463033306561);
            var_26 = min(-1, (min((4294967286 < 13929), ((721560087 + (arr_5 [i_4]))))));
        }
        var_27 = (max(var_27, (((!((max(-8191, (arr_12 [i_3 - 1])))))))));
    }
    var_28 ^= 3688642977;
    #pragma endscop
}
