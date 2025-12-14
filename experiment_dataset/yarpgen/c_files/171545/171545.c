/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(var_0, -2098492707)));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 ^= min(1148417904979476480, (arr_2 [i_0]));
        arr_4 [i_0] = arr_2 [i_0];
        var_19 = ((((((arr_3 [i_0 + 1]) | (arr_3 [i_0 - 1])))) ? (arr_3 [i_0 + 1]) : ((~(arr_3 [i_0 - 1])))));
        var_20 = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((((arr_5 [i_1]) ? (min((-2147483647 - 1), (arr_5 [i_1]))) : -1148417904979476472)));
        arr_10 [i_1] [i_1] = 1148417904979476482;
    }
    #pragma endscop
}
