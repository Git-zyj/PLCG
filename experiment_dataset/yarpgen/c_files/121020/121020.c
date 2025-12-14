/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_11 ? 1 : -1)) * ((var_15 ? var_15 : var_17))))) ? -300 : ((var_18 ? var_1 : var_18)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = (((((min(var_0, 14)))) ? ((((((arr_0 [i_0]) ? -299 : -3283163789879510617))) ? ((var_18 ? var_4 : var_3)) : ((((arr_0 [i_0]) && 4671444473902747518))))) : 23));
                var_22 = (((((!(arr_3 [i_0] [i_1] [i_1])))) % ((var_11 ? (arr_2 [i_0]) : (arr_5 [i_0] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_23 = ((46944 ? var_16 : 14740));
                            var_24 ^= (max((arr_9 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3]), (max((max(-7212636499152482045, 3003307604)), (arr_6 [i_0] [i_2])))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_25 = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                                var_26 = 237;
                                var_27 += (arr_5 [i_0] [i_2] [i_4]);
                                var_28 = (!549989538);
                            }
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] = (((!var_3) ? ((((arr_10 [i_0] [i_1] [i_2] [i_3]) && (arr_10 [21] [21] [i_2] [i_3])))) : (arr_8 [i_0] [i_1] [i_2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_29 = (max(var_29, var_8));
                            arr_20 [i_0] [i_0] [i_5] [i_6] = min((max((arr_18 [i_0] [i_1] [19] [19]), (arr_3 [1] [1] [i_5]))), (((arr_0 [i_5]) / (arr_18 [i_0] [i_1] [i_5] [i_6]))));

                            /* vectorizable */
                            for (int i_7 = 2; i_7 < 23;i_7 += 1)
                            {
                                var_30 += ((var_4 ? (arr_4 [i_7 - 1] [i_7 + 1] [i_7 + 1]) : (arr_4 [i_7 - 1] [i_7 - 1] [i_7 + 1])));
                                arr_23 [i_0] [i_7] = ((var_13 ? (arr_15 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 + 1]) : 689));
                                var_31 ^= ((((((arr_0 [7]) >> (arr_1 [i_0] [i_1])))) ? ((((arr_9 [i_0] [i_1] [i_0] [i_5] [i_6] [i_7 - 1]) >> (var_11 - 46501)))) : (arr_8 [i_0] [i_5] [i_5])));
                            }
                            var_32 = var_1;
                            var_33 = max((-7212636499152482041 % 13361), (((arr_22 [i_0] [2] [i_1] [i_5] [i_6]) ? -9223372036854775805 : (arr_22 [i_0] [1] [i_0] [i_0] [i_0]))));
                        }
                    }
                }
            }
        }
    }
    var_34 = var_5;
    #pragma endscop
}
