/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 - 1] [i_0] = (((min(var_9, 8362433542240465217)) >= var_17));
                arr_5 [i_0] [i_0] [i_0] = ((((((-(arr_2 [i_0 - 1] [i_0 - 1] [i_0]))))) ? ((((((8362433542240465205 ? (arr_0 [1] [1]) : var_3))) ? var_12 : var_3))) : (arr_3 [i_0] [i_1 - 2] [i_0])));
            }
        }
    }
    var_18 = (min(((max(var_5, var_17))), (((var_7 ? var_9 : var_11)))));
    #pragma endscop
}
