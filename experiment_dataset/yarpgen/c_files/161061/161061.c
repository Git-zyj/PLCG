/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = ((~((~((~(arr_3 [i_0] [i_1 + 2] [i_0])))))));
                var_17 = 127;
                var_18 = (max(4611683819404132352, ((((arr_1 [i_0 - 3]) ? var_4 : (arr_1 [i_0 - 2]))))));
            }
        }
    }
    var_19 = ((var_3 ? (((var_8 ? -1 : var_4))) : var_14));
    var_20 = ((-(min(var_13, (~-1)))));
    #pragma endscop
}
