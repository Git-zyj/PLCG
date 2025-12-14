/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(2147483647, -2147483616));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 ^= (((((min(var_13, var_8))) ? -var_19 : (min((arr_1 [i_0]), var_15)))));
        var_22 = (((arr_1 [i_0]) - (arr_1 [i_0])));
        arr_2 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_23 = (((min((arr_6 [i_1]), (arr_6 [i_1]))) | (arr_6 [i_1])));
        var_24 = (arr_6 [i_1]);

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_25 *= var_12;
            arr_9 [6] [i_2] = ((((max(((var_8 << (((arr_6 [i_1]) - 4938742955031581705)))), var_9))) ? (max((arr_3 [i_1] [i_2]), (min(12218278809698257281, var_16)))) : (arr_6 [i_1])));
            var_26 &= (min(1, var_13));
            var_27 = (arr_7 [18]);
            var_28 = ((((((min((arr_3 [i_1] [i_2]), var_7))) + 2147483647)) >> (((!(((21 ? var_17 : (arr_8 [1] [i_2] [i_2])))))))));
        }

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_29 = ((~(((((~(arr_11 [i_3])))) ? 1 : 12218278809698257284))));
            var_30 = var_8;
            var_31 *= (((((min(var_5, (arr_8 [i_1] [0] [i_3]))))) > (((arr_4 [i_3]) + (arr_4 [i_3])))));
            var_32 = (~var_4);
        }
        var_33 = (max(var_33, (((3602071513164358528 ? 0 : (14342 <= 2147483610))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_14 [i_4] = (min(-1814588965, ((((((min((arr_11 [i_4]), var_13))) + 2147483647)) >> (arr_10 [i_4] [i_4])))));

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_17 [i_4] [i_4] [i_5] = ((((((var_3 | 1) << (var_15 + 48)))) ? (arr_0 [i_5] [i_4]) : (!var_17)));
            arr_18 [i_4] [i_4] [i_4] = (arr_13 [8]);
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_34 += ((var_8 ? var_4 : (((arr_7 [i_4]) ? var_11 : (arr_20 [i_4] [i_4] [i_4])))));
            var_35 |= (arr_12 [8] [i_6 - 2]);
            var_36 = (~((var_8 ? (arr_12 [i_4] [i_4]) : 6014741974627604095)));
        }
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            arr_24 [2] = 12218278809698257281;
            var_37 -= (max((((max(var_10, (arr_0 [i_4] [i_7 - 2]))))), var_14));
        }
        var_38 = (min(var_38, 347647720));
        var_39 &= ((max((arr_4 [i_4]), (arr_4 [i_4]))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_30 [i_8] [i_9] = ((~(((2147483647 && (arr_3 [i_8] [1]))))));
            var_40 = ((arr_28 [7] [i_8] [i_9]) ? 1924094180 : (min((~86), (arr_7 [0]))));
        }
        var_41 = (min(var_41, ((min(((((min(9723, -2147483606))) ? 1 : (arr_26 [i_8]))), ((1 << ((((1 << (951373911 - 951373906))) - 4)))))))));
        var_42 = (((!(-2147483647 - 1))));
    }
    var_43 = (((((244 ? 40 : (1 - 1)))) ? var_11 : var_9));
    #pragma endscop
}
