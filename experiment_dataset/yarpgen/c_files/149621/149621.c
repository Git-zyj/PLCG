/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = ((!(((-1 ? 64 : 3801262075)))));
        var_19 = ((min(var_11, var_12)));
        var_20 = (min(var_20, 15868));
        arr_2 [14] [i_0] = (min(1, 50));
    }
    var_21 = var_3;
    var_22 = (min(var_10, (!10328667673621468091)));
    var_23 = (max(-57, (min((~1), 8))));
    #pragma endscop
}
