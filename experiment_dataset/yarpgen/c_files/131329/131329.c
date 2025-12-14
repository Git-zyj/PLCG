/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (max(((min(((var_0 ? (-127 - 1) : 26)), 20319))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (max((-127 - 1), 45217));
                var_13 = (min(var_13, ((((min(var_6, (max(0, (arr_4 [i_0] [i_1]))))) | (~-8))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_4] = 20319;
                                arr_14 [i_0] [i_2] [i_2] [i_3 + 2] [i_3 + 2] [i_4] [i_4] = (!45229);
                                var_14 = 65520;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_15 ^= ((1 ? ((((!(20319 / 1263440789))))) : ((-2147483621 ? -16 : (min(-32755, -1711781101792451874))))));
                            arr_27 [i_5] [i_5] [i_5] [i_8] [i_8] [2] = (((arr_20 [15]) | (arr_18 [i_7])));
                            arr_28 [i_8] [i_8] [i_5] = 0;
                            var_16 = (max(var_16, ((min(((-((min(20319, 0))))), var_1)))));
                        }
                    }
                }
                arr_29 [3] [i_6] = (-9223372036854775807 - 1);
            }
        }
    }
    var_17 = (min(var_17, (((!(((-8 ? (min(-5623614770842545539, 9223372036854775807)) : -240))))))));
    #pragma endscop
}
