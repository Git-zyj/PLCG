/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, -125));
        var_12 *= (((((max(6524874297310426493, 4294967284)))) ? (max((arr_2 [i_0 + 1]), ((0 ? var_1 : var_1)))) : (min(var_7, (((arr_0 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : 1))))));
        var_13 *= (((((max(9223372036854775807, 9162323889198072362)))) ? ((((max(-14, 76))) ? ((2 ? (arr_2 [i_0]) : 1152921487426977792)) : (max(1, 9223372036854775807)))) : (arr_1 [i_0 - 2])));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = 13;
        var_14 = (max(((-162 ? 18851 : (min(1152921487426977792, (arr_7 [i_1]))))), (!var_5)));
        arr_9 [i_1] = (max(120, (arr_6 [i_1])));
        var_15 = ((2147483647 ? (-120 * 180) : (-121 & 1667814941)));
    }
    var_16 *= -9223372036854775807;
    #pragma endscop
}
