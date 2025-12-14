/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((~var_8) + 2147483647)) << (var_6 - 3902787889476020537)));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = (((((arr_1 [i_0] [i_0 + 1]) & var_5)) | ((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))))));
        var_17 |= ((((~(arr_1 [2] [i_0 + 1]))) + (255 + 62)));
        arr_2 [i_0] = 5677827504337138334;
        var_18 = (max(((((arr_0 [i_0 - 1]) ^ 35637))), ((((var_13 ? 255 : var_11)) ^ (35623 & -263612637)))));
        arr_3 [4] |= 3098837078;
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_19 = (9358994151099478316 ^ 8266371409882325117);
        var_20 ^= (max(4294967295, -263612616));
    }
    var_21 ^= var_5;
    var_22 |= ((((max((((var_10 ? 29898 : var_7))), ((35649 ? var_9 : -8266371409882325127))))) ? (1 | -8266371409882325118) : 263612637));
    var_23 = (((((var_0 ? var_0 : 1))) ? (((~-263612653) ? var_11 : (((max(7, var_4)))))) : (~var_4)));
    #pragma endscop
}
