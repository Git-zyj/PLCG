/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = ((+(min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_19 = (max(var_19, (((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_20 *= (((((arr_4 [i_1]) ? (arr_1 [i_4] [i_2]) : (arr_2 [i_4])))));
                                var_21 = (min(var_21, ((max(3028449084647961611, (max((arr_10 [i_1] [i_2] [10] [i_1] [i_5]), (arr_10 [i_5] [i_4] [i_3] [i_2] [i_1]))))))));
                                var_22 = ((((((12465330496307408519 <= ((((arr_9 [i_5]) ^ (arr_7 [i_3] [i_3])))))))) != (max(15759920542875788594, 3215673244))));
                                var_23 = (((arr_4 [i_4]) ? (((~(arr_5 [i_1])))) : (((arr_10 [i_1] [i_2] [i_2] [i_1] [i_4]) ^ (arr_9 [i_1])))));
                                var_24 = (arr_7 [i_1] [4]);
                            }
                        }
                    }
                    var_25 = (!((min((arr_8 [i_3] [i_2] [i_1] [i_1]), 9882623867846074589))));
                    arr_16 [i_2] &= ((((12465330496307408519 ? 2686823530833763034 : 12796))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_26 = ((max((arr_8 [i_1] [i_7] [i_8] [i_9]), (arr_8 [i_1] [i_1] [i_8] [i_9]))));
                                var_27 = ((((arr_27 [i_1] [i_6] [i_7] [i_8] [i_9]) ? (arr_9 [i_1]) : (arr_9 [i_8]))));
                            }
                        }
                    }
                    var_28 = ((((157 ? 2188293859714154117 : 11314011578992433073)) * (((39 ? (arr_14 [i_1] [i_6] [i_7] [1]) : (arr_10 [i_1] [i_1] [i_6] [i_7] [i_7]))))));
                }
            }
        }
        var_29 -= (!((min(1464735791179981909, (arr_27 [i_1] [i_1] [6] [12] [i_1])))));
    }
    var_30 = ((var_3 | ((((!(11314011578992433073 * var_13)))))));
    #pragma endscop
}
