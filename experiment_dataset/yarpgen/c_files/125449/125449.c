/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((max((((-337631238 ? -4195 : 222))), ((6216 ? var_11 : 14727316288024628601)))) * 52)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((-15 ^ -23) * (!-665220432)))) ? (((((arr_0 [i_0] [i_1]) && 74)) ? (32767 || 5) : (arr_2 [i_1] [i_1]))) : -2147483643);
                var_21 = (max(var_21, -1673551540215523215));
                var_22 ^= (~var_15);
            }
        }
    }
    #pragma endscop
}
