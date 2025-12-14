/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_1] = (((var_1 ? (arr_2 [i_0 + 1]) : 2403402587)));
            arr_7 [i_0] [i_0] [i_0] = (max((174 + 3003864234), (((81 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_16 -= (((arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]) && 15098));
                            var_17 += (arr_21 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]);
                            var_18 &= ((1 ? 31285 : 1));
                            var_19 *= (1 ^ 2154411013);
                            var_20 = ((arr_8 [i_5] [i_0 - 1] [i_0 - 1]) || (arr_8 [i_0] [i_0 + 1] [i_0 - 1]));
                        }
                    }
                }
            }
            var_21 = var_8;
        }
        var_22 = (((arr_2 [i_0 + 1]) || ((max((arr_17 [i_0 - 1] [i_0 + 1]), 26046)))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_24 [i_6] = ((~(((((arr_22 [i_6]) == (arr_23 [i_6])))))));

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_23 = ((-(!1)));
            var_24 = 1;
            arr_27 [6] &= ((1 + ((((min((arr_23 [i_7]), 1))) ? 1 : (arr_26 [i_6] [i_7])))));
            var_25 = (arr_23 [i_6]);
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_32 [i_6] [i_8] [i_8] = (arr_30 [i_8]);
            var_26 = ((((max(2254215932, (arr_25 [i_8] [i_8])))) ? ((((arr_31 [i_6] [i_8] [i_6]) + (arr_31 [i_8] [i_6] [i_6])))) : (!var_0)));
        }
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            var_27 = ((!((((arr_26 [i_9 - 1] [i_9]) ? 1 : (arr_34 [i_9 + 2]))))));
            var_28 = ((!((((arr_33 [i_9 + 2] [i_9 + 2] [i_9]) ? 0 : (arr_33 [i_9 - 1] [i_9 - 1] [i_9]))))));
        }
        var_29 |= ((!((max(97, 1)))));
        var_30 = 1;
        var_31 *= var_7;
    }
    var_32 += var_14;
    #pragma endscop
}
