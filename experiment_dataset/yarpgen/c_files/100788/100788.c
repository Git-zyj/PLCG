/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_1 [i_0]))) + var_3));
                var_20 = (((((~(arr_2 [i_0])))) ? ((min(var_10, (arr_4 [0] [i_0 + 4] [i_0])))) : ((((var_2 ? var_7 : (arr_3 [i_0] [i_0 + 4]))) / (((var_5 ? 50 : var_11)))))));
            }
        }
    }
    var_21 = 253764123;
    var_22 = ((var_1 ? var_13 : var_16));
    #pragma endscop
}
