/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] = min(var_8, ((((~44041) == (9981 < 44041)))));
                            var_12 = max((arr_9 [i_2]), (min((arr_5 [i_1] [i_0]), ((min((arr_2 [i_1] [i_1] [i_2]), (arr_2 [i_0] [1] [i_3])))))));
                        }
                    }
                }
                var_13 &= ((((arr_2 [i_1 - 2] [i_1 - 2] [i_0]) + (arr_2 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                arr_11 [i_0] [i_0] [i_1] = (max(var_4, (((min((arr_5 [i_1 - 2] [i_0]), var_7))))));
                var_14 &= ((max(4294967295, 44022)) - var_9);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    var_15 |= (~var_4);
                    var_16 = ((((min((arr_8 [i_6 + 1] [i_5] [i_5 - 1] [i_4]), (arr_9 [i_5 + 1])))) ? (arr_8 [i_4] [i_5] [i_5 - 1] [i_6 - 1]) : ((var_1 ? (arr_8 [i_4] [i_4] [i_5] [i_6]) : (arr_9 [i_4])))));
                    arr_20 [i_5] [i_6] = (max(1178324310, (max(13724, ((var_0 ? var_10 : var_1))))));
                }
            }
        }
    }
    var_17 = ((var_5 ^ ((-var_5 ? var_4 : (max(var_10, var_4))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                arr_25 [i_7] [i_8] = (max(((max((arr_21 [i_7] [i_8]), (arr_21 [i_7] [i_7])))), -44036));
                arr_26 [11] [i_8] [i_8] = ((((((arr_2 [i_7] [i_7] [i_8]) % var_4))) - (max((!var_11), (min(926888721, (arr_21 [i_7] [i_8])))))));
                var_18 = ((-(11157151284267509561 || 27389)));
            }
        }
    }
    #pragma endscop
}
