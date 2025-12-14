/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((((!(arr_1 [i_0]))) ? (~24461) : (((((15143822903504547394 ? var_9 : 236))) + ((120 ? 19 : var_4))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_14 = var_9;
                                arr_13 [i_4] [i_4] [i_3] [i_2] [i_2] [i_0] [i_4] = (((arr_7 [i_0] [1] [i_2]) & (arr_9 [i_0] [i_0] [i_0])));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = (((((0 ? var_4 : var_11))) ? ((var_7 ? 1073205130 : -24461)) : (~1)));
                                arr_15 [i_4] = (((1608721073 ? 0 : var_2)));
                                arr_16 [i_4] [i_4] [i_2] [5] [7] [i_2 + 1] = (((arr_7 [i_1 + 1] [i_1 + 2] [i_2 - 1]) ? -889369625 : var_2));
                            }
                            arr_17 [i_1] [i_3] = ((((((1 >= var_0) ? (arr_11 [2] [5] [i_1] [i_1] [2] [i_2] [i_1]) : (arr_8 [7])))) ? (arr_7 [i_0] [i_1] [i_2 + 1]) : -6024357306655267554));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [1] [7] [i_7] [i_7] = (((~var_6) % (arr_0 [i_1 - 1])));
                                var_15 = ((arr_2 [i_5]) > ((-816958864 ? 18446744073709551611 : (~249))));
                                var_16 = (-((24958 ? 1 : 17670913983173627552)));
                                arr_28 [i_0] [i_7] [11] [i_6] [i_7] = -var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
