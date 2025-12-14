/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~255);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_17 ^= var_4;
        arr_3 [6] = (!var_7);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_18 += 9223372036854775791;

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_19 += (+-34);
                            var_20 = (min(var_20, 3954636524));
                        }
                        arr_16 [i_1] [i_1] [i_1] = (arr_15 [i_2] [i_1]);
                        var_21 ^= ((((arr_13 [i_3] [i_3]) && 0)));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_22 = ((+(((arr_12 [i_1] [i_1]) ? var_14 : (~var_15)))));
                        arr_21 [i_1] [i_2] [i_1] [i_6] = (min(((((87 <= (arr_12 [i_1] [i_1]))))), ((((arr_13 [i_1] [i_3]) == (arr_13 [i_1] [i_1]))))));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_23 += (max((((!(!-11914)))), (~0)));
                        arr_24 [i_1] [i_2] [i_3] [i_2] [i_2] [i_1] = (~var_0);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_24 = (((min((!340330772), (max(var_0, 3591268357)))) - ((((11473 < (min(var_13, 11750157215842493304))))))));
                                arr_30 [i_1] [i_2] [i_1] [i_1] [i_2] = ((1 ^ 179) < ((var_13 ^ ((max(var_7, (arr_19 [i_1] [i_2] [i_1] [i_1])))))));
                            }
                        }
                    }
                    var_25 = (max(var_25, ((min(((((0 == (-2147483647 - 1))) ? ((var_9 ? var_4 : 12526755561770634889)) : (arr_7 [i_1]))), (+-585243093))))));
                    var_26 ^= min(543335213054022323, ((((-64 & -9223372036854775807) ? (max(-1820453983, (-2147483647 - 1))) : (5 < var_11)))));
                    var_27 = (min(var_27, var_0));
                }
            }
        }
    }
    var_28 = (min(var_28, (((+-53) ? (30031 >= 18779) : ((((((-9223372036854775807 - 1) ? 4294967295 : 243))) ? (!var_0) : -var_8))))));
    var_29 = ((((max(((var_9 ? -27476 : var_3)), var_15))) ? ((var_4 | (min(42746011, var_4)))) : var_2));
    #pragma endscop
}
