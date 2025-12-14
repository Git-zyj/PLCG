/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = 11;
                var_17 |= (((arr_4 [i_0] [i_0]) ^ var_7));
            }
        }
    }
    var_18 -= ((var_1 ? (99 || -86) : ((~(max(var_8, var_12))))));
    var_19 -= (((((~var_4) ^ ((-30691 ? -14 : 25421)))) != ((max(var_14, (max(77, var_14)))))));
    var_20 = (~var_15);
    #pragma endscop
}
