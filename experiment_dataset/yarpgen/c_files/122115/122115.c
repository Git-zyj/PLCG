/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min(var_11, var_0)), -var_7));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 *= (((arr_1 [i_0]) ? 4294967295 : (((((!var_5) || (((21 ? (arr_3 [2] [2]) : var_14)))))))));
        var_19 = (3660365329 * (((arr_1 [i_0]) ? ((634601966 & (arr_0 [i_0]))) : var_11)));
        var_20 = var_2;
        var_21 -= -634601982;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((var_10 ? (arr_2 [i_1] [i_1]) : var_1))) ? ((var_8 ? (arr_1 [i_1]) : 127)) : var_6));
        var_22 = (arr_1 [i_1]);
        var_23 = ((((arr_4 [i_1]) ? (arr_3 [i_1] [1]) : var_15)));
        var_24 += (((arr_5 [8] [8]) == var_5));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_25 += ((634601947 ? var_4 : (((arr_1 [i_1]) * 0))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_26 = (arr_9 [i_1] [i_2] [i_1] [i_3]);
                        var_27 -= 127;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_24 [i_2] [i_6] [i_1] [i_2] [i_2] = (((((13652 ? var_13 : 3660365335))) ? (~var_15) : var_10));
                            arr_25 [i_1] [i_2] [8] [i_2] [i_2] = ((634601958 ? (((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) ? 4294967279 : 5147814160629853948)) : (arr_11 [i_1] [i_6] [i_5] [i_2])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
