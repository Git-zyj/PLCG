/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_2 [i_0]) ? 8 : 3724025298))) ? 1 : ((var_19 ? 2048 : 1279789057637770759))));
        var_20 = ((240 ? 248 : 1056964608));
    }
    var_21 = 11084827466007096915;
    var_22 = ((min(((3238002688 ? 4432 : var_18)), ((min(var_17, var_1))))));
    #pragma endscop
}
