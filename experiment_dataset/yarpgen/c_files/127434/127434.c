/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(-var_5, ((((min(var_8, -1309305516921393891))) ? var_0 : (max(var_15, 3715668598)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 1] = 7209138530906636028;
        var_18 ^= 1;
        var_19 = ((((min((arr_1 [i_0 + 1]), var_11))) != ((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
        var_20 = ((-((min((arr_0 [i_0 + 1] [2]), var_16)))));
    }
    #pragma endscop
}
