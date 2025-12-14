/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((~(max(var_11, ((~(arr_1 [i_0] [i_0])))))));
                arr_7 [i_0 - 3] = (((arr_2 [21] [i_0]) ? ((((11 == -115) & 28767))) : var_6));
                var_19 = min(8500387203497520429, 21);
            }
        }
    }
    var_20 = var_15;
    #pragma endscop
}
