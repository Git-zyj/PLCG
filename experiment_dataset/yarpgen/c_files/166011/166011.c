/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((0 ? (((min((!11033649358392660258), (max(var_13, var_13)))))) : var_10));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (((min(var_16, (arr_1 [i_0] [i_0]))) < ((((arr_2 [i_0] [6]) ? (!0) : -64502)))));
        var_21 = ((-17 ? 18156 : 0));
        var_22 &= 0;
        var_23 = ((!18156) ^ (((arr_2 [i_0] [i_0]) ? var_7 : var_0)));
        arr_4 [i_0] = ((((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((-1 ? (-15446 < -17618) : -115)))));
    }
    var_24 += var_16;
    #pragma endscop
}
