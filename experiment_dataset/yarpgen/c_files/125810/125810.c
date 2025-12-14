/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((var_9 ? (arr_0 [i_0]) : var_6));
                var_14 = ((-1057075981747552827 ? ((~((~(arr_2 [6] [i_0]))))) : (((((!(arr_7 [i_1] [12] [i_1]))) ? ((var_3 ? var_0 : var_5)) : (1733053310192671536 == -1733053310192671537))))));
                var_15 = ((-(arr_6 [11] [11])));
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
