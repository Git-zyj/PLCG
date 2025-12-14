/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (max(var_4, ((0 ? 73 : ((max(8176, var_4)))))));
    var_12 = -3607953239298704061;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (min(var_13, 15346));
        arr_3 [i_0] [i_0] |= var_0;
        arr_4 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    #pragma endscop
}
