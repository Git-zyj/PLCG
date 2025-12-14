/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (!var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 78;
                var_17 = ((min(-2318212837, (arr_3 [i_1] [i_1] [i_0]))));
            }
        }
    }
    var_18 = (min(var_18, (((var_7 ? ((var_1 ? (0 | var_5) : var_6)) : ((var_12 ? ((min(9, 1))) : (!-31))))))));
    #pragma endscop
}
