/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((1121909117 ? -7728431473489190991 : (!var_4)))) ? -125 : ((var_11 ? var_13 : (((var_10 >> (45480 - 45474))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 ^= (((arr_1 [i_0]) ? (arr_1 [i_0]) : 9223372036854775807));
        var_17 = var_1;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = ((((var_5 >> (31744 - 31716))) * ((((!(arr_3 [i_1])))))));
        arr_5 [i_1] [i_1] = (min(((8404 ? 62926 : 6335012544041067819)), (max(7728431473489190990, -1121909117))));

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = (21125 ? (((!1559316445) ^ (arr_7 [i_2 + 1]))) : (((((arr_1 [i_2 - 2]) && 4294967295)))));
            var_19 = (~((-8912181888083016207 | ((max(-1736109370, (arr_1 [i_1])))))));
            arr_9 [i_2] [i_2 - 1] = (!-8712434178656307192);
            var_20 = (max(var_20, ((((min(-58, -1121909122)))))));
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_21 = ((3319438197 >> (50269 - 83)));
            var_22 += (15292 - 147);
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            arr_16 [i_1] [i_4] [4] = (((2 / (arr_11 [i_1] [i_4 - 1] [i_4]))));
            var_23 = (max(var_23, ((((arr_1 [i_4]) ? ((-4944795509050785677 ? 2422044232 : 29738)) : ((2513969739 ? 2228742218 : -1)))))));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_20 [i_1] [i_5] = (7728431473489191003 * 0);
            var_24 = (max(var_24, 2066225078));
            arr_21 [i_1] = 56749;
            var_25 ^= ((!5) ? ((min(-4, 64))) : ((4 / (arr_4 [i_1]))));
        }
        arr_22 [i_1] [7] = ((739425154 ? ((((232 / 1559316445) ? 100527681 : 3))) : ((5201795402483295783 ? -480550635142451602 : 0))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_26 = ((-(arr_2 [i_6])));
        var_27 = (max(var_27, -308411822));
        var_28 = (min(var_28, ((min(((((arr_24 [i_6] [i_6]) && (arr_24 [8] [i_6])))), (-1390670629719853403 - var_5))))));
        arr_25 [i_6] [i_6] = (arr_24 [i_6] [i_6]);
    }
    #pragma endscop
}
