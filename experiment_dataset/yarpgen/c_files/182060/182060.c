/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_15;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = ((var_5 == 77) < (((((-(arr_1 [i_0] [i_0])))) / var_12)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_22 -= (min(var_11, (((~var_2) ? ((212 ? var_7 : var_18)) : (((var_8 ? -1596986587 : var_16)))))));
                    arr_8 [i_2] [i_1] [i_1] [i_1] = ((~(min(var_13, var_18))));
                    var_23 = (min(var_23, (((-40 ? (max(-1596986587, -32754)) : ((11537929729739307410 ? 0 : 17173)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_4] |= min((arr_0 [i_4] [i_3]), ((((((76 <= (arr_12 [i_4])))) > 102))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_24 = (arr_13 [i_5] [i_3 + 2] [i_3]);
                    arr_20 [i_5] [i_3 + 1] = ((arr_15 [i_3 - 1] [i_3 + 1]) || (arr_15 [i_3 - 1] [i_3 + 1]));
                }
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    arr_24 [i_3] [i_4] [i_4] [i_6] = 1;
                    var_25 = var_19;
                }
            }
        }
    }
    #pragma endscop
}
