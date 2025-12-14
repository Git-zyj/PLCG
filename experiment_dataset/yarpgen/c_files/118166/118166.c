/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_6 && -6114988093340355000) == ((var_3 ? 237 : 231))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_18 = (min((arr_1 [i_0] [i_0]), (arr_1 [5] [i_0])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_19 -= (arr_0 [10] [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_20 = (((((((arr_3 [i_0] [i_0] [i_3]) ? 2912128498 : var_8)) % 254)) - (arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_3 + 1] [i_3] [i_0])));
                            var_21 = ((-(min((((arr_12 [i_2] [i_2] [i_2] [i_2] [4] [i_0]) | 1382838800)), -0))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_22 = (min(var_22, ((min((arr_8 [i_5] [i_5] [i_5] [i_5]), (~231))))));
            var_23 |= (((-(!var_13))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_24 = (((arr_6 [i_0 + 1] [5]) ? var_5 : 56389));
            var_25 = (56380 - ((var_11 & (arr_4 [i_6]))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        var_26 = ((!(arr_17 [i_0 + 1])));
                        var_27 = (0 / var_1);
                        var_28 = ((4278023739 ^ (arr_19 [i_0 + 1] [16] [i_0 + 1] [i_0])));
                    }
                }
            }
            var_29 = (((arr_25 [i_0 + 1]) ? (arr_25 [i_0 + 1]) : (2912128508 - var_10)));
            var_30 = ((((100 ? (arr_20 [i_0 + 1] [i_6]) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6])))) ? ((((arr_20 [i_0 + 1] [i_6]) ? 0 : var_12))) : (arr_18 [i_0 + 1]));
        }
    }
    var_31 = (((~(var_7 >= 1382838797))));
    var_32 = (!var_12);
    #pragma endscop
}
