/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (min(var_16, var_1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 -= min((((arr_0 [i_0]) + 9194060404567919914)), ((((arr_1 [i_0] [i_0]) || 6))));
        var_21 = (min(var_21, (((((!var_15) ? var_4 : ((~(arr_0 [i_0])))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                arr_6 [i_2] = max(((var_5 * (arr_2 [i_2] [21]))), (arr_3 [i_1] [i_1]));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_13 [i_2] [16] [i_2] = ((-(((arr_12 [i_4] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 2]) & 0))));
                            var_22 = (min(((var_1 >= (arr_10 [i_1]))), (arr_10 [i_1])));
                            var_23 = (max(var_23, (((-(arr_4 [i_1 - 1]))))));
                            var_24 = (((((max((arr_3 [11] [11]), 9223372036854775807)) | (1 != var_10))) ^ (-var_1 < -122)));
                        }
                    }
                }
            }
        }
    }
    var_25 = var_3;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {
                var_26 = (((-3301675850663347200 ? 1 : 62)));
                var_27 += (!(((~(arr_10 [i_6 + 4])))));
            }
        }
    }
    #pragma endscop
}
