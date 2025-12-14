/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_7, ((1114984344 * (~var_8)))));
    var_18 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (min((max(-var_0, (-881582952 && var_16))), -1147057193));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [i_2] [i_0] [i_3] = var_16;
                        var_20 = -1907850817171997034;
                        arr_11 [i_0] [i_0] [i_0] [i_2] = ((!(arr_5 [i_0] [i_3] [i_0] [i_3])));
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] = (min((((-(65535 / 245)))), var_5));
                        var_21 += (((var_9 + 2147483647) << (40461 - 40461)));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_22 = (min(var_22, var_2));
                        var_23 -= ((max((arr_0 [i_1 + 2] [i_5]), var_4)));
                        arr_19 [i_0] [i_1 - 1] [i_2] [i_5] [i_5] = var_13;
                    }

                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_2] = arr_9 [i_0] [i_1 + 1] [i_2];
                        var_24 -= (min(((max((arr_1 [i_0]), (var_5 == var_0)))), (arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_6])));
                        var_25 = ((!(((3569831602 ? 33266 : 1)))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_2] [i_2] [i_2] = 18064;
                        var_26 &= (max((min(((max(var_7, 193))), (~var_8))), var_9));
                        arr_27 [i_1] [i_0] |= var_15;
                        var_27 *= 15899257416208523686;
                    }
                    arr_28 [i_0] [i_2] [i_1 + 1] [i_2] = (arr_9 [i_1] [i_1 + 2] [i_1 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
