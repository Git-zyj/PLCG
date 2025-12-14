/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((!(3946535966 > var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = (((((-((15234659584009806989 ? var_5 : -1478489508))))) < (((var_2 < var_0) ? (8563401470575809949 % var_8) : (arr_1 [i_1 - 1] [i_1])))));
                    arr_8 [i_1] [i_1 - 1] [i_1] = ((3212084489699744607 || 46) | ((((min(var_4, var_6))) ? ((3434300689 ? (arr_1 [i_0] [i_0]) : 860666633)) : (((min(-32754, 1)))))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_17 [i_0] = (!var_0);
                            arr_18 [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                            var_17 = var_11;
                            arr_19 [10] [i_1] [10] [8] [i_4] [i_2] = (((var_14 > -32754) == (((arr_15 [i_1 - 2]) ? -8563401470575809949 : (arr_7 [12])))));
                        }
                        var_18 = (78 ^ var_1);
                        arr_20 [i_0] [i_1] [23] = ((var_1 <= (arr_11 [24] [i_1] [i_2] [i_2] [i_3] [5])));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_19 *= ((~(((arr_14 [i_0] [i_1 - 2] [i_2] [i_5] [i_0]) ? 34 : (arr_14 [19] [i_1 - 1] [i_2] [i_5] [i_5])))));
                        arr_24 [i_0] [i_1] [i_2] [i_5] = (arr_3 [i_0] [i_0] [i_0]);
                    }
                    arr_25 [2] [i_2] &= var_4;
                }
                var_20 = (max(((((arr_9 [i_0] [22] [i_1 - 1] [15] [i_0] [i_0]) + (arr_1 [i_0] [i_0])))), (min(66, (arr_13 [19] [i_1] [i_1 - 2] [i_1 - 2] [i_1])))));
                var_21 = (min(var_21, ((((arr_3 [i_0] [i_1] [i_0]) ? (((((~var_13) <= ((min(var_5, var_4))))))) : (((124 ^ -69) ^ (~18))))))));
            }
        }
    }
    #pragma endscop
}
