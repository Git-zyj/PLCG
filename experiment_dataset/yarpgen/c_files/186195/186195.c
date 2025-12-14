/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [10] [i_0] [i_0] = (i_0 % 2 == zero) ? ((((((((~var_0) | ((min((arr_0 [i_0]), var_7))))) + 9223372036854775807)) << (((((arr_4 [i_0] [i_0]) >> (arr_2 [i_0]))) - 113))))) : ((((((((~var_0) | ((min((arr_0 [i_0]), var_7))))) + 9223372036854775807)) << (((((((arr_4 [i_0] [i_0]) >> (arr_2 [i_0]))) - 113)) - 113)))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] = (-1301375371 != 3633876436);
                    var_10 = (max(var_10, -1113969343));
                    arr_11 [i_0] [i_1] [i_0] = 1131;
                    arr_12 [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_1] [i_0]);
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_15 [1] [i_1] [i_0] = ((((1552849911 ? 131 : 105)) % -2147483639));
                    var_11 = (1886587710269516269 / 2742117392);
                    var_12 = (arr_9 [i_3 - 1] [i_0] [i_3 + 2]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_22 [i_0] [3] [i_0] = (arr_18 [i_0] [10] [i_0] [9] [i_0] [i_5]);
                                var_13 = (max(var_13, ((min(((((arr_2 [i_1]) == var_2))), 92)))));
                                arr_23 [i_0] [i_0] [i_0] [1] [i_0] = (min(92, 1552849911));
                            }
                        }
                    }
                }
                var_14 *= 1634621522;
                var_15 = (min((arr_13 [i_0] [11] [i_0] [i_0]), (var_7 && 669295444)));
            }
        }
    }
    var_16 = (((((94 ? 102 : (var_3 + var_6)))) | (max((-119 / 1552849911), (var_3 || 13515541654478476890)))));
    var_17 = ((max((min(18446744073709551607, 562941363486720)), -93)));
    var_18 = (min(1870836742, var_6));
    #pragma endscop
}
