/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_17 = (max((((~var_12) ? ((max((arr_1 [i_0]), (arr_1 [i_0])))) : 9223372036854775807)), ((((var_1 ? (arr_1 [i_0]) : 349075424))))));
        var_18 &= (((57995 ^ 349075408) ? (9223372036854775807 >> 49) : (((1572278170 ? 280813198 : 1)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 -= ((!(arr_3 [i_1])));
        var_20 = (((((arr_3 [i_1]) - ((max(1, (arr_4 [i_1])))))) + 60134));
    }
    var_21 = 1;

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_9 [1] = ((((!((((arr_6 [i_2]) ^ 60992))))) ? (((arr_5 [i_2]) >> (arr_5 [11]))) : -var_2));
        var_22 = 60;
    }
    #pragma endscop
}
