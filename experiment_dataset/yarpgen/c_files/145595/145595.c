/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_4 | 1) <= var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 |= (((((var_14 & (((~(arr_1 [i_0] [i_0]))))))) ? ((max((((~(arr_0 [i_1])))), (arr_9 [i_0] [i_1] [i_2])))) : (max(((var_1 ? 2023871456421463088 : var_15)), var_4))));
                    var_19 = (-1173462091072751034 & -1173462091072751035);
                }
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
