/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((9025 << 1) ? (min(1, ((127 ? 8006185297594470032 : 3112291946)))) : (((max(((max(0, 1))), 63))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (!(!0));
                                var_13 = (min(1, 17430));
                                var_14 = (arr_10 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4]);
                                var_15 ^= (-12369 & 5988317766013033474);
                            }
                        }
                    }
                    var_16 &= ((1 ? -25388 : 12368));
                    var_17 = (1 != ((-(arr_12 [i_0] [i_1] [i_1 - 2]))));
                }
            }
        }
    }
    var_18 = ((((((((1 ? -17430 : 0))) ? (((min(114, 53)))) : ((48379 ? -932847046933580952 : 1))))) ? var_4 : 1));
    #pragma endscop
}
