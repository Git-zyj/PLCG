/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((-var_8 ? (!1040384) : -var_7));
        arr_3 [i_0] = (!-1);
    }
    var_17 = (((~(~141863388262170624))));
    var_18 = ((-(min(((min(64, var_6))), ((64 ? var_12 : var_4))))));
    var_19 = (max((~199), (max((~var_6), -var_8))));
    var_20 = 195;
    #pragma endscop
}
