/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3] [16] [i_0] [20] |= (((53527 - 21) >= ((-(arr_6 [i_0 + 3] [18])))));
                                var_10 = (((1 != -6157842418459941255) * 149));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                arr_18 [i_3] [8] [i_3] [i_3] [i_3 - 3] [i_3] = (((2593686380 ? 6917529027641081856 : (arr_8 [i_1 - 2] [i_1 - 2] [8] [i_3]))) | 1241018406);
                                var_11 = var_9;
                                var_12 = 4;
                                var_13 = (max(3053948890, 0));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_14 = (max(var_14, (((arr_20 [i_2 - 1] [i_2] [i_3 - 2] [i_3] [i_3 + 1]) ? 1701280915 : 70))));
                                var_15 = (arr_16 [i_0] [i_0] [i_0] [i_0]);
                            }
                            var_16 *= (~(min(((1241018406 << (-1 + 4))), 3053948902)));
                            var_17 = (min((min((arr_19 [i_0 - 2] [i_0 + 2] [21] [i_0 + 2] [1] [i_0] [i_0]), (max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_0 - 3] [i_0 - 3]))))), (arr_9 [i_3 + 2] [i_2 + 1] [1] [i_1 - 2] [i_0 + 3])));
                            arr_22 [12] [i_0 - 1] [i_0] [i_0 - 1] [17] [i_3] = (-1 && 2593686380);
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_26 [11] [i_0] [18] [i_7] &= 0;

                    for (int i_8 = 4; i_8 < 20;i_8 += 1)
                    {
                        arr_29 [i_0 - 2] [i_1] [i_7] [i_7] = 10;
                        arr_30 [i_0] [i_1 + 1] = (!4294967295);
                        var_18 = (!1241018383);
                        arr_31 [i_0 - 1] [i_0 - 1] [i_7] [i_8 - 2] = ((1236434827 + (arr_27 [1] [1] [i_8 + 1] [i_8])));
                        var_19 = (arr_9 [i_0 - 1] [i_1 + 1] [i_7] [i_8 - 3] [i_8]);
                    }
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        var_20 -= ((((0 ? 67108863 : (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))) - (arr_17 [i_1 + 1] [i_9 - 1])));
                        var_21 = 237;
                        var_22 = ((-67108851 ? 67108831 : 3053948913));
                        var_23 -= 9223372036854775804;
                        var_24 = (min(var_24, 1701280916));
                    }
                }
                var_25 = (max(var_25, var_3));
            }
        }
    }
    var_26 = (min(var_26, ((min(((~(max(218, 18446744073709551615)))), (!2835638002))))));
    var_27 = (min(var_27, (((((1 ? ((max(255, (-127 - 1)))) : 255)) >> (min(9, 18446744073709551615)))))));
    #pragma endscop
}
