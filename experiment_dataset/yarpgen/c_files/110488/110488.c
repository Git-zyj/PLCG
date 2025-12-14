/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_4 - 1] [i_1] [i_4 - 1] [i_0] [i_2] = (min(2147483647, 15852388178158764484));
                                var_13 = var_5;
                            }
                        }
                    }
                    var_14 -= (((((-(arr_7 [i_0 + 1] [i_2 + 1] [i_2 + 2])))) ? (((((arr_7 [i_0 - 1] [i_2 + 3] [i_2 + 1]) && 15852388178158764484)))) : ((1 ? -24814 : -2959683591289931151))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_15 = (max(var_15, (~7420)));
                                arr_29 [i_6 + 2] [i_6] = (max(2147483644, 9223372036787666944));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_32 [i_5] [i_6 + 1] [i_6] [i_7] [i_10] = var_3;
                        arr_33 [i_6] [i_5] [i_6] [i_6] = (((min((~9825399324508425817), (-101 | 1))) << (((min(-122, -1822992629)) + 1822992646))));
                        arr_34 [i_5 + 1] [i_6] = (arr_24 [i_10] [i_6] [i_7] [i_6 + 1] [i_6] [i_5 - 1]);
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_16 = (min(var_16, (((+(((max((arr_30 [16]), var_2)) + (arr_38 [i_5] [6] [i_5 - 2] [i_5 - 2]))))))));
                        var_17 = (min(var_17, (((((!((((arr_28 [i_5] [i_5] [i_5] [i_5]) ? 60474 : 1))))) && (arr_16 [i_6]))))));
                        arr_39 [14] [i_6] [i_11] = ((min((max(var_5, -613130979), (arr_21 [i_5] [i_6])))));
                    }
                }
            }
        }
    }
    var_18 = ((((-25374 ? -5056414221701827043 : var_11))));
    #pragma endscop
}
