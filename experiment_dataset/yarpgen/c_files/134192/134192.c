/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((70368744177663 ? var_11 : var_5))) ? ((8371876270199184451 ? var_14 : 32748)) : var_15)) - var_0));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_11;
        arr_3 [i_0] = (min(((((18446673704965373953 - (arr_0 [i_0]))) - ((-28714 ? 0 : 4406097790273824958)))), 4887356446206072768));
        arr_4 [i_0] = var_10;
    }
    #pragma endscop
}
