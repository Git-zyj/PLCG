/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= 0;
        var_11 = (max(68, ((var_8 / ((-68 ? 18371651068895763988 : 68))))));
        var_12 = ((((min((!7726288408382149745), ((var_5 << (((((arr_0 [i_0] [i_0]) + 152)) - 22))))))) ? (arr_2 [i_0]) : (((~(arr_2 [i_0]))))));
    }
    var_13 = var_6;
    var_14 += (var_3 > var_6);
    #pragma endscop
}
