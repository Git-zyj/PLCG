/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = -62290;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((~(12331 & 22456))))));
                                var_19 = (min(var_19, (!183)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_20 -= (max((((-11892 || (arr_2 [14])))), (arr_8 [14] [12] [i_1] [i_6])));
                            arr_19 [i_6] [i_0] [11] [i_0] [15] [i_0] [i_0 - 2] = (arr_15 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 2]);
                            var_21 = (min(var_21, 2));
                        }
                        var_22 ^= (~2164373261);
                    }
                }
            }
        }
    }
    var_23 = -5428008885040087164;
    #pragma endscop
}
