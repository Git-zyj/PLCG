/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((!((((arr_0 [i_0]) * (arr_0 [0]))))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0 + 4]);
        arr_4 [i_0 + 2] [8] = ((37008 == (arr_0 [i_0 + 4])));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_17 += ((((((arr_5 [i_1 + 1]) ? var_2 : (arr_5 [i_1 - 1])))) | ((778215800884467810 * (1952544481 + 17668528272825083806)))));
        var_18 &= ((((((!((((arr_6 [i_1]) - (arr_5 [i_1])))))))) + (min(8023605942561424598, ((((arr_5 [i_1 - 1]) % var_11)))))));
        var_19 = (min(var_19, ((((((min(var_0, (arr_6 [i_1])))) && (((var_12 ? 54075 : (arr_6 [i_1]))))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 -= ((2727910678 >= (arr_7 [i_2])));
        arr_9 [15] = (78 / 15103685480758666263);
        var_21 &= (((arr_5 [i_2]) ? (arr_8 [i_2]) : -97));
        arr_10 [i_2] [9] = ((4503599627370492 ^ (arr_6 [i_2])));
        var_22 *= (((arr_7 [i_2]) ? 7115123588732069100 : 0));
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        var_23 += 65535;
        arr_13 [i_3] = (((min((((-74 ? 2727910695 : (arr_12 [i_3])))), (min(-2, var_2)))) - (((40131 << (((((arr_11 [i_3] [10]) ? (arr_12 [i_3]) : 778215800884467810)) - 18446744073709551590)))))));
        var_24 += ((max(65518, ((1199583005 ? var_11 : (arr_11 [4] [4]))))) % var_16);
    }
    var_25 = var_14;
    #pragma endscop
}
