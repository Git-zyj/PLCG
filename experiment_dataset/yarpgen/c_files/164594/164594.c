/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        var_12 = (min(((8647 - ((0 ? 20 : 3849303612)))), (max(0, 21139))));
                        var_13 = ((min(((965115561 ? 1177 : 3329851734)), (~0))));
                    }
                    var_14 = (min((((max(-21146, 65535)))), (min(-25, 68))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                arr_19 [16] [i_5] [16] = ((((min(10479, ((max(0, 31004)))))) ? ((((965115562 ? 1 : (arr_0 [i_4] [i_5]))))) : (arr_16 [i_4] [i_5])));
                var_15 = 11;
                var_16 -= (max(965115562, ((max(16, 46770056)))));
                arr_20 [i_4] = 40496;
            }
        }
    }
    var_17 = 8050235502796019143;
    #pragma endscop
}
