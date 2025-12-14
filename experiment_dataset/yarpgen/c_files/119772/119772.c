/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1259045921;
    var_13 = (((min(var_11, ((var_9 ? -643289424869411767 : var_8)))) >> ((((-121 && var_11) && (var_1 && var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 *= (~-643289424869411767);
                arr_6 [i_1] [i_1] [i_0] = (((-643289424869411764 ? var_7 : ((var_7 ? var_8 : 127)))));
                var_15 = (max(var_15, 0));
            }
        }
    }
    #pragma endscop
}
