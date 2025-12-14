/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (arr_7 [i_0 - 1] [i_4]);
                                arr_16 [i_4] [i_0] [i_0] [i_0] [i_0 - 1] = ((~((((min(255, 0))) ? 24 : (~16)))));
                                arr_17 [i_0] [i_1 + 3] [i_3] [i_0] = ((!(((174 ? (arr_2 [i_0]) : 4294967291)))));
                                var_21 = 16;
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_0] [10] [i_0] = 240;
                            }
                        }
                    }
                }
                var_22 = (min(var_22, ((((~33) ^ -16)))));
            }
        }
    }
    var_23 = (max(var_23, var_14));
    var_24 = (max(var_24, ((var_19 > (((6 * 17197345737187869950) ? (255 ^ 1) : 127))))));
    #pragma endscop
}
