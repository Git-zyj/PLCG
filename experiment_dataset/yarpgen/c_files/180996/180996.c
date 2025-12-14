/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, 1));
                    var_18 = (max((((max(var_15, 1)))), ((var_4 << (var_16 + 7660272385061732396)))));
                }
            }
        }
    }
    var_19 = (((((1 <= var_2) > ((var_6 ? var_1 : var_13)))) ? ((var_6 * ((max(var_14, 1))))) : (~1)));
    var_20 = max(var_8, ((((8982564029160365295 - 407) && 18446744073709551614))));
    #pragma endscop
}
