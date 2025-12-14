/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((1 / var_10), (((var_10 ? 1 : 1)))))) ? var_3 : (max(5500674479282016900, 1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (max(var_9, (max(0, var_13))));
                arr_4 [i_0 + 2] [i_0] [i_0 + 2] = var_10;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (1 > ((((arr_3 [i_0] [i_0 + 1] [i_0]) == (arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0])))));
                                var_20 = (((((arr_9 [i_0] [i_0 - 1] [i_0 - 2] [i_0]) == (arr_9 [i_1 - 1] [i_2] [i_1 - 1] [i_0]))) && ((((var_5 < 0) ? (((((arr_1 [i_0]) || var_15)))) : (((arr_9 [i_2] [i_2] [1] [i_0]) ? (arr_7 [i_0] [i_1 + 1] [i_2] [16] [i_1 + 1]) : 10278699950823563590)))))));
                                arr_12 [i_0] [i_1] [i_1] [13] [i_1] [i_1] = 1394031182;
                            }
                        }
                    }
                }
                var_21 = (((arr_0 [i_0 - 1] [i_0 + 2]) ? (((arr_0 [i_0 - 1] [i_0 + 2]) ? 65535 : (arr_0 [i_0 - 2] [i_0 + 2]))) : (min((arr_0 [i_0 + 1] [i_0 - 1]), (arr_0 [i_0 + 2] [i_0 - 2])))));
            }
        }
    }
    #pragma endscop
}
