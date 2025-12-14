/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 / (((min(var_3, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] |= ((var_4 ? (min(var_1, var_1)) : ((var_1 ? var_0 : var_6))));
                arr_7 [i_0] [i_0] = (((((var_8 ? var_3 : var_5))) % ((var_2 ? var_8 : var_6))));
                arr_8 [i_1] [i_1] = (max((-1 / 1), var_1));
                var_11 *= var_8;
            }
        }
    }
    #pragma endscop
}
