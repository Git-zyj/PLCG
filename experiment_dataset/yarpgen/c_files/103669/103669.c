/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (240 / 1);
        arr_5 [i_0] = min((var_13 & 12929223293778713596), (((14677 ? 9223372036854775807 : 0))));
        var_16 = ((-(((arr_0 [i_0 + 2]) ? var_0 : (arr_0 [i_0 + 2])))));
        var_17 = (min(((((-32767 - 1) ? (arr_3 [i_0 - 2]) : 53664))), var_2));
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 *= (max(3, ((1 ? (arr_8 [8]) : -7930560517452103937))));
        arr_9 [i_1] [i_1] = ((-1672765366 ? 18446744073709551615 : ((min((arr_8 [i_1]), var_10)))));
    }
    var_19 = max(var_1, var_11);
    #pragma endscop
}
