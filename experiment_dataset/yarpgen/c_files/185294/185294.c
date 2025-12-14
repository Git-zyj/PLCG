/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = max((min(((var_8 ? var_1 : var_4)), ((max(-9050619692766524965, 1650))))), var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] = (min(1, ((9898520910214877440 ? ((((arr_2 [i_0] [i_0]) ? 1 : 24762))) : ((0 ? 1729843596 : var_9))))));
                    arr_10 [i_0] [i_1] [i_1] [1] = (!1652);
                }
                var_14 = (min(((-((max((arr_7 [i_1] [i_1] [i_1] [i_0 - 2]), (arr_5 [i_0])))))), (arr_6 [i_1] [9] [i_1])));
                var_15 -= var_0;
                var_16 = (arr_4 [i_1]);
            }
        }
    }
    var_17 *= var_4;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    var_18 = ((21718 ? ((min(24901, var_6))) : (min(((max(24871, var_11))), (min(9050619692766524955, 1048448))))));
                    var_19 = (min(var_19, ((max(((+((max((arr_14 [i_3]), -24910))))), ((min((arr_16 [i_5]), (arr_19 [i_3] [i_4])))))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_22 [i_3] [i_3] = var_2;
                        arr_23 [i_3] [i_4] [i_3] [i_6] = -24922;
                        arr_24 [i_3] [i_3] [i_5] [i_3] [i_6] [i_6] = (-24902 - 24912);
                        var_20 = 4293918848;
                        var_21 = (((arr_20 [i_3] [i_5 - 2] [i_5 - 2] [i_3]) ? 10688818244196655663 : ((18446744073709551615 ? (arr_17 [1] [i_4]) : 65535))));
                    }
                    arr_25 [i_3] [3] [i_5] = (~0);
                }
            }
        }
    }
    #pragma endscop
}
