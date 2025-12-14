/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_19 = (!-26705);
            var_20 = (max(var_20, ((((arr_1 [i_0]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]))))));
        }
        arr_7 [i_0] = (max(22, ((var_3 ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1])))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((!(arr_5 [i_2 + 4]))))));
        var_22 ^= (!var_7);
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_23 -= (((arr_10 [i_3 + 1]) / var_2));
        var_24 = max((max(var_11, (min((arr_2 [i_3]), (-32767 - 1))))), (arr_5 [i_3 + 1]));
        arr_12 [2] = (((~-5201) << ((((var_8 - ((min(var_4, 5200))))) - 25536))));
        var_25 = (max(var_25, ((min((~var_3), var_13)))));
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_26 = (((((var_6 + (arr_18 [i_6] [i_5 - 4] [i_5] [i_5])))) ? ((~(arr_22 [i_5] [i_5 - 2] [i_5 - 4] [i_5 - 4] [i_5 - 1] [i_5 - 2]))) : ((~(arr_11 [i_4 + 3] [i_5 - 2])))));
                                var_27 = ((var_17 ? var_5 : (max((((arr_17 [i_4] [i_5] [i_6]) ? var_10 : (arr_14 [12]))), ((min(5200, (arr_11 [i_6] [i_8]))))))));
                            }
                        }
                    }
                    var_28 = (((((arr_20 [6] [i_5 - 2]) ^ (arr_17 [i_4] [i_4 - 1] [i_5 - 4]))) * (arr_17 [i_4] [i_5] [i_6])));
                }
            }
        }
        var_29 -= -var_5;
        var_30 = (max(var_30, ((max(((min(var_9, (max(-5186, var_10))))), ((-(arr_13 [4]))))))));
    }
    var_31 = var_14;
    #pragma endscop
}
