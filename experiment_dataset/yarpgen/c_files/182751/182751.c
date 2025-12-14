/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((var_3 ? var_10 : var_5))) + (((((12 ? -21741 : 1658120919))) ? (768140266 ^ var_2) : ((-1 ? var_0 : var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 += ((4398046511103 ? 30 : (11479 || 36)));
                    var_18 -= (((11512339685249024710 >> 0) ? (((var_3 >= var_6) ? (arr_5 [6] [i_2 - 1] [i_2]) : -20)) : (((-7490 ^ ((-21 ? 115 : -45)))))));
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
