/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_7 [i_0] [6] = ((max(((1 ? 1 : 1), 145))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 = ((((~14821) ? -5956122414863092169 : (~1))));
                            var_18 = (9223372028264841216 <= -1767677085249926200);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_19 = ((((1193108241 < 1) ? 0 : (arr_3 [i_1] [i_1 + 1] [i_1]))));
                            var_20 = (max(var_20, (((max(var_14, 1073741824))))));
                            var_21 = (((!1) ? 1 : ((((var_11 ? -14826 : var_7))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (((var_12 ? 145 : 14846)));
    var_23 = (min(var_23, 0));
    var_24 = var_9;

    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_22 [12] [i_7] [i_7] = (1 + -4906864955791725162);
            var_25 = 3918312135;
            arr_23 [6] = -14827;
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                {
                    var_26 = (min(var_26, ((((((-4906864955791725162 ? 30099 : (!-329786920)))) ? (((2 ? var_0 : var_1))) : (((((~(arr_26 [4] [i_8 + 2] [i_8 + 2])))))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_27 = -623641475533942760;
                                arr_33 [i_9 - 1] [i_9] [i_9 + 1] [i_9] [i_9 - 1] = (max(var_9, (arr_15 [i_6] [i_6] [i_6])));
                                arr_34 [i_10] [16] [i_10] [i_10] [2] = ((83 ? (((((arr_28 [i_9]) ? 83 : -35)) + -1268528089)) : (arr_17 [i_6] [i_6])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
