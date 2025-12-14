/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_13 -= (min(((min(-5806014282532410645, var_6))), var_0));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    var_14 = -6335519453554002534;
    #pragma endscop
}
