/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_3;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((var_3 ? ((666084529 ? var_10 : ((15117048725593305244 ? (arr_0 [i_0]) : 666084514)))) : (((((1 && (arr_1 [i_0])))) | 666084505))));
        arr_3 [i_0] = 255;
        var_13 = ((1666769253 ? (arr_1 [i_0]) : ((((((49993 ? 0 : (arr_1 [i_0])))) ? ((1433426642 ? 17564 : -91)) : var_8)))));
    }
    #pragma endscop
}
