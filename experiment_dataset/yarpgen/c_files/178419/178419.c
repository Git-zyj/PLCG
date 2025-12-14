/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [1] [i_0] [i_0] = max(((53411 ? 0 : (arr_4 [i_0] [i_0]))), (-1147228270536743202 | 65530));
                                var_17 = var_6;
                                var_18 ^= ((-((1 / (arr_8 [i_1 - 1] [6] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = -32767;
    #pragma endscop
}
