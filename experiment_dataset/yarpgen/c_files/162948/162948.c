/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1 - 1] [i_3 + 2] = (((min((arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) ? (max((arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]))) : -38931);
                            arr_12 [i_1 + 1] = ((~((-(arr_6 [i_3 + 2])))));
                            var_14 = (((!-27228) ? ((((arr_0 [i_2 + 3]) && (arr_0 [i_2 + 2])))) : (((!(arr_0 [i_2 + 1]))))));
                            arr_13 [i_0] [i_1] [i_1] [i_0] = ((((((126 | var_4) ? var_8 : (((arr_10 [i_3] [i_2 + 1] [i_1] [i_0] [i_0]) / (arr_6 [i_2])))))) ? (min(-5290392167646255709, (((~(arr_9 [i_0] [i_1 - 1] [i_2 + 2] [i_3] [i_0] [i_2 + 2])))))) : (((~((2072300862 ? var_5 : var_1)))))));
                        }
                    }
                }
                var_15 = ((((((((-27249 & (arr_5 [i_1 + 1] [i_1] [i_1 + 1] [i_0])))) ? (((178 <= (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))) : (var_11 && 32767)))) ? (arr_7 [i_0] [i_0] [i_0]) : ((((1254601129432781795 >= 0) < ((~(arr_2 [i_0] [i_0] [7]))))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_21 [4] [i_4] [i_1] [i_4 - 2] [i_5] = var_1;
                            arr_22 [i_4] [i_5] = (arr_19 [i_1] [i_4] [i_1] [i_5] [4]);
                            var_16 ^= (arr_3 [i_5] [i_4] [i_0]);
                            var_17 = ((126 ? 196 : (1240794617 / 126)));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((~(~var_0)));
    var_19 ^= ((~(var_2 < var_3)));
    #pragma endscop
}
