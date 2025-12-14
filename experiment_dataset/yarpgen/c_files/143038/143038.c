/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((!((((arr_5 [i_0] [i_2]) ? ((~(arr_5 [i_0 - 3] [i_0 - 3]))) : var_4))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (arr_4 [i_1]);
                                var_18 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 -= (((((var_2 ? var_2 : (~var_5)))) ? var_5 : (((var_10 <= var_3) ? var_2 : var_8))));
    #pragma endscop
}
