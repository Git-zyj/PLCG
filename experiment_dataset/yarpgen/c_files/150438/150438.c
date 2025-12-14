/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (((~19) ? var_13 : ((30149 ? 0 : (7454051813922500588 <= 19)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = ((~236) ? (((var_4 ? var_12 : var_11))) : 2598578175);
            var_20 = (min(var_20, var_4));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 *= ((((min(234, var_6))) ? (((1 >= var_10) ? (((595695371 ? var_0 : var_12))) : (max(595695371, var_14)))) : var_1));
            var_22 = (min(var_22, var_1));
            arr_10 [14] = 3699271912;
        }
    }
    #pragma endscop
}
