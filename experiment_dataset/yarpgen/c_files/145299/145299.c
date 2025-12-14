/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 42272))))) ? -6 : (arr_1 [i_0])))) : (((((((arr_1 [i_0]) >> (((((arr_1 [i_0]) - 42272)) + 2096))))) ? -6 : (arr_1 [i_0]))));
        arr_3 [i_0] = ((~(15617343187007562756 ^ -6)));
        arr_4 [i_0] = (~var_9);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_15 [18] [i_2] [i_2] [18] = (((((10087 ? 7136149341149088236 : 11310594732560463365))) ? (((((11310594732560463365 / (arr_7 [i_2] [10] [i_4])))) ? (arr_5 [1] [1]) : ((var_3 ? (arr_7 [20] [0] [0]) : 60633)))) : ((((min(var_8, var_0))) ? (arr_11 [i_4] [17] [17]) : var_7))));
                        arr_16 [i_1] [i_1] [i_3] [i_4] = ((((min((arr_9 [i_1] [i_1]), var_0))) ? ((-17989 ? -6 : 8064)) : (min((((arr_5 [i_1] [i_1]) ? var_5 : 106)), (((arr_13 [i_4] [i_4] [i_3] [i_4] [i_1]) ? 252 : (arr_9 [i_1] [i_1])))))));
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] = (arr_10 [i_4] [i_4] [i_1]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_25 [i_1] = ((var_6 > ((~(arr_18 [i_6] [i_1] [i_5 - 1])))));
                        arr_26 [i_1] [i_5 - 1] [i_6] [i_6] [i_6] = ((~(min((arr_10 [i_6] [1] [i_6]), (~167)))));
                        arr_27 [i_7] [i_1] [i_1] [i_1] = (((((~(!1)))) ? (arr_11 [17] [i_5 - 1] [i_6]) : var_1));
                        arr_28 [i_1] [7] [7] [7] [7] = var_7;
                    }
                }
            }
        }
    }
    var_11 = var_2;
    var_12 = (max(var_4, var_6));
    #pragma endscop
}
