/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        var_20 = 6027;
        var_21 = ((-17 ? ((((!(arr_1 [i_0]))))) : (((arr_0 [i_0]) / (arr_0 [i_0])))));
    }
    var_22 = ((!(-29346 % -5448057293027178080)));
    #pragma endscop
}
