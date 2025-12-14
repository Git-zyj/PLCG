/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (min(((((max(17, var_8))) & (((var_12 >= (arr_6 [i_1] [i_0 + 1])))))), ((((((var_15 & (arr_6 [i_0] [i_0])))) || var_11)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3 - 1] [i_4] = (var_8 ? ((((arr_12 [i_3 + 1] [i_3 - 1] [i_2] [i_1 - 2] [i_0]) || var_7))) : ((((var_3 ? var_4 : var_4)))));
                                arr_14 [i_0 + 2] [8] [i_0 + 2] [i_1] [i_0] &= ((((var_15 || (arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_3]))) ? ((((!(((21474 ? var_10 : var_13))))))) : -var_15));
                                arr_15 [i_0 + 1] [1] [i_1 - 2] [i_0] [i_3] [i_1 - 2] [i_4] = 268435456;
                                arr_16 [i_0 + 2] [i_0] [i_2 - 1] [i_3] [i_4] = (arr_11 [i_3] [i_3] [i_3 - 1] [i_3] [i_0]);
                            }
                        }
                    }
                    var_18 = (((((((arr_12 [i_0] [i_1] [i_0] [i_0] [i_0]) << (var_1 - 9775656898921266797))))) & ((((100 || 62) >= var_8)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            {
                arr_22 [i_5 - 2] [i_5 - 2] = (((~var_11) ? var_0 : 193));
                arr_23 [i_5 - 1] = (((((~var_5) >= var_2)) ? (min((max((arr_18 [i_5]), var_1)), var_2)) : -1));
                var_19 = ((1883875456374587985 & ((~((var_8 ? (arr_21 [i_5 - 3]) : var_4))))));
            }
        }
    }
    var_20 = (var_7 || (((max(62, var_2)))));
    #pragma endscop
}
