/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_1, ((~(min(1262961058960960431, 1262961058960960431))))));
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((min(((-2135 & ((8796093022207 ? 17183783014748591177 : -101)))), (((((-1 ? 16383 : -101))) ? (~var_9) : (18 & 72056494526300160))))))));
                            arr_10 [i_3] [i_2] [i_1] [i_0 - 2] |= (min((((-25666 < ((150 ? -43 : 118))))), var_3));
                            var_20 = 43540;
                            arr_11 [i_3] [i_2] [i_1] [15] [i_0 - 1] = (arr_9 [i_0] [15] [i_1] [15] [i_2] [6]);
                        }
                    }
                }
                arr_12 [i_1] [i_0] = ((((arr_2 [i_0] [i_1]) ? (arr_2 [i_1] [i_0]) : (arr_2 [0] [i_0 - 2]))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [19] [19] [i_0] [i_6] = ((39691 ? (((+((((arr_2 [i_0] [i_1]) < var_4)))))) : (--6937379324698701783)));
                                var_21 *= ((((var_13 ? ((var_8 ? 1 : (arr_0 [6]))) : 77))) ? ((((max(743204344, var_0)) / (arr_19 [i_0] [i_1] [i_4])))) : (max(var_10, (max(49266, var_10)))));
                                arr_21 [i_0] = (arr_0 [i_0 - 2]);
                                var_22 ^= ((((8388600 / 17592185520128) ? 72056494526300160 : -85)) % 75);
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_1] [i_1] = (max(((18522 ? 49266 : 56744943)), ((max(-1, 0)))));
                var_23 &= (((-1938999864 ? var_14 : ((-(arr_9 [5] [i_1] [i_0] [i_0 - 2] [i_0 - 2] [8]))))));
            }
        }
    }
    #pragma endscop
}
