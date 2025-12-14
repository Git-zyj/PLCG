/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 8431;
    var_17 = (max(var_6, var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((((arr_13 [i_0 + 2] [i_1] [i_0 + 2] [i_0 + 2] [i_0 + 1]) < (arr_6 [0])))))));
                                arr_15 [i_0 - 1] [i_2] [i_1] [i_0] [i_0 + 1] [i_3] [i_2] = (13761 / 13761);
                            }
                        }
                    }
                    var_19 *= (max((((arr_1 [2]) || (arr_10 [i_0] [8] [8] [i_0 + 1] [i_0 + 1]))), (((((23164 ? 1302039344 : var_6))) || (((var_8 ? -17 : var_10)))))));
                }
            }
        }
    }
    var_20 = (((((var_11 ? var_1 : var_6))) != var_2));
    var_21 = var_5;
    #pragma endscop
}
