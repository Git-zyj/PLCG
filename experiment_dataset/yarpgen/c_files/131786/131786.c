/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [1]);
        var_13 ^= (max((arr_0 [i_0]), (arr_0 [i_0])));
        var_14 = (((arr_1 [2]) ? var_10 : (31010 <= 24671)));
    }
    var_15 -= ((((((var_5 <= 7879565233112198679) != (((-10843 + 2147483647) << (var_7 - 4138468530)))))) << ((((max(var_12, var_12))) - 55))));
    var_16 *= (var_12 || var_11);
    #pragma endscop
}
