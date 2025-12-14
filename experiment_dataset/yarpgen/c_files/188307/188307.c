/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((((((var_14 >= var_10) >= (max(1855842879, 182))))) >= (((!(!var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 *= (((arr_5 [14] [i_1]) & (((arr_5 [i_0] [i_1]) << (((~var_7) - 2106027935))))));
                var_19 += ((2147483647 + (min(((var_0 ? 3020657936 : 3020657936)), (1 != -2147483647)))));
            }
        }
    }
    #pragma endscop
}
