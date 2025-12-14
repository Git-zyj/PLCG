/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 10837842735144212361;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = ((-(((~40) + -917504))));
                arr_6 [i_0] [i_0] = -17;
            }
        }
    }
    var_19 = ((((min(237, 1013598383344393897))) ? (((-var_5 & (max(56, var_8))))) : (~var_4)));
    var_20 = (~var_3);
    #pragma endscop
}
