/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((((~(27423 + var_12)))) || ((((-1 - var_0) / (max((arr_3 [i_0]), (arr_3 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = ((((arr_0 [i_1]) / -107)));
                            arr_10 [i_3] [16] [i_2] [i_2] = (max((~55), (((-(arr_0 [i_1]))))));
                            var_17 = (max(78, ((var_14 ? (arr_8 [i_2 - 3] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : var_4))));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_18 = ((-(((!((min(var_3, 28326))))))));
                                var_19 += -3172483520;
                            }
                            for (int i_5 = 4; i_5 < 17;i_5 += 1)
                            {
                                arr_15 [i_2] [i_2] [9] = (arr_1 [i_0] [i_1]);
                                var_20 = (max(var_20, (((+(min((~127), (((arr_14 [i_0] [19] [3] [i_3] [i_0] [i_5 + 1]) ^ (arr_7 [i_0] [i_1] [17] [i_0]))))))))));
                                var_21 = (((((!((min(28326, 2))))))) / (((((18446744073709551615 ? 203 : 878781057))) * 4)));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2] = (!18446744073709551615);
                            }
                            var_22 = (min(var_22, ((((((max(var_7, (arr_9 [i_0] [i_0] [i_0]))) / (arr_4 [i_0] [i_0]))) * (~0))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, var_12));
    var_24 = (((((39 ? 183 : (255 - var_14)))) ? ((-((max(178, 28326))))) : (max(248, -13))));
    var_25 = ((~var_12) ? ((var_3 << (var_7 + 3972953360451968602))) : 1);
    #pragma endscop
}
