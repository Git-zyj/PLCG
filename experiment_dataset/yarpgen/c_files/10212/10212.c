/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((6838 ? (((~2717022524) + (var_5 > 1577944756))) : -1));
    var_11 ^= var_6;
    var_12 = 127;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((var_8 ? ((~(((!(arr_2 [i_0])))))) : (((549747425280 >= ((((arr_2 [i_0]) < (arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((~(max((max(var_0, var_2)), -var_0))));
        var_14 = (min(var_7, (var_3 + 28)));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = ((-(var_9 / 57893)));
        arr_6 [i_1] = ((-5851915986774272067 == (((~(arr_4 [i_1] [i_1]))))));
        var_16 = (((var_9 ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))));
        var_17 = ((((min(var_9, var_3))) ? ((((arr_4 [i_1] [i_1]) && (arr_4 [i_1] [i_1])))) : -6824));
        var_18 += ((var_8 < (max(var_7, (arr_4 [18] [18])))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_19 = ((((((var_3 ? 6797 : var_9)))) ? (max(6796, var_0)) : (min((max(var_6, 3893066615)), (((1 ? (arr_8 [i_2 + 1] [i_2 - 2]) : 1)))))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_20 = (min(5851915986774272038, 25851));
                var_21 = var_1;
                var_22 = ((((((32755 ? var_0 : var_3) + 9223372036854775807)) >> (((max(var_9, var_0)) - 12125855062565851195)))));
                arr_16 [i_2] [i_3] [i_2] [i_4] = var_6;
            }
            var_23 = (arr_7 [i_2] [i_2]);
            arr_17 [i_2] [i_2] [i_2] = (-var_7 ? var_0 : (min(13557393038288129734, (arr_9 [i_2 + 1]))));

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_20 [3] [i_3] [15] [i_2] = (((max((arr_4 [i_3] [i_2 + 1]), -29566)) | (((var_8 * (!var_2))))));
                var_24 = (max(var_24, var_9));
                var_25 = (max(var_9, -var_9));
            }
        }
        var_26 = (!108);
    }
    #pragma endscop
}
