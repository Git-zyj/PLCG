/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 897699655;
    var_18 = ((var_11 ? var_11 : ((var_10 ? 1964174977 : 9215475011662212701))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (min(2826594778625464865, (var_6 / 3032809402)));
                                arr_14 [i_0] [i_4] [i_4] [i_4] [i_4] [i_3] = var_1;
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] |= ((((-1964174978 && (arr_12 [i_0] [i_1] [i_1] [i_3] [i_2 - 2] [i_2 - 2])))));
                                arr_16 [i_0] [i_4] = 16;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
