/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!-178);
    var_12 -= -var_7;
    var_13 = ((~(~-85)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_14 -= ((-(arr_2 [i_1])));
                var_15 *= ((!((((arr_3 [i_0] [16] [1]) ? (arr_3 [i_0] [i_0] [4]) : (((((arr_2 [i_0]) + 9223372036854775807)) << (42 - 42))))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] [i_1] = var_2;

                    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_1] = ((!(((((arr_6 [i_0] [i_1] [i_0] [i_3]) ? var_10 : (arr_0 [i_0])))))));
                        arr_11 [i_0] [i_1] [i_1 + 2] [1] [1] = (max(((((((178 ? 9180939398201545017 : -9180939398201545017))) && (~var_6)))), ((((!(arr_3 [i_1] [i_1] [i_1]))) ? (!var_2) : (((arr_4 [i_3 - 1]) ? (-2147483647 - 1) : (arr_1 [i_2])))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_4] [16] = (arr_2 [1]);
                        var_16 = arr_8 [i_0] [i_1] [i_1] [i_2] [i_4];
                        var_17 += var_5;
                        var_18 = var_2;
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_19 = (max(var_19, ((min((((min((arr_5 [11] [i_2] [i_5]), 0)))), (max((((arr_0 [i_5]) ? -5991075714953784174 : 9180939398201545010)), ((max((arr_17 [18] [i_2] [i_0] [i_1] [i_0]), var_0))))))))));
                        var_20 *= (((arr_6 [i_0] [i_0] [i_1] [i_5]) % (((((min(var_4, -9180939398201545017)) + 9223372036854775807)) << var_9))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_21 = ((max((max((arr_9 [i_1] [i_1]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (~var_4))));
                                arr_22 [i_0] [i_6] [i_6] [i_6] [i_6] [i_1] = (!9180939398201545017);
                                var_22 = (arr_14 [i_1] [i_2] [i_6] [i_7]);
                                arr_23 [i_1] [i_6] [i_1] = ((((arr_20 [i_0] [i_0] [i_0] [i_0] [5]) <= (arr_17 [i_0] [i_0] [i_0] [i_6] [i_6]))));
                            }
                        }
                    }
                }
                arr_24 [i_1] = ((+(((max((arr_9 [i_0] [i_1]), -66))))));
            }
        }
    }
    #pragma endscop
}
