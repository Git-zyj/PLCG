/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1 < var_11);
    var_19 = ((~((~(401764502 * 0)))));
    var_20 |= (!var_11);

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((-(1 << 1)));
        arr_4 [i_0] [i_0 - 2] = var_10;
    }
    var_21 = ((53 >= (((1 != 594007044) ? (((var_3 ? var_4 : var_5))) : ((var_16 ? 1167434416 : var_8))))));
    #pragma endscop
}
