/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1395;
    var_20 = var_0;
    var_21 = (max(2628187694236406675, ((max(var_0, ((4071205216 ? 9813 : 55727)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = var_0;
                var_23 = ((((((arr_2 [i_0 - 2] [i_1 + 2]) ? var_15 : (arr_2 [i_0 + 1] [i_1 + 1])))) ? (~var_13) : (((arr_2 [i_0 - 1] [i_1 + 1]) ? var_1 : (arr_2 [i_0 + 2] [i_1 + 2])))));
                var_24 = var_7;
            }
        }
    }
    #pragma endscop
}
