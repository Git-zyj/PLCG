/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        var_10 = (min(var_10, (min((((863964073722262037 ? 53 : 1))), (((((max((arr_0 [i_0] [8]), 169)))) | (arr_1 [17])))))));
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_4;
        var_11 = ((!(((((4008892223443883125 ? var_0 : 19150)) << ((((1545973197 >> (var_3 - 1517226978))) - 94342)))))));
        var_12 = var_0;
    }
    for (int i_2 = 3; i_2 < 7;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((219441496 ? 53 : 203));
        var_13 = var_2;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_15 [i_2 + 4] = ((((((arr_3 [6] [6]) ? 45 : (max(var_5, (arr_5 [i_2])))))) ? 7119460933121086967 : ((((arr_2 [8]) + (arr_3 [8] [i_2 + 2]))))));
            arr_16 [i_3] = ((1 ? (((43707 ? 2058602189 : ((((arr_10 [i_2] [i_3]) > (arr_1 [i_2]))))))) : ((((min((arr_0 [i_2] [20]), (arr_2 [i_2])))) ? (arr_9 [i_2] [i_3]) : (arr_8 [i_2])))));
            var_14 = (((-37 + 2147483647) << (((arr_10 [i_2 - 2] [i_3]) - 20733))));
        }
        var_15 = ((((((-1 | var_0) ? (arr_13 [i_2]) : var_1))) ? (arr_3 [16] [i_2]) : (max(var_7, (arr_1 [21])))));
        var_16 = 7936;
    }
    var_17 = -3333401647592161592;

    /* vectorizable */
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = var_6;
        var_18 = 1;
        var_19 = (((123 << (((arr_2 [i_4]) - 45590)))) - ((var_4 ? (arr_17 [i_4 - 1]) : (arr_2 [i_4]))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_20 = (max(var_20, ((((((var_5 ? -7157312609784156045 : 1))) && 1740810978)))));
            var_21 = var_5;
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_22 = var_2;
            arr_24 [i_4 - 1] [i_6] = ((977847848 == (arr_0 [i_4 + 1] [i_6])));
            var_23 = 121;
            arr_25 [i_4] [i_6] = (arr_20 [i_6] [i_6] [i_4 - 1]);
        }
        var_24 = 3363300512;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_29 [i_7] = (arr_1 [i_7]);
        var_25 = ((var_0 ? (arr_20 [i_7] [i_7] [i_7]) : (arr_20 [i_7] [i_7] [i_7])));
    }
    var_26 = (((var_4 || var_6) && (((203 ? var_6 : 1)))));
    var_27 = var_7;
    #pragma endscop
}
