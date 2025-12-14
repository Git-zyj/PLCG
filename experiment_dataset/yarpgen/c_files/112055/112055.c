/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max((min(1, -1)), (var_6 * 17))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [1] [i_2] [i_0] [i_0] = ((!((((((var_7 ? var_0 : var_10))) ? ((var_1 ? 1 : 3145728)) : (((min(var_0, (arr_5 [5] [9] [6]))))))))));
                    arr_8 [11] [7] [i_1] [i_2] = max((1 || 1), (!6598117794695328377));
                }
            }
        }
    }
    #pragma endscop
}
