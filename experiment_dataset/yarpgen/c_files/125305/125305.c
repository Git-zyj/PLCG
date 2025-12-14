/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (max(((min((min(127, var_2)), -39))), (~var_3)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = (((((~(arr_3 [i_0] [i_1 + 1])))) ? (arr_3 [i_1 + 1] [i_1 + 1]) : ((max((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_1] [i_1 + 1]))))));
            arr_7 [0] [0] = ((max(45148, (((arr_1 [i_0]) >> 1)))));
            var_12 = (min(var_12, -17051));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_13 = arr_5 [i_2] [i_1];
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_14 = (((((min(45, (arr_3 [i_0] [16]))) >> (151 - 141)))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 109;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [i_2] [i_2] [i_5] [i_6] [i_6] = (arr_20 [i_1] [i_2] [i_1] [i_6]);
                            var_15 = (min(var_15, ((max(65528, ((((-(arr_19 [i_0]))) + (((min(1, 1)))))))))));
                        }
                    }
                }
                arr_25 [i_0] = (((-46 + 2147483647) >> (((((((26 ? 54320 : (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? ((18446744073709551615 & (arr_21 [i_1] [i_1]))) : (min(18446744073709551615, 47846)))) - 31125))));
            }
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        var_16 *= (((arr_27 [i_7 + 1]) ? (arr_27 [i_7 + 1]) : (arr_27 [i_7 - 1])));
                        var_17 ^= ((((1 ? 1 : 1)) * (arr_5 [i_7 + 1] [i_8 + 1])));
                    }
                }
            }
            var_18 *= ((-((-15 ? 0 : (arr_27 [i_0])))));
            var_19 ^= (arr_22 [i_0] [i_0] [i_0] [i_7] [i_7] [i_0]);
        }

        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            var_20 = (arr_11 [i_0] [i_0]);
            var_21 = min(((min(((max(54401, (-127 - 1)))), ((26 ? 255 : 21))))), (arr_13 [i_0] [i_10] [15] [i_0] [i_10]));
        }
    }
    #pragma endscop
}
