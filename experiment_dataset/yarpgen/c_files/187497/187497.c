/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [1] [i_0] = (max(1, 767251259));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((1 >> (4294967286 - 4294967264)))))));
                    var_16 *= (((arr_8 [i_2] [i_0] [i_0] [i_0]) ? (max(var_13, (arr_5 [i_2 + 1] [i_2]))) : (((min(1, var_0))))));
                }
            }
        }
    }
    var_17 = (min(var_17, (((~((2293938267 ? ((1 ? 60 : var_9)) : (((min(127, 0)))))))))));
    var_18 = 9;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        arr_17 [i_3] = (!9);
                        var_19 = (min(var_19, 1));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_22 [i_7] [i_3] [i_7 - 1] [i_7] [i_7] = ((((arr_15 [i_5 - 1] [i_4] [i_5] [i_3]) & 79)));
                            arr_23 [i_3] [i_3] = (!var_11);
                            arr_24 [i_3] = (arr_20 [i_3] [i_4] [i_5 + 2] [i_3]);
                            var_20 = (min(var_20, 470587449));
                        }

                        for (int i_9 = 1; i_9 < 23;i_9 += 1)
                        {
                            arr_28 [i_3] [i_3] [i_3] [8] [i_3] |= (-738198395000847985 & 125);
                            var_21 = (arr_13 [i_4 - 1] [i_3]);
                        }
                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            var_22 = 4203993063;
                            var_23 ^= 2001029028;
                        }
                    }
                    arr_32 [i_3] [i_4] [i_3] = (((~(~var_10))));
                }
            }
        }
    }
    #pragma endscop
}
