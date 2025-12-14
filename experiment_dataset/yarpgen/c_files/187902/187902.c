/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 += var_8;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = ((var_5 ? var_11 : var_4));
                    var_16 = (~16134);
                    var_17 &= ((var_10 ? (arr_1 [i_0 - 2]) : ((127 ? 3445629803 : 4398046511103))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((((((var_1 * var_12) - (((-1038772699 ? 3675409582 : var_8)))))) ? (min((arr_0 [i_0 - 3] [i_3 - 1]), var_6)) : (((arr_5 [i_4 + 1] [i_2 + 1] [i_0 - 3] [i_0 - 3]) ? (arr_5 [i_4 + 1] [i_2 + 2] [i_1] [i_0 - 2]) : 1038772714)))))));
                                arr_10 [i_0 - 1] [i_1] [i_0 - 1] [i_2] [i_4 + 2] = ((~(var_9 & var_3)));
                            }
                        }
                    }
                    var_19 = (min(var_19, ((min((arr_7 [i_0] [i_0] [i_1] [i_2]), ((1038772699 ? var_10 : (arr_2 [i_0 - 3] [i_0] [i_2 + 2]))))))));
                }
            }
        }
    }
    var_20 = (min(((-var_7 ? (min(var_9, var_0)) : (9223372036854775807 % 39093278))), ((max(var_4, (var_7 || var_8))))));
    var_21 = var_5;
    #pragma endscop
}
