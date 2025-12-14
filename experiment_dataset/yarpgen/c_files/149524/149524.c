/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (((((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [17]))) > (((arr_1 [22] [i_0]) & (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = 197;
    }

    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        var_18 = ((min((arr_4 [i_1 - 4]), ((min(8177, 44))))) >= ((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 2])))));
        var_19 = 262136;
        var_20 *= (!13945190071293336867);
    }
    var_21 *= var_3;
    #pragma endscop
}
