/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] [i_2 - 1] [i_3] [i_4] = ((!(arr_5 [i_0] [i_1] [i_2])));
                                arr_11 [i_1] [i_1] [i_1] [i_4] [i_2 + 2] = (arr_8 [i_2]);
                                var_14 = var_5;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_15 = ((((arr_2 [i_5 - 1] [i_1 + 2]) ^ 100383916)) >> (((arr_2 [i_5 + 4] [i_1 - 1]) - 13424)));
                            var_16 = (((arr_14 [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_1]) - (max(var_10, ((var_10 ? -1357244640 : var_12))))));
                            var_17 -= ((((~(max(var_1, var_8))))) > ((((max(-115, var_10))) ? (((min((arr_7 [i_0] [i_1 + 2] [i_5 + 3] [i_6 + 1]), var_10)))) : ((var_6 ? var_11 : (arr_8 [i_6]))))));
                            var_18 = (min(var_18, ((((((-((var_8 ? var_11 : var_9))))) ? (min((((arr_14 [i_0] [i_0] [i_1] [17] [i_6 + 2]) / (arr_13 [i_0] [i_0]))), var_2)) : (!-0))))));
                            var_19 = 120;
                        }
                    }
                }
                var_20 *= (arr_9 [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_21 += var_10;
    var_22 = ((max(-122, var_7)));
    #pragma endscop
}
