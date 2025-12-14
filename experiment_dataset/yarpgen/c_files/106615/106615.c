/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -19557;
    var_19 = var_5;
    var_20 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_0 + 1] = (((((-19537 / 14) * var_5)) == -14));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            arr_14 [i_1] = var_3;
                            var_21 = (max(var_21, var_14));
                        }
                        var_22 = (min(var_22, (((((max(((((arr_5 [i_0 - 2] [i_0 - 2]) ? (arr_1 [i_0 + 1]) : (-32767 - 1)))), ((var_16 ? (arr_1 [i_3]) : var_17))))) || ((((arr_3 [i_0 - 3] [i_1] [i_2]) ? (-127 - 1) : -567819429))))))));
                        arr_15 [i_1] [i_1] = (var_5 | -16994);
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_23 = (max(var_23, (((((((((var_10 + 2147483647) << (var_15 - 1986)))) ? (((((-32767 - 1) || (arr_16 [i_0] [i_0] [i_1] [i_2] [i_2]))))) : var_9)) < 3837305917)))));
                        arr_18 [i_0] [i_1] [i_2] [i_1] = ((((((761735782 ? var_9 : -483693650)) > (((((arr_12 [i_0] [i_0] [i_0]) <= 62501)))))) ? 9448 : 1));
                        arr_19 [i_0] [i_1] [i_1] [i_1] [i_5] = ((((-var_10 ? (min(var_9, var_0)) : (108 || 48595))) & (arr_2 [i_0])));
                        arr_20 [i_1] [i_2] [i_1] [i_0] [i_1] = (var_7 - (((~-123) ? (max(0, var_9)) : (~3639881169))));
                        var_24 += (max((116 >= var_3), ((4 ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 3])))));
                    }
                    arr_21 [4] [i_1] [4] = ((-(((arr_16 [i_0 + 1] [i_0 - 4] [i_0] [i_0 - 2] [i_2]) ? var_1 : (arr_2 [i_0 - 2])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                var_25 &= var_2;
                arr_27 [i_7] [i_7] [i_6] = (((((((arr_23 [i_7]) + 65535))) ? 2147483646 : (~var_4))));

                /* vectorizable */
                for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_26 = (((arr_25 [i_6] [i_6] [i_6]) * (arr_25 [i_6] [i_7] [0])));
                    var_27 = (arr_28 [i_6] [i_6] [i_6] [i_6]);
                    var_28 = (max(var_28, (((-((-19565 ? -11767 : 14)))))));
                }
                for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    arr_33 [i_6] = (((arr_28 [i_6] [i_6] [i_6] [i_6]) - (((9409773283285686277 ? (arr_24 [i_9 - 2] [i_9 - 2] [i_9 + 2]) : (arr_24 [i_9 - 1] [i_9 + 2] [i_9 - 2]))))));
                    var_29 = -8503375886511427474;
                }
                var_30 = ((-(max(0, 1))));
            }
        }
    }
    #pragma endscop
}
