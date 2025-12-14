/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max((var_9 * var_2), (min(var_12, 2147483647))))) ? 524288 : ((17592186044415 ? var_3 : ((var_3 ? var_10 : 17592186044400)))));
    var_15 = (((max((var_10 == 65535), ((var_0 ? var_0 : var_9))))) * 17592186044415);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [11] [i_1] = (((17592186044415 << ((((15656529466797271689 ? 266338304 : 1978682673)) - 266338292)))) | ((min(var_9, 2545388729))));
                var_16 += var_13;
            }
        }
    }
    var_17 = (min(var_17, -17592186044400));
    #pragma endscop
}
