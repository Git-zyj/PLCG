/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((-(var_17 < var_16)));
                var_21 += (((min(116, (arr_4 [i_0] [i_0] [i_0]))) == var_11));
                var_22 = (max(var_22, 18446744073709551602));
            }
        }
    }
    var_23 &= var_16;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                var_24 = ((((var_14 + (arr_9 [i_2] [i_2] [i_3 + 1])))) ? (arr_6 [i_3 + 1] [i_3]) : (((var_2 ? var_12 : 107))));
                var_25 = ((((max(213, var_6))) ? ((-(arr_6 [i_2] [i_3 - 1]))) : ((((122 ? var_15 : 107))))));
            }
        }
    }
    #pragma endscop
}
