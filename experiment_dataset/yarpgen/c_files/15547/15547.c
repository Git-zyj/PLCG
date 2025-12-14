/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = max(var_2, var_0);
    var_14 = (~(min(var_7, (~var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_1] [5] = 255;
                arr_6 [i_0] [i_1] = (max(-1320294783, -1168421591));
                arr_7 [i_0] [i_1] [5] = ((((((max(-1691372529, var_1))) ? var_10 : var_2))) ? (max(((var_10 ? var_7 : 1168421591)), var_11)) : ((((((-7396 ? var_11 : 4096))) || (((7414598256171183254 ? 40188 : -113)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_15 = var_0;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 *= var_2;
                                var_17 -= (((-9223372036854775807 - 1) <= -521082112));
                            }
                        }
                    }
                    arr_21 [i_2] [i_2] [i_4] = ((0 ? ((var_4 ? var_0 : -8192)) : ((~(var_5 <= var_4)))));
                    arr_22 [i_2] [i_2] = ((-6067 ? 127 : var_3));
                    var_18 -= ((var_10 ? 254 : -4097));
                }
            }
        }
    }
    #pragma endscop
}
