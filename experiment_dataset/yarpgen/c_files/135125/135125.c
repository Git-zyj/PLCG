/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = 2049463600;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_13 ^= (arr_8 [i_1] [i_1] [i_0]);
                var_14 ^= 2049463600;
                var_15 = 113;
            }
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] = (max(var_0, ((((var_1 < -3133736) >= (arr_6 [i_3 - 1] [i_3 + 2] [i_3 + 1]))))));
                            arr_18 [i_5] = (arr_0 [i_0]);
                            var_16 = (min(var_16, ((min((!var_11), ((var_11 && (arr_13 [i_3 - 1]))))))));
                        }
                    }
                }
                var_17 = (max(var_17, 9221120237041090560));
                var_18 -= 18446744073709551589;
                arr_19 [i_0] = (max(-2049463600, 3133730));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_24 [i_7] = (max((arr_14 [i_7]), ((-((3133745 ? (arr_0 [i_7]) : 18446744073709551589))))));
                        var_19 = ((!(arr_14 [i_7])));
                        var_20 ^= -64;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_33 [i_10] [i_8] [i_8] [i_8] [i_0] = (min((arr_26 [i_0] [i_1] [i_8] [i_8]), (min((-16 % 5), (((arr_26 [i_1] [16] [i_1] [i_1]) ? var_11 : 6845))))));
                            var_21 = (max(var_21, 113));
                            arr_34 [i_8] [i_1] [i_1] [i_1] [8] [6] = -2021141552;
                            var_22 = (min(var_22, (((((max((arr_30 [i_10] [i_10 - 2] [i_1] [i_1] [14] [i_10 - 2]), 2040))) ? (((max(25596, 25604)))) : (max((arr_29 [i_1] [i_10 + 4] [i_10 + 2] [i_10 + 1] [i_10 - 2] [i_1]), -23174)))))));
                        }
                    }
                }
            }
            var_23 = 9223372036854775807;
        }
        var_24 = (max((max((arr_4 [i_0]), (arr_4 [i_0]))), (arr_4 [i_0])));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_37 [i_11] [i_11] = (min(12689924728048792709, (arr_27 [i_11] [i_11] [i_11])));
        var_25 = arr_27 [i_11] [i_11] [i_11];
        arr_38 [i_11] = ((((-(arr_14 [i_11]))) * (!2049463600)));
    }
    var_26 = var_10;
    var_27 = (min(var_10, ((min(var_11, (var_0 <= -114))))));
    #pragma endscop
}
