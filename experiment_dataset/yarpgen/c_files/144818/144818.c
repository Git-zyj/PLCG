/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-var_3 ? (max(-1978670564, var_5)) : (~var_6))) != (((((((var_12 ? var_10 : var_4))) <= var_11))))));
    var_15 = (min(var_15, (((~(max((((var_8 ? var_3 : 25))), ((var_1 ? 65491 : var_12)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((997606379 >> ((((min(var_11, 127))) - 102))));
                arr_4 [i_1] = ((!((!(((65515 ? var_13 : var_11)))))));
            }
        }
    }
    #pragma endscop
}
