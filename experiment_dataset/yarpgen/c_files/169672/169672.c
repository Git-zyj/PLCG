/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [2] [2] = ((-(var_0 * 6715510260609044068)));
                var_17 += var_9;
                var_18 = (((var_13 / 2047) ? (((~-132122629) ? (arr_0 [i_0 - 2]) : (((arr_0 [i_0]) ? -78 : var_9)))) : ((15358514614593102208 ? (arr_2 [i_1]) : 4294967295))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 ^= arr_2 [i_0];
                            arr_9 [i_0 + 1] [i_1] [i_2] [i_3] [i_3] = (min(4294967295, (((((var_6 << (((arr_1 [14] [12]) - 12288))))) ? (var_16 == 0) : (max(-1, 1254731903))))));
                            var_20 = var_11;
                            var_21 = (min(var_21, (~var_11)));
                        }
                    }
                }
                var_22 = (~15358514614593102208);
            }
        }
    }
    var_23 &= var_0;
    var_24 = 0;
    #pragma endscop
}
