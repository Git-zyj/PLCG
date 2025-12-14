/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((((143183352 / (arr_2 [i_2])))) ? ((~(arr_0 [i_2] [i_2]))) : (arr_6 [i_1 - 1] [i_2] [i_0 - 3])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_0] [i_3] = 119;
                                arr_15 [i_0] [i_2] [i_1 + 4] [i_0] = 3410227293;
                                var_17 |= (max(((max(-16911, var_5))), ((~((((arr_1 [i_4]) == 3)))))));
                                arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] = ((-89 - (-32767 - 1)));
                                arr_17 [i_0] = (i_0 % 2 == zero) ? ((((((-9223372036854775807 - 1) < ((((arr_9 [i_0] [i_1 - 1] [i_2] [i_3]) ? (arr_7 [i_4] [i_3] [i_2]) : (arr_1 [i_0 + 3]))))))) >> ((((-(((arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0]) + (arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_4]))))) + 2052450417870254599)))) : ((((((-9223372036854775807 - 1) < ((((arr_9 [i_0] [i_1 - 1] [i_2] [i_3]) ? (arr_7 [i_4] [i_3] [i_2]) : (arr_1 [i_0 + 3]))))))) >> ((((((-(((arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0]) + (arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_4]))))) + 2052450417870254599)) + 3124012646033076343))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, var_12));
    var_19 = var_8;
    #pragma endscop
}
