/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_0, -42));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 *= -18045;
        var_12 *= ((((max(250128976137104436, (24 || var_6)))) ? (((!(((var_1 ? 1811102359 : 46575)))))) : (var_0 || var_7)));
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) ? (min((var_0 * 8589934591), -var_5)) : ((var_2 ? var_5 : ((13 ? 16 : (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] |= (((((!9223372036854775807) == 103)) && (((0 ? ((4146415687 ? 14219653176873350277 : var_0)) : var_4)))));
        arr_6 [15] = (0 + var_6);
        var_13 &= (18446744073709551610 % 65511);
        arr_7 [i_1] = ((var_4 ? (((3 >> (!4244062441)))) : (min((((var_0 ? var_6 : 49725))), 8902235544572015107))));
        arr_8 [i_1] [i_1] &= ((~(((((~(-127 - 1)))) ? var_7 : -99))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((((arr_4 [i_2] [i_2]) <= (arr_4 [i_2] [i_2]))));
        arr_13 [11] = (arr_1 [i_2] [i_2]);
    }
    var_14 |= -var_1;
    var_15 = ((!(17043840578456066786 < 2)));
    var_16 += (((var_9 + 2147483647) << (((((1 && (((var_5 ? 4294967276 : -8978419487308056955)))))) - 1))));
    #pragma endscop
}
