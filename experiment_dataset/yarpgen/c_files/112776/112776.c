/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = var_8;
                arr_6 [i_0] [i_0] = (arr_2 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_19 += 268435448;
                var_20 = (min(var_20, ((!(arr_10 [i_2])))));
                var_21 = max(var_9, ((max(((var_7 ? var_1 : 0)), (min((arr_8 [5]), -1))))));
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}
