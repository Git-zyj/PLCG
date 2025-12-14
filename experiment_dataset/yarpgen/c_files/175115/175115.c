/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((var_0 >> (var_11 - 2124377058))))));
    var_13 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = min(((((((var_6 ? var_6 : 1))) < (arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 3])))), ((var_5 ? var_2 : var_4)));
                    var_15 = (((((var_2 ? ((max(var_5, var_3))) : ((var_3 ? var_9 : var_6))))) ? var_4 : var_7));
                    var_16 = ((!(~11537855206111667979)));
                }
            }
        }
    }
    var_17 = ((11537855206111667979 ? -5639347559639209983 : 6908888867597883646));
    #pragma endscop
}
