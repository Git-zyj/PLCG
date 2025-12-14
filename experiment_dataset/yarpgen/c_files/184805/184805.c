/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [12] = (min((max((15981515984115357653 ^ 1), var_8)), ((max((arr_2 [i_1] [i_2 + 3]), var_12)))));
                            var_18 &= (max(((((213 + 43) <= (!209)))), (arr_7 [5] [i_1] [i_2 - 2])));
                            arr_11 [9] [i_1] [12] [i_1] [9] [i_3] = ((!((((arr_2 [i_2 + 3] [i_0 - 1]) ? (arr_2 [i_2 - 2] [i_0 - 1]) : (arr_6 [i_2 - 2] [i_2 - 3]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_19 = ((((-(arr_6 [i_5 + 1] [i_0 - 2])))) ? ((38 ? 0 : 188)) : (~127));
                                arr_20 [i_1] = -10413;
                                arr_21 [i_0] [i_0] [i_4] [i_5 - 1] [i_4] = (max(((max(((-1078022329742255562 ? 46376 : 21)), ((31728 ? (arr_18 [i_1] [9] [i_4] [i_1] [i_0]) : var_10))))), (min(61, (-1 ^ -2123741491537449832)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_20 += ((!((((arr_8 [i_8] [i_7] [i_1] [i_0 - 1]) >> (((arr_26 [i_1] [i_8]) - 49143)))))));
                            arr_27 [i_0] = 23;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_32 [i_0] [i_1] [i_9 - 1] [7] [i_10] = (arr_30 [i_0 + 1] [i_0 + 1] [13] [i_0 - 2]);
                            var_21 = (!((((!var_5) ? (min(248635379, 255)) : 1))));
                            arr_33 [i_0] = ((-((((((arr_5 [3] [i_1]) != 127))) % var_16))));
                            var_22 = (min(var_22, (((~(arr_28 [i_9 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_23 += var_15;
    #pragma endscop
}
