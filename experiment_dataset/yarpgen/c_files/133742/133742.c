/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(var_11 < var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_0 [i_0]);
                var_20 = ((!((!(arr_4 [i_1] [10] [i_0])))));
            }
        }
    }
    var_21 = var_7;
    var_22 = (max(var_22, (((var_14 ? var_13 : -var_15)))));
    #pragma endscop
}
