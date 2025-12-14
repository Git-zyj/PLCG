/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_15 -= ((((min(var_1, (arr_2 [0])))) ? (arr_3 [i_1]) : -var_12));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((((!((!(arr_5 [i_1 - 2] [i_0 - 1]))))) || ((((arr_3 [i_0 + 2]) ? (((((arr_4 [i_3]) && -2001818372)))) : (arr_1 [12] [12])))))))));
                            arr_12 [i_0] [i_0] [i_2] [8] [i_3] = ((!(((~(arr_3 [i_0 + 1]))))));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_15 [i_2] |= arr_11 [i_1 - 1] [i_3];
                                var_17 = (min(var_17, ((min(((((((arr_9 [i_2] [i_3]) + 0))) ? var_10 : (arr_8 [i_0 + 1] [i_1 - 2] [i_1] [i_0] [i_0 + 2] [i_0 + 1]))), ((((arr_14 [i_3] [i_3] [i_0 + 2] [i_0 + 2] [7] [i_2] [i_1 - 2]) <= (~var_0)))))))));
                                var_18 += ((+(max((arr_14 [i_0] [i_4] [i_3] [i_0] [i_2] [i_1] [i_0]), ((var_8 ? 255 : (arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_4] [i_3] [i_1 - 1])))))));
                                var_19 += ((~(arr_10 [i_1 - 2])));
                            }
                            var_20 = ((11561488033519500955 ? (arr_0 [i_0] [i_0 + 2]) : (((arr_7 [i_1 - 1] [i_0 + 1]) ? (arr_9 [i_1 + 1] [i_0 + 1]) : (arr_7 [i_1 - 1] [i_0 + 1])))));
                            var_21 = (max(var_21, (arr_8 [i_3] [i_2] [i_1 - 2] [i_1 - 2] [i_1] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, ((((((var_10 ? var_4 : var_11))) ? var_9 : ((((max(var_6, var_3)) == 4503599627370495))))))));
    #pragma endscop
}
