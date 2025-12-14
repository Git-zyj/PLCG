/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    var_15 = (arr_4 [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [0] [i_2 - 2] [i_0] [0] [i_0] [i_0 - 1] = (15644 << 1);
                                var_16 = arr_1 [i_0];
                                var_17 = ((-(((!(arr_9 [i_3] [i_0] [i_0] [19]))))));
                            }
                        }
                    }
                    arr_13 [i_0] [1] = (max(((!((max(var_3, 1))))), (min((((arr_8 [i_2]) < (arr_8 [1]))), (!8297)))));
                    arr_14 [i_0] [i_2] = (max((-553188964 < 885491720), (((arr_8 [i_0 + 1]) ? 109 : (arr_8 [i_0 - 1])))));
                }
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    arr_17 [i_0 - 1] [i_0] [24] [i_0] = (i_0 % 2 == zero) ? (((((9511880880709370259 << (((arr_15 [i_0] [i_1] [i_1] [21]) - 1347582720924318072)))) < (arr_15 [i_0] [0] [i_1] [i_1 + 1])))) : (((((9511880880709370259 << (((((arr_15 [i_0] [i_1] [i_1] [21]) - 1347582720924318072)) + 471931107212059977)))) < (arr_15 [i_0] [0] [i_1] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_18 = (((arr_20 [16] [i_7 + 1] [16] [i_0] [i_7] [i_7]) ? ((~(arr_20 [6] [i_7 - 1] [i_5] [i_0] [i_7] [i_0 - 1]))) : 22761));
                                arr_24 [i_0 + 1] [1] [i_0] [i_0 + 1] [1] = (arr_19 [i_5 - 1] [i_1]);
                                var_19 = var_9;
                                arr_25 [i_7 + 1] [i_6 - 2] [20] [i_0 + 1] [20] [i_1] [i_0 + 1] |= var_4;
                                var_20 &= min(169, 4294967295);
                            }
                        }
                    }
                    arr_26 [i_0] [i_1] [i_0] [i_0] = var_9;
                }
                arr_27 [18] |= (min((~var_1), ((~(133692779 & var_13)))));
                var_21 ^= (max((((!(((-(arr_1 [i_0]))))))), ((~(arr_6 [i_0] [i_1 + 1])))));
            }
        }
    }
    var_22 |= (max((!var_2), var_12));
    var_23 = ((!((max(-133692780, -3324142489183114718)))));
    #pragma endscop
}
