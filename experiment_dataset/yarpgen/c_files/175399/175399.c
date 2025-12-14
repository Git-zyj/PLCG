/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max((var_4 + var_10), (22396 || 1968867883))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = (max(var_15, 1871411342808086910));
        var_16 = (max(var_16, ((max((arr_0 [8]), (arr_1 [9] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_17 = ((((~(-838467270 ^ 27963))) * var_6));
            arr_8 [i_1] = var_10;
            var_18 = (max(var_18, (((var_2 << (18446744073709551615 - 18446744073709551592))))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_19 ^= ((arr_7 [i_1]) ? (min((arr_5 [i_3]), (((arr_1 [i_1] [i_1]) / 9283701125849069072)))) : ((((min(var_12, var_9))) ? (((arr_0 [i_1]) ? var_0 : var_2)) : (arr_6 [i_1]))));
            arr_12 [i_3] = 2147483647;
            var_20 = (max(var_20, ((max(((13915704352280206140 ? -16351636839412642082 : -1)), ((((var_3 ? var_7 : (arr_5 [8]))))))))));

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                arr_16 [i_4] [i_3] [i_1] = (max(((((arr_10 [i_4 - 1]) / (arr_10 [i_4 - 1])))), ((-3004190510496363139 / (arr_10 [i_4 - 1])))));
                arr_17 [i_1] [i_4 - 1] [i_4] = (min(18446744073709551615, ((~(arr_14 [2] [i_1] [i_4 - 1] [i_4])))));
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 7;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_21 = (min(var_21, var_10));
                                arr_28 [i_1] [i_5] [i_6] [i_7] [4] &= -60;
                                var_22 = (min(var_22, (arr_13 [i_1] [i_1] [i_1])));
                                var_23 = (!1371075544470914530);
                                arr_29 [i_1] [i_5] [i_5] [i_7 + 2] [i_7 + 2] = (min(0, (min(((((arr_25 [i_8 + 2] [i_5] [i_5] [i_1]) != (arr_22 [i_5] [1] [i_8 + 2])))), (min(1061199173, var_4))))));
                            }
                        }
                    }
                    arr_30 [i_5] [i_6] [0] = ((10451 ? 2147483647 : 1165291684));
                }
            }
        }
    }
    var_24 = (max(var_24, (((+((var_1 ? (9499021916383577624 - 26486) : ((max(1733588565, -111))))))))));
    #pragma endscop
}
