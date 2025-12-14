/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [20] [i_0]);
        var_16 += ((~((((arr_0 [i_0] [i_0 + 1]) ? (arr_0 [i_0] [i_0]) : 15226675195382785072)))));
    }
    var_17 = ((((min((var_5 | 4113092040), var_10))) ? ((((var_8 + 4113092056) << (var_15 != 154)))) : 6145422177135819238));
    #pragma endscop
}
