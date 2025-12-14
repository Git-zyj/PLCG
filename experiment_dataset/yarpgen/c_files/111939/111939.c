/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((var_7 ? 14982938285476351407 : var_2))) ? (min(var_2, var_8)) : var_9)) + var_5));
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = 112;
                                arr_13 [i_0] [i_1] [i_2] [i_3] [4] = (arr_1 [i_0]);
                                var_20 = ((((max((arr_7 [7]), (arr_7 [i_0])))) ? (min((((65535 >> (3463805788233200209 - 3463805788233200194)))), (9223372036854775807 & var_12))) : -178132411));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [12] [i_6] [i_0] [i_1] |= (((((((5 ? var_1 : 7490393044385126487))))) == ((var_12 ? 2688861093 : (((min((arr_5 [i_0] [i_1] [i_0]), var_10))))))));
                                var_21 = ((((((~(arr_16 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))) + 9223372036854775807)) >> ((((~((-(arr_2 [1] [i_1]))))) - 170))));
                            }
                        }
                    }
                    var_22 = ((((((arr_11 [i_0]) ? var_7 : 0))) ? (arr_15 [i_0] [i_1] [i_2] [i_2] [i_0] [5]) : 14982938285476351407));
                }
            }
        }
    }
    var_23 = ((((max(var_16, (var_1 == 127)))) ? var_14 : var_7));
    #pragma endscop
}
