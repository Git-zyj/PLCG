/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = ((var_3 < ((((min(var_2, var_3))) ? (~9763192275822753529) : (((var_10 ? var_8 : var_10)))))));
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_3] [1] = ((!((-16334312493584360392 < (arr_2 [i_0])))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_15 = (16572855157228834931 > -1);
                                arr_19 [i_0] [i_1] [i_3] = (arr_2 [i_0]);
                                var_16 = arr_16 [8] [i_3] [i_2] [i_3 + 2] [i_4] [16] [3];
                                var_17 += ((((((arr_7 [i_1] [i_3] [i_4]) != -1))) >> (var_9 - 2422349033154961508)));
                                var_18 = 106;
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_19 &= (((((arr_13 [i_5]) / (((arr_10 [i_0]) ? (arr_7 [i_2] [i_3 - 1] [i_5]) : 540696574112613961)))) == (min(1, 18446744073709551615))));
                                var_20 *= (((((((var_7 > (arr_13 [i_0]))) ? (arr_9 [17] [i_2] [16] [i_5]) : (arr_5 [7])))) && (((arr_21 [i_1] [i_1] [i_2 - 2] [i_2 - 2]) >= (arr_21 [i_0] [i_1] [i_2 - 3] [i_3])))));
                            }
                        }
                    }
                }
                var_21 &= (((arr_8 [13] [i_1]) / (((arr_17 [i_0] [i_1] [10] [i_1] [i_1]) ? 9759772157638643206 : (arr_17 [i_0] [i_1] [4] [i_1] [i_0])))));
                arr_23 [i_0] [i_0] = ((((max(38, (arr_2 [i_0])))) ? var_8 : ((-50 ? 7 : 63))));
            }
        }
    }
    #pragma endscop
}
