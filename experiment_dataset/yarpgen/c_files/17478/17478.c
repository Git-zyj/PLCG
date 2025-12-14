/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 ^= 1706722081;
        var_19 = min(2588245230, 1706722076);
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = max((max((~2588245220), var_12)), ((((-35 + 2147483647) >> (((!(arr_4 [6]))))))));
        var_20 -= (arr_1 [4]);
        arr_6 [i_1] [i_1] |= var_6;
    }
    var_21 = var_13;
    var_22 = (~(~2095935964));
    #pragma endscop
}
