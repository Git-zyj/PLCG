/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (min(var_18, ((max(var_1, 2147483647)))));
        var_19 = ((((arr_1 [i_0]) ? 2804075616 : 255)));
        var_20 = (arr_1 [i_0]);
    }
    var_21 = (max(((var_2 ? ((4294967295 ? 116 : 15922071739204904686)) : 1490891679)), 4294967295));
    #pragma endscop
}
