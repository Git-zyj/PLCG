/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (0 ? 18446744073709551615 : (-32767 - 1));
    var_12 = ((((~(~var_7))) + ((((~var_7) || var_2)))));
    var_13 = (min(var_7, 8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [7] [i_1] [i_0] = -18634;
                var_14 = ((arr_0 [i_0] [i_0 - 2]) - (733676211 && 11));
                var_15 ^= (((~(~29712))));
            }
        }
    }
    #pragma endscop
}
