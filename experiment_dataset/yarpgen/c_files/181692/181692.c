/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = (((((min(var_1, 255))) ? (!var_12) : var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (max(1643800323373829744, (max(166, -1643800323373829749))));
                    var_18 |= 1643800323373829761;
                }
            }
        }
    }
    #pragma endscop
}
