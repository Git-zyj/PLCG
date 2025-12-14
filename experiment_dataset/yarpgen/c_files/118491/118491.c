/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (((((arr_0 [i_0]) - (arr_0 [i_0]))) - ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_20 = ((+((min((!var_1), 1)))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 ^= (max(-var_16, (((((min(var_2, (arr_0 [6]))))) / (arr_4 [i_1 - 1])))));
                        arr_12 [i_3] [i_3] = (arr_0 [i_2 - 2]);
                        arr_13 [i_0] [i_3] = ((((((arr_6 [i_0] [i_0] [i_3 + 3]) ? var_17 : 1))) ? (arr_6 [9] [i_2 + 1] [i_3 + 2]) : ((((!(arr_6 [i_2 + 1] [i_3] [i_3 - 1])))))));
                        var_22 = ((var_8 * (arr_11 [i_0] [i_0] [3] [i_3])));
                        arr_14 [i_3] = var_17;
                    }
                }
            }
        }
        arr_15 [i_0] = 864691128455135232;
    }
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        arr_20 [i_4 - 1] = (arr_17 [i_4] [9]);
        arr_21 [i_4] [i_4] = (((arr_5 [i_4 - 1] [i_4 - 3]) ? var_17 : ((((arr_10 [i_4 - 3] [4] [i_4] [i_4]) != (1 < 3756))))));
        var_23 -= (!1);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_24 ^= (min((max((arr_8 [i_4] [i_4]), (arr_11 [i_5 - 1] [i_5 - 1] [i_5] [i_5]))), (((arr_22 [i_4] [i_4 - 1] [i_4 - 1]) | (arr_22 [i_4 - 2] [i_4 - 1] [i_4])))));
                    var_25 *= 1;
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_26 ^= ((~(max(((((arr_6 [i_4] [i_6] [i_6]) / (arr_27 [i_4 + 1] [i_4 + 1] [0])))), var_14))));
                                arr_31 [i_4] [i_5] [6] [i_7] [i_7] = (arr_27 [i_4] [i_7 - 3] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_16;
    #pragma endscop
}
