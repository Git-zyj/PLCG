/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 |= (((((((min((arr_2 [i_0] [i_0]), 16384))) ? -1 : 168357719255234990))) ? 16389 : (min((~168357719255234990), (arr_0 [i_0])))));
        var_21 = (arr_2 [i_0] [i_0]);
        var_22 = (((((-var_14 | (31850 * var_14)))) ? (arr_0 [i_0]) : (min((arr_2 [i_0] [i_0]), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 *= (min((min(var_5, (arr_5 [i_1]))), 8796093022204));
        var_24 &= 0;
        var_25 -= (((((~var_0) ? (((arr_4 [i_1] [i_1]) ? var_3 : (arr_3 [i_1]))) : ((max(168357719255234990, 49151))))) & (((((!14259012302923798213) >= ((var_12 + (arr_4 [i_1] [i_1])))))))));
        arr_6 [i_1] [i_1] = (min(var_8, (((((arr_5 [i_1]) ? var_3 : (arr_5 [i_1]))) << (-65535 + 65590)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_26 ^= 16388;
        var_27 = (min(var_27, (--0)));
    }
    var_28 |= (min((33680 && 23243), (max((8565 || var_6), (min(65535, 4187731770785753390))))));
    var_29 = (min(var_29, (((var_6 << (56357 & var_18))))));
    var_30 = (max(var_30, 0));
    #pragma endscop
}
