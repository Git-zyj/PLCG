/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_17 += ((((!(((var_11 ? 262143 : 255))))) ? (min((arr_1 [i_0 - 1]), (-9223372036854775807 - 1))) : (!255)));
        var_18 = 255;
        arr_2 [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 = ((0 ? (arr_3 [i_1] [i_1]) : (~255)));
        arr_5 [i_1 + 1] = (((arr_1 [i_1 - 1]) >= (arr_1 [i_1 + 1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_8 [i_2] = var_10;
        arr_9 [i_2] [i_2] = (((arr_7 [12] [i_2]) ? (((254 ? (arr_7 [i_2] [i_2]) : (arr_6 [i_2])))) : (min(-6147524015631695133, (((-9025 ? 250 : (arr_7 [i_2] [i_2]))))))));
        arr_10 [i_2] [i_2] = var_8;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_2] [i_2] = ((max((arr_6 [i_4 + 2]), 1799947067920457247)));
                    arr_17 [i_2] [i_3] [i_4] [i_3] = ((((max(1799947067920457247, (arr_13 [i_4 - 1] [i_3])))) ? 170 : (~221)));
                    var_20 = ((((-1799947067920457248 / (arr_12 [i_2] [i_2] [i_4])))) ? (arr_6 [i_2]) : (min((-32767 - 1), var_1)));
                    arr_18 [i_2] = (min(((-(min((arr_11 [i_3]), 15349149558850860009)))), ((min(-21, 0)))));
                    var_21 = min((arr_7 [i_2] [i_2]), -7662006864198187516);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_25 [i_2] [i_2] = var_13;
                        var_22 = (-(max((((18446744073709551594 <= (arr_23 [i_7] [i_2] [i_5] [i_2])))), (max((arr_19 [i_2] [i_5] [i_2]), 12088784145218012556)))));

                        for (int i_8 = 3; i_8 < 21;i_8 += 1)
                        {
                            var_23 += ((((min(var_12, var_1))) ? (arr_6 [i_8 - 1]) : 20));
                            var_24 -= (max(((max(1799947067920457241, 20))), ((min(var_15, (arr_11 [i_2]))))));
                            var_25 = (min(-1799947067920457248, 1799947067920457247));
                        }
                    }
                }
            }
        }
    }
    var_26 = (max((max(18446744073709551594, (-32767 - 1))), var_16));
    #pragma endscop
}
