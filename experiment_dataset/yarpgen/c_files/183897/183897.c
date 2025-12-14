/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 3] = (((((!((min(169, var_2)))))) < ((-((min(var_5, (arr_4 [i_0]))))))));
                    var_14 = ((((((arr_7 [i_1 + 2] [9] [i_2]) << (((arr_7 [i_1 + 2] [i_2] [i_2]) - 950729960))))) ? 65535 : ((-19806 ? var_6 : 10))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 *= (min(((min((((9275775601559306659 && (arr_10 [13] [i_1 + 2])))), (arr_1 [i_1])))), (((((arr_11 [i_0] [i_1 - 1] [i_3] [i_4] [i_1 - 1] [i_4]) + 9223372036854775807)) << (((((arr_9 [i_1 - 2]) | var_9)) - 6749751521916735482))))));
                                var_16 -= (arr_5 [i_0]);
                                var_17 += ((min(9223372036854775807, 18446744073709551587)));
                                var_18 = ((-(((arr_3 [i_2 + 2] [i_2]) >> (((arr_3 [i_1] [i_1 + 2]) - 16323))))));
                            }
                        }
                    }
                    var_19 = ((((((var_11 ? 18446744073709551587 : -6054460319857649577)))) ? (((max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), ((((arr_10 [i_0] [i_0]) == (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : (48 & 552503856)));
                }
            }
        }
    }
    var_20 = (min(((min(((var_11 ? 31997 : var_0)), ((min(var_7, var_0)))))), (min(((max(var_9, var_2))), ((28 ? var_6 : 0))))));
    #pragma endscop
}
