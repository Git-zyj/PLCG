/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(-32, ((var_12 << (-42 + 54))))) < var_8));
    var_17 = (max(var_17, 15989));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_18 = 44;
        arr_2 [i_0] = (((((arr_1 [i_0 + 2]) ? var_7 : (arr_1 [i_0 - 3]))) & (((-(arr_1 [i_0 - 2]))))));
        var_19 = (arr_0 [i_0]);
    }
    #pragma endscop
}
