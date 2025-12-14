/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(var_5, var_5));
                var_10 = ((1048560 ? ((7593203870395275309 << (((arr_2 [i_0] [i_0]) ? (arr_3 [i_1 - 3]) : var_2)))) : (((var_2 + ((max(var_6, var_1))))))));
            }
        }
    }
    var_11 = (max(((-((var_7 ? -4572 : var_9)))), (((-var_5 <= ((52464 ? var_4 : -32648)))))));
    #pragma endscop
}
