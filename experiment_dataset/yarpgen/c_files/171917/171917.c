/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_13, 1));
    var_19 = (min(var_19, 1048575));
    var_20 = (max((((!(!1048575)))), (((((0 ? var_1 : 233))) ? ((var_6 ? 65535 : var_14)) : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (min(((min((arr_2 [i_0] [i_0]), (arr_2 [i_1] [i_0])))), ((~(arr_2 [i_0] [i_0])))));
                var_22 = var_7;
            }
        }
    }
    #pragma endscop
}
