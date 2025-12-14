/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (var_8 % var_0);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = 56520;
                    arr_8 [i_0] [i_0] [i_2] = ((!(arr_3 [i_0] [i_0] [1])));
                    var_14 = (-8794882167011960025 || -8794882167011960016);
                }
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    var_15 *= ((((((-32767 - 1) / 9015))) ? (((var_4 >> (((arr_3 [i_3 - 2] [i_3 - 1] [i_3 + 2]) - 3928357929))))) : (((arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (arr_3 [i_3 + 2] [i_3 - 1] [i_3 - 1]) : 9015))));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_16 *= (((arr_15 [i_5] [i_0] [i_0] [i_3 - 1]) / (arr_14 [i_5] [i_5] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1])));
                            arr_16 [i_3 + 3] [i_4] [i_3 + 3] [i_4] [i_0] = ((arr_9 [i_3 + 3] [i_1] [0]) ? (arr_9 [i_3 - 1] [i_0] [i_0]) : 8794882167011960026);
                            var_17 -= ((var_10 ? var_11 : ((var_8 | (arr_2 [4] [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = (arr_13 [i_0] [i_1] [i_1] [i_4] [i_4]);
                            arr_21 [i_6] [i_4] [i_3] [i_3 + 1] [7] [i_4] [i_0] = (max(8794882167011960010, -8794882167011960026));
                            var_18 = (((max(((((arr_3 [i_0] [i_3] [i_3]) ? var_9 : 9016))), -var_12)) * ((((((-32763 ? -8794882167011960026 : -669185980)) >= (arr_17 [i_6] [i_4] [i_4] [3] [i_1] [i_1] [i_0])))))));
                        }
                        arr_22 [i_4] [1] [i_4] = (arr_11 [i_4] [i_4] [i_1] [i_4] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_3 - 2] [i_0] [12] = ((32748 ? (-32767 - 1) : -8794882167011960041));
                        arr_26 [i_0] [i_1] [i_1] [i_3] [i_7] = (((-32767 - 1) ? (~-8794882167011960046) : (arr_19 [i_7] [i_7] [i_0] [i_0] [i_3 + 2] [6])));
                        var_19 = 279954094;
                        var_20 += (arr_10 [i_7 + 2] [i_3 + 2]);
                    }
                    var_21 = (((((((max(56524, (arr_11 [2] [i_0] [i_1] [i_0] [i_0])))) ? 8794882167011960025 : (max(8794882167011960007, 2270857305202079885))))) ? (arr_1 [13] [0]) : var_7));
                    var_22 = var_2;
                }
            }
        }
    }
    var_23 = ((49164 >= ((((min(var_3, 2147483647))) ? var_5 : -198358648))));
    var_24 = var_11;
    #pragma endscop
}
