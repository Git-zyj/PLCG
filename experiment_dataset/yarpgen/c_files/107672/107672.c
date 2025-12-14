/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (!15876649667265688384)));
                    var_14 ^= -2065333613;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_4] [i_3] = ((15876649667265688368 ? (((-127 - 1) ? (arr_1 [i_3]) : var_7)) : (((123 ? (!1018) : ((var_8 ? 9223372036854775807 : 30663)))))));
                arr_17 [i_3] [i_3] [i_3] = ((arr_1 [i_4]) ? ((max((arr_4 [i_3] [i_4]), (arr_4 [i_3] [i_4])))) : var_5);
            }
        }
    }
    var_15 = ((~((127 ? 60809342 : var_6))));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_32 [i_5] [i_6] [i_6] [i_7] [i_8] [i_9] [i_9] = ((((((((arr_27 [i_7] [i_8] [i_7]) ? (arr_31 [i_5] [i_5] [6] [i_5] [i_5] [10] [i_5]) : 60809342))))) < 15876649667265688368));
                                var_16 = ((((~(arr_29 [10] [i_5 - 3] [i_7] [i_7 - 2] [12] [1]))) != (arr_29 [i_5 + 1] [i_5 - 1] [i_7] [i_7 + 3] [i_5 - 1] [i_7 + 3])));
                            }
                        }
                    }
                }
                arr_33 [i_6] = (arr_26 [i_5 - 1] [i_5 - 1] [i_5] [0]);
                var_17 = ((2570094406443863247 % ((((arr_25 [i_5 + 1] [i_6]) ? var_8 : (~-10))))));
                arr_34 [i_5] [i_5] = -29602;
            }
        }
    }
    #pragma endscop
}
