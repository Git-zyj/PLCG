/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((~((~(var_15 ^ var_5)))));
                arr_6 [i_0] = ((~((~(6165056515902446302 & 5405860394586349077)))));
                var_16 = 2;
                arr_7 [i_0] [i_0] [i_1] = (((max(8388607, 19))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_17 = 19;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_18 = var_8;
                                var_19 = (min((max(237, 207)), ((237 ? var_5 : 18))));
                                var_20 = var_8;
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((-(((236 + 28) ? var_13 : ((237 ? 218 : 17))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
