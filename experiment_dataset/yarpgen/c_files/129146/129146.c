/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((-var_14 ? ((257061785 ? var_3 : 1)) : (~var_6)));
        arr_3 [i_0] = ((194 ? ((((((var_9 ? var_17 : var_6))) ? var_15 : var_19))) : ((116 ? 7717719204071523656 : var_4))));
        var_20 &= ((max((min(var_12, var_2)), (((var_0 ? 62 : 1739946931))))));
    }
    var_21 = ((((~((var_15 ? 4037905491 : var_8))))) ? ((2401971688 ? 1893812221 : 4037905483)) : (((((257061807 ? 257061806 : 205))) ? (!var_18) : ((1892995607 ? var_18 : 2401971688)))));
    #pragma endscop
}
