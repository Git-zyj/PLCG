/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((1 ? (((6441605321268283566 ? ((((var_7 + 2147483647) << (((-1 + 32) - 31))))) : (2095104 & var_11)))) : ((((((var_11 | (-9223372036854775807 - 1))) + 9223372036854775807)) << (var_10 - 13863369019922985697)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = (-20006 & var_9);
                        arr_10 [i_0] [i_2] [i_0] [i_0] = (arr_1 [7]);
                    }
                }
            }
        }
        var_16 *= (arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_17 = (arr_11 [i_4 - 1]);
        var_18 = ((((637977711 && (arr_12 [i_4 + 1] [i_4 + 1]))) ? var_5 : var_4));
        var_19 += (((!0) || ((max(-1, 25)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_25 [i_4 - 1] [i_5] [i_6] [i_7] [i_8] = var_12;
                                var_20 = (min(-30110, 20005));
                            }
                        }
                    }
                    var_21 = (max(var_21, (arr_15 [i_4] [i_6 - 1])));
                    arr_26 [i_6] [i_6] = (!5541564337891343662);
                }
            }
        }
    }
    #pragma endscop
}
