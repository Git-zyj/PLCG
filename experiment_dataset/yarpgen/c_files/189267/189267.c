/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = var_11;
                    var_18 = min(104, 16600613136944713553);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_19 = (((((104 ? 79 : 14835))) ? ((((20791 | -889145653) ? ((max(60, 6450))) : (((!(arr_1 [i_3 + 1] [i_3]))))))) : ((-(min(195, 2970810964))))));
                var_20 = min(-62091, -var_15);
                arr_13 [i_3 - 2] [i_3] [i_4] = ((((min(19923, -38933947))) ? (!var_6) : ((602707294 << (((arr_7 [i_4]) - 32005))))));
                var_21 = (((26878 == 1029299496) ? (3444 || 889145652) : (max(76, 2334044122))));
            }
        }
    }
    #pragma endscop
}
