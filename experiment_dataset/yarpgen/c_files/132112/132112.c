/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (((((!14) && ((min((arr_5 [20] [i_1 + 1] [i_1]), 0))))) ? ((max((!var_8), 1))) : ((max(((!(arr_0 [i_0] [i_1]))), (!-13080))))));
                    arr_7 [i_1] = ((!((max(var_7, 2076172505)))));
                    var_16 = (min((max(var_5, (arr_1 [i_0]))), (arr_6 [i_0])));
                }
            }
        }
    }
    var_17 = (max(((var_9 % (23867 + var_6))), (!var_13)));
    #pragma endscop
}
