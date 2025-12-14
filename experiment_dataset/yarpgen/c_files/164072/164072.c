/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (max(196, 24));
        arr_3 [i_0] [i_0] = (((((1073737728 ? 24 : 562949953421311))) ? ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : var_9));
        arr_4 [i_0] [i_0] = (4294967272 < 1612166516);
        arr_5 [i_0] = (max(((+((var_3 ? (arr_0 [i_0] [i_0]) : var_3)))), ((max((min((arr_1 [i_0]), var_2)), ((min(var_0, var_0))))))));
    }
    var_10 = (var_8 & var_8);
    var_11 = ((~(max(var_4, var_7))));
    #pragma endscop
}
