/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (8 <= 121);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(var_15, (((((!((max((arr_1 [i_0]), var_0))))) || ((((((arr_2 [i_0]) - var_0)) - var_11))))))));
        var_16 = ((~(~12288)));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_17 = (min(var_17, (((~(((arr_6 [i_2]) ? var_8 : (arr_6 [i_2]))))))));
            var_18 = (max(var_18, var_5));
            var_19 = (arr_0 [i_1 - 1]);
            var_20 = (max(var_20, (arr_3 [i_1 - 3] [i_2])));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_21 = (min(var_21, ((((arr_5 [i_1 - 4]) ? 12551741455203090013 : (arr_4 [i_1] [i_1]))))));
            var_22 = (((((2525842711 || (arr_1 [i_1])))) | 118));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_23 = (arr_7 [i_1 - 3] [i_1 + 1]);
            arr_14 [i_1] [i_4] = var_9;
            var_24 = (((arr_9 [i_1 - 2] [i_1 + 1]) ? 62809 : (arr_9 [i_1 - 4] [i_1 + 2])));
        }
        var_25 = (~-14);
        var_26 = ((+((12551741455203090013 ? (arr_12 [i_1] [i_1]) : var_10))));
        var_27 = (max(var_27, (878598350582416994 <= -3564332538173865484)));
    }
    var_28 |= (var_7 * var_4);
    var_29 = var_0;

    /* vectorizable */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_30 = (((arr_16 [i_5 - 2] [i_5 + 2]) * (arr_17 [i_5 - 1] [17])));

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_31 = (!var_1);
            var_32 ^= 144;
        }
        arr_21 [i_5] = (((((var_12 ? var_7 : var_4))) ? (arr_17 [i_5 + 1] [i_5]) : ((159 ? 2332172645 : 4294967295))));
        var_33 = (max(var_33, 12551741455203090037));
    }
    #pragma endscop
}
