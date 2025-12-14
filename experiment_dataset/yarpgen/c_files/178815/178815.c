/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (min(((((min(var_9, var_1))) ? var_11 : (-509435587 / 18446744073709551615))), (min(((10398306676458417368 ? 8048437397251134254 : 21)), ((var_3 ? 163 : 8048437397251134255))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 += (((((~(arr_1 [i_0] [10])))) ? ((0 ? (arr_1 [i_0] [i_0]) : (arr_1 [1] [i_0]))) : (arr_1 [i_0] [i_0])));
        var_15 = (1057022945 % 10398306676458417371);
    }
    #pragma endscop
}
