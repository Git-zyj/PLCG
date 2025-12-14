/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((-59 ? ((-7755108166311920429 ? -7755108166311920429 : 52)) : (((var_10 * 1) / var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((-(((arr_2 [i_0 - 2]) ? var_6 : (arr_2 [i_0 - 1])))));
                arr_6 [i_0] [i_1] = (1 | 1);
                arr_7 [i_1] [i_0] = ((((min((((arr_0 [6] [6]) - (arr_3 [i_0] [i_1]))), (((arr_4 [i_0] [i_1]) - 1))))) ? (((arr_3 [i_1] [i_1]) ? (arr_0 [i_0] [i_1]) : (arr_3 [i_1] [i_0 + 2]))) : 1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        var_20 -= var_10;
                        var_21 -= ((-((186 ? 7755108166311920419 : (((max((arr_18 [i_2] [i_5 - 3]), (arr_15 [i_2] [i_2] [i_2])))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_22 = (((arr_20 [i_3]) ? var_3 : (var_11 + var_5)));
                        var_23 = 4095;
                        var_24 = (((arr_15 [i_4 - 1] [i_4] [i_4 - 1]) ? 13 : var_0));
                        var_25 = (((((-13 + (arr_21 [i_4] [i_4] [i_4] [i_6] [i_6])))) ? (arr_12 [i_6] [i_4] [i_2]) : (arr_21 [i_2] [i_3] [i_3] [i_6] [1])));
                        var_26 = (arr_11 [i_6] [i_4 + 1] [7]);
                    }
                    var_27 ^= (((arr_17 [i_2] [5] [i_4 - 2] [i_2]) ? (!var_3) : (min(-2570562489111661416, (arr_18 [i_2] [2])))));
                }
            }
        }
    }
    #pragma endscop
}
