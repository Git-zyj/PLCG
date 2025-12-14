/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0]) == (arr_1 [i_0]));
        var_11 += ((105822741240004824 ? 8773 : 56734));
        arr_3 [i_0] = (min((arr_0 [i_0] [i_0]), (min((arr_1 [i_0]), (!var_0)))));
    }
    var_12 = ((((~(min(var_9, var_3)))) & (var_2 | 56752)));
    var_13 = -8965;
    #pragma endscop
}
