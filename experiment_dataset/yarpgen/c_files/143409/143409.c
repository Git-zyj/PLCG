/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = var_11;
        arr_3 [i_0] [i_0] = (((var_11 || (arr_2 [i_0 + 2]))) ? 1154151210 : (32767 < var_2));
        var_13 ^= arr_2 [i_0];
        arr_4 [i_0] [i_0] = (min(var_7, ((~(min(15395685682022970178, var_7))))));
        var_14 = (min(var_14, (((!(((((var_11 - (arr_0 [i_0]))) - (arr_2 [i_0 + 2])))))))));
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_20 [2] [i_2] [i_3] [i_5] = 0;
                            arr_21 [i_5] [i_2] [4] [i_1] [i_2] [i_1] = ((((var_7 ? var_7 : (arr_8 [i_3] [i_4]))) >= (((var_2 ? var_8 : var_11)))));
                        }

                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            var_15 ^= (((arr_15 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 + 1]) ? (arr_15 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1]) : (arr_15 [i_1 - 3] [i_1] [i_1] [i_1 + 1] [i_1 - 3])));
                            var_16 = ((arr_24 [i_1 - 2] [i_2] [i_3] [i_4] [i_6]) / (arr_24 [i_1] [i_1] [i_1] [i_1] [i_6]));
                            var_17 = ((-(((arr_6 [i_2] [i_3]) ? var_7 : var_9))));
                        }
                        arr_26 [i_1 - 2] [i_1] = var_1;
                    }
                }
            }
            var_18 = (0 - 0);
            var_19 = ((650248717 ? -24909 : -30));
            var_20 = var_1;
        }
        arr_27 [i_1] [i_1] = (arr_23 [i_1] [i_1 + 1] [i_1 - 3] [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_7 = 4; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_21 += (min((((arr_16 [i_7 + 1] [i_7 - 3] [i_7 - 4]) < ((var_7 ? (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]) : var_9)))), ((((min(22729, 8648408855333273902))) || (7822853047732818266 || 40367)))));
        var_22 &= (+-4791958614564295678);
    }
    var_23 = (((((max(-1130045138, 0)))) ? var_10 : ((var_4 >> (var_5 + 79543290)))));
    #pragma endscop
}
