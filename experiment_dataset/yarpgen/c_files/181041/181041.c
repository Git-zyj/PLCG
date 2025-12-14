/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(min(((var_4 ? var_14 : var_6)), var_2))));
    var_16 = (min(((((max(var_11, var_10))) ? ((var_14 >> (-16301 + 16325))) : -var_14)), var_2));
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = -16313;
                var_18 = var_10;
            }
        }
    }
    #pragma endscop
}
