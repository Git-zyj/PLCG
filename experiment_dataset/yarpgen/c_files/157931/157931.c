/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (arr_2 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 = 63;
                                var_15 *= ((((((1626786993505775356 <= var_9) / -16573))) ? (((-4348351417397716040 ? (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 2]) : 52))) : (min((arr_6 [i_1] [i_1] [i_1] [i_0 - 2] [i_0 - 2]), 1554558612))));
                            }
                        }
                    }
                    var_16 = (min(var_16, (-2147483647 - 1)));
                    var_17 = ((1364166621 > (((~(arr_11 [i_0] [7] [11] [i_0 + 1] [i_0]))))));
                }
            }
        }
    }
    var_18 *= ((((min(var_11, var_6))) ? (min(((max(813676750, (-2147483647 - 1)))), 13050164199123073363)) : (((((max(var_7, 3445015257560480320))) ? 22334 : (~121))))));
    #pragma endscop
}
