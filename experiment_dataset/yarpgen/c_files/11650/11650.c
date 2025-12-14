/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((((((var_3 + 3271549632) ? ((((arr_3 [i_1]) ? 28672 : var_3))) : (((arr_3 [i_1]) ? (arr_1 [i_2]) : 1))))) && (((((arr_1 [i_0]) ? var_0 : 8)) == (max(77, var_2)))))))));
                    var_12 = (min(var_12, ((((((~(arr_5 [i_0 - 1])))) ? (((min((arr_5 [i_0 + 3]), var_9)))) : ((var_1 & (arr_5 [i_0 + 3]))))))));
                }
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
