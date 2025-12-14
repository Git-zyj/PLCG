/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((6533921824793868715 ? 6533921824793868715 : 15890360824319299363)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [22] [i_1] = (((((~(var_9 == var_6)))) - ((-((var_9 ? -6533921824793868689 : 2013317820521330484))))));
                arr_5 [i_0] [10] [i_0] = 18137;

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [i_3] [i_2] = (((arr_9 [i_0] [i_1] [i_2]) && var_7));
                                arr_15 [16] [i_1] [16] [i_3] [i_1] = ((((min((~0), (((arr_2 [i_3]) ? 1 : var_10))))) ? 32767 : ((15890360824319299378 ? var_7 : (arr_10 [i_0] [i_0] [i_0] [i_0 - 2] [i_0])))));
                                arr_16 [i_2] [i_1] [i_2] [i_3] [14] = ((((((-18145 ? 2556383249390252252 : var_8))) ? (255 ^ var_4) : (-6533921824793868715 <= 1))));
                            }
                        }
                    }
                    arr_17 [i_2] [i_2] [i_1] [i_2] = (min(9, (!var_2)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] = (min(((((arr_9 [i_0 - 1] [i_6] [i_0]) && (!var_10)))), (~3)));
                                arr_24 [i_0] [12] [i_1] [i_2] [i_5] [i_6] = (((var_0 > var_6) ? (((((max((arr_18 [i_0] [i_6] [i_6] [i_2]), var_7)))) & ((-306701958 ? 28 : var_9)))) : ((-18145 ? ((var_6 ? -42994558430977800 : (arr_9 [i_0] [i_1] [i_2]))) : (var_8 || -1993297251)))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_1] = ((((~(arr_19 [7] [i_1] [i_7] [7] [i_7] [i_1]))) * ((0 / (arr_26 [i_0 + 1] [15] [i_7])))));
                    arr_29 [13] [i_1] [1] [i_7] = (~163);
                    arr_30 [i_0] = (arr_6 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
