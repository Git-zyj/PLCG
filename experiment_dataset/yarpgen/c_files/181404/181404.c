/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_16);
    var_18 -= (((max((var_1 || var_10), (43175 || 1401764854))) ? (((((var_11 ? var_4 : var_13))) ? ((1 ? var_7 : var_0)) : (((43146 ? var_8 : var_16))))) : var_15));
    var_19 = (max((min(var_9, (var_11 - 1208629797))), var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 -= (min(((1 | (arr_0 [i_0] [i_0]))), ((~(arr_0 [i_0] [i_0])))));
        var_21 = (4281575613 <= 13391682);
        var_22 -= ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))))));
        var_23 = ((-31 ? (((arr_0 [i_0] [i_0]) ^ (arr_1 [i_0]))) : ((8444249301319680 ? (((max((arr_1 [i_0]), (arr_1 [i_0]))))) : (1631067095 & var_7)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_24 = (((!22361) - (((arr_0 [i_1] [i_1]) ^ (arr_0 [i_1] [i_1])))));
        var_25 -= ((1346987620 ? (((246 ? (arr_3 [i_1]) : 43175))) : (((arr_1 [i_1]) ? 140737484161024 : 902801888))));
        var_26 = (((min((arr_1 [i_1]), (arr_1 [i_1])))) ? (arr_1 [i_1]) : (1125899906842623 & 1985036428));
        var_27 -= ((!((((!4294967295) ? (((((arr_3 [i_1]) >= var_8)))) : (9754252605927483155 << 1))))));
    }
    #pragma endscop
}
