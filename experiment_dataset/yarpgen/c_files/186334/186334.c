/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((~(min(var_11, var_11))))) && ((((var_0 / var_6) + (((1296242430920100768 ? 109 : -4889705369618876613))))))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((max(13727, -61346577668565072))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] = 40714;
                        arr_14 [i_0] [i_1] = ((~(min(var_11, (~var_3)))));
                        var_14 = 58;
                        arr_15 [i_3] [i_3] [i_0] [i_0] [i_1] [i_0] = var_12;
                    }
                }
            }
        }
        var_15 = 65;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_16 = ((((arr_3 [i_0 + 1] [i_0 + 1]) << (778461741779081647 - 778461741779081627))));
                    arr_22 [14] [i_0] [i_0] = (max((max(-1407435186919742060, var_10)), ((max((-9223372036854775807 - 1), -24771)))));
                }
            }
        }
    }
    var_17 = (max(((58 ? var_1 : (~18))), var_8));
    #pragma endscop
}
