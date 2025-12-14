/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 -= ((+(((var_7 <= 17163578719787045909) * (12 && 0)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (min((min(1154227183, (((var_11 && (arr_0 [i_0])))))), -var_1));
        arr_4 [i_0] = ((1 ? ((56 ^ ((min(var_6, 236))))) : (-2147483647 + 65408)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((~(arr_2 [i_1 - 1] [0])));
        var_15 = (((arr_0 [i_1]) <= 17163578719787045909));
    }
    var_16 = (+(((3050 / -8609058914052113825) - ((min(var_8, 22))))));
    var_17 = -var_9;
    #pragma endscop
}
