/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-(~var_9))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (((((arr_6 [i_0] [i_1] [i_1] [i_2 + 1]) > -285961375260373905)) ? var_15 : ((((((arr_1 [i_2] [i_1]) ? 2 : (arr_6 [i_0] [i_0] [i_1] [i_2])))) ? 2996259501 : (min((arr_6 [i_0] [i_0] [i_1] [i_0]), 164))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, 105));
                                var_20 = ((((((((arr_4 [i_0] [i_0]) + (arr_9 [i_0] [i_1] [i_0] [0] [i_3 - 2] [i_4]))) > (((2147483636 ? 127 : 164)))))) * ((~(103 + 170)))));
                                var_21 = (min(var_21, (((((max(((var_7 ? (arr_8 [i_1] [i_2] [i_3 - 2] [i_1]) : 4294967295)), ((max((arr_4 [i_1] [i_2 + 1]), 1665175201)))))) ? (((arr_6 [i_2 - 1] [i_2] [2] [i_3 + 3]) ? (arr_6 [i_2 + 1] [i_2 + 1] [1] [i_3 + 2]) : (arr_6 [i_2 + 1] [i_3] [i_3] [i_3 + 2]))) : (((min((arr_0 [i_3 - 1]), 0)))))))));
                                arr_11 [i_0] [i_4] [i_3 + 1] [i_0] [i_1] [i_0] = ((((1927399754 ? 11693819003768040587 : -5841705587078437857)) | ((((max(113, (arr_1 [i_0] [i_0])))) ? (((1665175183 ? 209 : (arr_5 [i_0] [i_4])))) : (max(var_1, (arr_6 [9] [i_1] [i_1] [2])))))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [i_0] = ((((((1 != 109) ? 3 : ((((arr_8 [i_0] [i_1] [i_1] [i_0]) != -1665175223)))))) || (((~((-124 ? -1665175194 : var_7)))))));
                }
            }
        }
        var_22 = ((~(arr_6 [6] [i_0] [i_0] [i_0])));
        var_23 ^= (((min(134, ((((arr_3 [i_0] [i_0] [i_0]) ? var_7 : 29650))))) * ((-2147483644 ? (arr_5 [0] [i_0]) : (min((arr_4 [1] [i_0]), var_9))))));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_20 [i_7] [i_0] [i_0] [i_0] = max((min(8098689434999901568, 8465589969593706177)), 93);
                        arr_21 [i_6] [i_5] [i_6] [i_7 - 2] &= ((max((~35887), (min(31, var_10)))) - ((((((((arr_14 [i_6] [8]) ? var_1 : (arr_4 [i_6] [i_7])))) || (~var_16))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
