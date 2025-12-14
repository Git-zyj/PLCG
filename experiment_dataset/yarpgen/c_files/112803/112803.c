/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (~23214);
    var_20 = var_0;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0 - 1]) ? ((((~var_17) | (arr_0 [21])))) : (max(5924, 6002282599496333802))));
        var_22 += (max(18389447348662203000, -5938));
        arr_3 [i_0] [i_0] = ((((min((arr_0 [3]), (((arr_1 [i_0]) + (arr_2 [i_0])))))) ? (((-5925 ? 13 : 0))) : var_5));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_23 = 1;
        var_24 = (min(var_24, var_9));
    }
    #pragma endscop
}
