/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((min(255, 0))) - ((var_10 ? 1 : 1)))) / 12);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((-(max((max(1, 2759569430)), ((-49 ? 4294967295 : (arr_4 [13] [1] [13])))))));
                var_17 = min((max(127, (arr_0 [i_1 - 3] [i_1 + 1]))), (max(275925830206292243, 2147483647)));
            }
        }
    }
    var_18 = (max((max(4294967295, (-107 / var_11))), ((var_2 ? (1299336919 / 8) : (min(-1, 2279519610))))));
    #pragma endscop
}
