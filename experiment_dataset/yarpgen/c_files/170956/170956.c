/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [7] = (max((max((15 < 255), ((2188467709781779034 ? 126 : (arr_1 [0]))))), ((min((arr_0 [i_0]), (arr_0 [2]))))));
        arr_3 [i_0] = (((arr_0 [i_0]) == (0 | 2147483647)));
        var_14 = arr_0 [i_0];
    }
    var_15 = (max((+-2036328093), -32761));
    #pragma endscop
}
