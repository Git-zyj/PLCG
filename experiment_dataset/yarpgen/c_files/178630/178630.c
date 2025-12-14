/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [0] &= (((~1) ? 121 : (arr_0 [i_0])));
                var_15 *= 1409408090;
                var_16 = 1441055950;
            }
        }
    }
    var_17 = (((~var_10) | 1441055979));
    #pragma endscop
}
