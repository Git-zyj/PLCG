/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((~((min(var_15, 32259))))));
        arr_3 [i_0] [i_0] = -441062032895044657;
        arr_4 [i_0] = -1;
        var_18 += ((~((min((((-1 <= (arr_0 [i_0])))), 18891)))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((((max(var_12, 41080)) - ((191 / (arr_5 [i_1 + 2]))))))));
        var_20 &= (((((arr_0 [i_1 - 1]) && (arr_0 [i_1 + 1]))) ? (max(-1885709572, (arr_0 [i_1 - 1]))) : (min(2147483647, (arr_0 [i_1 + 1])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (((-((2147483647 ? 0 : var_9)))))));
        var_22 = (209 > -2147483647);
        arr_10 [i_2] [i_2] = ((+(((-9 + 9223372036854775807) << (240 - 240)))));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_23 = arr_6 [i_3];
        var_24 = (max(var_24, (0 != 42)));
    }
    var_25 = (max((min(65529, (min(var_10, 65)))), (((50 << (var_13 - 216))))));
    #pragma endscop
}
