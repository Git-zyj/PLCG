/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(min((min(4116972800, var_5)), var_12))));
    var_17 *= 4032;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((18446744073709551615 / (arr_1 [i_0] [i_0])));
        var_18 = (max(var_18, 2299996135066227683));
        var_19 = (max(var_19, (101 <= var_5)));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_20 = 253593592;
        var_21 = ((((((arr_3 [i_1]) >= (((!(arr_3 [i_1]))))))) * (arr_1 [i_1] [i_1 + 1])));
        arr_5 [i_1 - 1] [i_1 - 1] = ((((min(213, (arr_3 [i_1 + 1])))) ? (((((arr_1 [i_1] [i_1]) / -1894342008)) >> (var_10 - 3836857630))) : ((((!(arr_1 [i_1] [i_1])))))));
        var_22 = (min(((((16146747938643323933 ? (arr_4 [7]) : var_15)))), ((0 ? var_9 : (arr_1 [i_1 + 1] [i_1 - 1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 = 93;
        arr_9 [i_2] [i_2] = ((1 ? (((max(0, 1)) ? ((var_8 ? (arr_7 [i_2]) : (arr_7 [i_2]))) : var_4)) : (((((0 != (arr_7 [i_2])))) << (28499 - 28489)))));
        var_24 |= (((~(arr_6 [i_2] [1]))));
        var_25 = (min(var_7, ((((min((arr_8 [i_2]), (arr_7 [i_2])))) ? (var_11 & var_2) : ((1655801742 ? var_8 : 1))))));
        var_26 = (min(var_26, (((((15 * (arr_8 [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_27 = (min((min(3894865201, (min(var_0, var_7)))), (((4 ? 52218 : 0)))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_28 += (!((((arr_14 [i_3]) ? (min((arr_1 [i_4] [i_3]), (arr_16 [i_4]))) : (arr_14 [i_3])))));
            var_29 = var_6;
        }
    }
    #pragma endscop
}
