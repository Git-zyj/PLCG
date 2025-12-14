/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = var_17;
                    var_19 *= (!-1807496110);

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_20 = (min(var_20, 3));
                        var_21 -= (min((var_8 & var_5), ((max((arr_7 [i_2 + 1] [13] [i_2] [i_2]), (arr_3 [i_2] [10] [i_2]))))));
                        var_22 ^= ((((!(31049 | var_9))) ? ((((var_4 % var_5) > (((101 || (arr_9 [i_0] [i_0] [i_0] [i_3]))))))) : (((((max(32740, var_4))) <= (~var_1))))));
                        var_23 = (((((arr_5 [i_2 + 1]) >= (arr_5 [i_2 + 2]))) ? ((((((197 ? (arr_10 [i_0]) : (arr_1 [i_0])))) || 53))) : (min((((arr_4 [i_1] [1] [i_2 + 2]) ? 61 : var_11)), ((max(var_7, var_2)))))));
                    }
                    arr_12 [i_2 + 1] [i_1] [i_1] [i_0] = (min(((((~var_5) > var_6))), (((3152104700 % 251) << ((((-(arr_11 [i_2 - 1]))) + 171))))));
                }
            }
        }
    }
    var_24 = ((var_0 && (var_4 && 1)));

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((!var_14) ? (var_13 && var_14) : ((63 << (42199 - 42190))))))));
                            var_26 = (max(var_26, (!var_0)));
                            arr_27 [13] [i_5] [i_5] [i_5] [i_5] &= ((var_4 / (arr_19 [i_4])));
                        }
                    }
                }
            }
            var_27 = (max(var_27, ((((arr_20 [i_4] [i_4]) ? (((-(arr_17 [i_4] [19] [i_5])))) : 6557304704305201274)))));
        }
        var_28 = 32227;
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1)
    {
        arr_31 [i_9] [i_9 - 2] = ((!((((arr_30 [i_9 - 1] [i_9 + 2]) ^ ((((!(arr_15 [i_9] [i_9 + 2]))))))))));
        arr_32 [i_9] [i_9] = 32227;
    }
    #pragma endscop
}
