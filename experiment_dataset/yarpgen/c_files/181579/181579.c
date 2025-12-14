/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (min((((~(!-204260910)))), ((var_6 ? ((var_10 ? var_4 : -437371030)) : (!var_2)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (((arr_4 [i_1 + 2] [i_1 - 3] [i_1] [i_1]) ? (min((arr_4 [i_2] [i_1] [i_1] [i_0]), ((max((arr_2 [i_1] [i_2]), (arr_1 [0])))))) : (max((var_6 + -437371030), 437371030))));
                    var_14 = var_0;
                    arr_6 [i_1] [i_1] [i_0] = (arr_2 [i_1] [11]);
                }
            }
        }
        var_15 = (((max((arr_5 [i_0] [i_0] [i_0]), 1987360469480095551))) ? 159 : (((((max(4, 96))) || -437371030))));

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_16 = max(((max((arr_4 [i_0] [i_0] [i_3] [i_0]), (arr_2 [i_3] [i_3 - 2])))), (max(75, 1044856998521543474)));
            arr_10 [i_0] [i_3] [i_3 - 2] = (((1 + 104) ? 106 : 1));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            arr_13 [i_0] [i_4] = (((~(arr_8 [i_0] [i_4 + 1] [i_4]))));
            arr_14 [i_4] [i_4] = var_1;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_17 *= (((arr_15 [i_6 + 2] [i_4 + 2] [i_7] [i_6]) ? ((var_7 ? -1866411079 : (arr_3 [i_5]))) : var_1));
                            var_18 = var_7;
                            var_19 += ((((((arr_15 [i_0] [i_5] [i_5] [i_7]) - -24852))) < ((-1 ? -300 : var_10))));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_20 += (((arr_16 [i_4 - 2] [i_4 + 3] [11]) ? (2347611460470662683 % 151) : var_9));
                            arr_25 [i_0] [i_6] [i_5] [i_6 + 2] [i_8] = var_5;
                            var_21 += (arr_23 [i_6] [i_6 - 2] [8] [i_6 - 2] [i_6] [i_6 + 1] [i_6 + 2]);
                            var_22 *= (arr_21 [0] [i_6 - 1] [i_6] [6] [i_8] [i_5]);
                            arr_26 [i_6] = var_0;
                        }
                        var_23 = (((arr_9 [i_5] [i_4] [i_0]) ? (((var_10 ? (arr_7 [i_5] [i_0]) : 2080166145))) : var_7));
                    }
                }
            }
            arr_27 [i_0] = 300;
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_24 = (1073741824 != -1373082188092982256);
            arr_32 [i_0] [i_9] [4] = (max(1, 45568514));
            arr_33 [i_0] [i_0] = (min((((((min((arr_22 [7] [i_0]), (arr_2 [i_9] [i_9])))) | ((1073741827 ? (arr_24 [i_0] [i_0] [i_9] [i_9] [i_9] [2]) : (arr_15 [i_0] [i_0] [i_9] [i_9])))))), (max((arr_1 [i_9]), 8126464))));
            arr_34 [i_0] [i_0] [i_9] = ((((((min((arr_0 [i_9]), var_6))) ? 15872 : 111))) != -1);
        }
    }

    for (int i_10 = 3; i_10 < 7;i_10 += 1)
    {
        arr_38 [i_10] [i_10] = (((((~(min((arr_7 [i_10] [i_10 + 3]), 2258072809372708389))))) ? 1 : 17401887075188008153));
        arr_39 [i_10] = (min(((159 ? 17401887075188008149 : 1)), 184));
    }
    #pragma endscop
}
