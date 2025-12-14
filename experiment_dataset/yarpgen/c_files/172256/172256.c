/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 |= (min((((((43 ? var_3 : -4831)) < 194))), ((~(arr_0 [i_0] [i_1 - 1])))));
                arr_4 [i_1] [i_1 + 1] = ((((((arr_2 [i_1]) ? (((arr_1 [i_0] [i_1 + 1]) ^ -27983)) : (((((arr_1 [i_0] [i_1 - 1]) > 12288))))))) || 255));
            }
        }
    }
    #pragma endscop
}
