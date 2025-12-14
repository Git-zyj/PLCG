/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(((22293 < -6995310373232598227) >> (var_7 + 3971933669686249436)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_1 [7] [i_0 - 1]), var_7));
        arr_3 [i_0] = ((((!(((var_3 ? (arr_1 [i_0] [10]) : 43242))))) ? ((max(var_4, (((3 > (arr_1 [i_0 + 2] [10]))))))) : (~var_5)));
    }
    var_16 = ((min(0, -100)));
    #pragma endscop
}
