/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((+(((-32767 - 1) & 62)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 16;i_4 += 1)
                            {
                                var_16 = ((!(((((24275 ? var_2 : (arr_6 [i_1]))) * 0)))));
                                arr_12 [i_0] [i_2] [i_1] [i_3] [i_4] = var_6;
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_17 = ((2913457003550949165 ? 2147483647 : ((-(max((arr_9 [i_0] [i_2] [i_2] [i_3] [i_5] [i_1] [0]), (-127 - 1)))))));
                                var_18 = (((min(-74, -var_6)) > (((1 % 4) ? ((max(4, 1))) : ((36969 ? 10487 : 60))))));
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                var_19 = (max(var_19, -var_2));
                                var_20 = (arr_17 [i_0] [i_6]);
                                arr_19 [i_1] [i_2] [i_1] = ((!((max((min(3848747750, -1)), 0)))));
                            }
                            var_21 = (min(16966596024356262160, 12225));

                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                var_22 = (max(var_22, (((-32761 & ((-32767 ? 3164934150 : ((min((arr_9 [i_0] [i_0] [i_3] [4] [i_7] [14] [i_0]), (arr_5 [i_0] [i_1] [i_2])))))))))));
                                var_23 = (max(13844, (min(1075652750432887560, -123))));
                            }
                            arr_22 [i_1] = var_8;
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    arr_25 [i_0] [i_1] = (arr_1 [9]);
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_24 = (((((arr_26 [i_1] [i_1] [4] [i_9]) ? 32767 : -1409))) ? 1 : (0 + 32768));
                                var_25 = 4;
                                var_26 += 18446744073709551615;
                                var_27 |= ((((65534 || (arr_23 [i_10] [i_1] [i_0]))) ? var_9 : (arr_18 [12] [i_0] [i_9 - 3] [i_0] [i_9 - 2])));
                            }
                        }
                    }
                    var_28 = var_12;
                    var_29 = 4;
                }
            }
        }
    }
    #pragma endscop
}
