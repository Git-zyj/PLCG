/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 ? 67108863 : (max(var_7, 9168072970322219395))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((11505158095161787200 ? ((min(12, (arr_3 [i_0] [i_0] [i_1])))) : 18446744073709551615));
                var_12 = 67108863;
            }
        }
    }
    var_13 = var_3;
    #pragma endscop
}
