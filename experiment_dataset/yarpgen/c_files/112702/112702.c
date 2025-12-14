/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (arr_4 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 ^= (((((~((var_3 ? var_2 : 4294967290))))) ? (max(1807086324, 1)) : ((((max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]), 992)) != (((var_15 ? -49 : var_8))))))));
                                arr_13 [i_0] [i_4] [i_2] [i_3] [i_2] [8] = ((((var_1 ? var_4 : (var_12 / var_12)))) ? ((((31710 ? 7301009466099232349 : (arr_10 [i_0] [i_1] [i_3] [i_0]))) ^ var_4)) : var_1);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_19 = var_14;
                                var_20 |= -4096;
                            }
                        }
                    }
                }
                var_21 = (max(var_21, 5255379734403748606));
            }
        }
    }
    var_22 = 0;
    #pragma endscop
}
