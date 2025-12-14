/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : ((~(arr_0 [i_0] [i_0])))));
        var_10 = (max(var_10, (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1 - 1] [i_1 - 2] = ((!((min((((arr_4 [i_1 - 1]) ? (arr_1 [i_1]) : (arr_4 [i_1]))), ((min((arr_1 [i_1]), (arr_0 [i_1] [i_1])))))))));
        arr_6 [1] = ((!((max(-207312765, 16)))));
        var_11 += (arr_3 [i_1 - 3]);
        var_12 = (max(var_12, ((min((((arr_3 [i_1 - 4]) >> (((arr_3 [i_1 - 1]) - 1842984862)))), ((max(96, (7 > 98)))))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_13 -= (max(65535, (1099511627775 > 268435455)));
                    arr_17 [i_2] [i_3] = (((min(5059205518501725668, ((((arr_7 [i_4]) <= 1))))) == -268435442));
                    var_14 = (max(var_14, (((1099511627780 ? 1 : 1)))));
                    var_15 = max((((~(arr_0 [i_4] [3])))), (((-1099511627771 + 9223372036854775807) >> (1099511627772 - 1099511627747))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 = (max((arr_13 [i_6 + 1]), (((max((arr_1 [i_4]), (arr_0 [i_2] [i_5]))) / 53467))));
                                var_17 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
