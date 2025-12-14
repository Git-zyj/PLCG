/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((max(((max((arr_1 [i_2] [i_1]), (!1)))), 2047)))));
                    var_19 = (max(var_19, (max((max(var_1, 1)), ((((((arr_8 [i_0] [i_0] [i_2] [i_1]) + 2147483647)) << (((((arr_8 [i_0] [i_0] [i_1] [i_2]) + 22153)) - 18)))))))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] = (((((255 ? 1 : 8796092497920))) ? (max((max(774952611, 2502983533)), -255513933)) : ((((!(arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1])))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((-(arr_5 [i_3 - 1] [i_1] [i_2] [i_3])));
                    }
                    for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (((228 ? 49 : 209)));
                        var_20 = ((((((206 ? 2047 : -32192)) <= 1)) ? ((((!var_12) ? ((var_4 ? (arr_3 [i_0] [i_0]) : var_7)) : var_9))) : (max(-2673919918862745856, (((5 ? var_17 : (arr_14 [i_1] [i_4]))))))));
                        var_21 = ((((max(939524096, ((10781400972964862726 ? 1303168559 : 1303168559))))) ? ((~((18446735277617053696 ? (arr_1 [i_0] [i_1]) : 8572736750590119097)))) : (((~(arr_3 [i_4 + 1] [i_4 + 1]))))));
                        arr_17 [i_0] [i_1] [i_2] [i_4] = ((((((arr_8 [i_0] [i_1] [i_2] [i_4 + 2]) & (arr_8 [i_2] [i_2] [i_2] [i_4 + 2])))) % (~14622864363319314470)));
                    }
                    for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_0] = (max((!1), -32190));
                        var_22 = (arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5]);
                        arr_21 [i_0] [i_0] = var_2;
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_2] [i_0] = 40;
                        arr_26 [i_6] [i_2] [i_0] [i_0] [i_0] = (max(255, 1303168573));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_23 = (max((max(var_3, var_13)), var_14));
                        var_24 = (max((((var_0 ? ((127 ? var_9 : (arr_10 [i_0] [i_1] [i_2] [i_0]))) : -1))), (arr_3 [i_0] [i_0])));
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_33 [i_0] [i_1] [i_2] [i_0] = (max(64512, ((max(208, 18446744073709551615)))));
                        arr_34 [i_0] [i_1] [i_2] [i_8] &= (((max((arr_8 [i_8 - 1] [i_1] [i_1] [i_0]), var_13)) <= (((arr_8 [i_8 - 1] [i_0] [i_2] [i_8]) ? (arr_9 [i_8 - 1] [i_8] [i_2] [i_8] [i_2]) : (arr_8 [i_8 - 1] [i_1] [i_2] [i_8])))));
                        var_25 -= var_15;
                    }
                }
            }
        }
    }
    var_26 = (48 | 1);
    var_27 = (max(((max(((max(-7750, var_2))), (var_6 * 65535)))), 4294967295));
    #pragma endscop
}
