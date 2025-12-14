/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((8 >> 8) & var_14))) ? ((~((9223372036854775807 ? 8 : 65527)))) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [16] [i_1 + 1] |= 35203;
                var_18 = (min(var_18, (((~(((!((min(1, 10298)))))))))));
            }
        }
    }
    var_19 |= -var_4;
    #pragma endscop
}
