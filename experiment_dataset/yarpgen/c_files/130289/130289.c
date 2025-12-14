/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 - ((var_5 ? -59966 : var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 ^= (max((((var_7 > (arr_2 [i_1])))), (max(((-32754 ? 181 : 4007106379)), (max(var_7, var_2))))));
                arr_4 [10] &= 4007106379;
                arr_5 [i_1] = ((((((((var_10 / (arr_1 [i_0])))) ? ((max((arr_2 [i_1]), var_3))) : ((var_4 ? var_10 : (arr_3 [i_1] [i_1])))))) <= 4007106411));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 *= ((max(((min(247, (arr_12 [i_5])))), 2145503586)) ^ 255);
                            arr_15 [i_2] [i_3] [i_4] [4] [i_5] [i_2] = ((((max((arr_7 [i_5 - 1] [i_2 + 2]), var_2))) ? ((var_11 / ((var_8 ? 4294967274 : (arr_7 [i_2] [i_2]))))) : var_7));
                            var_20 = (((((103 - (arr_13 [i_2] [i_2] [i_4] [i_4])))) ? (min((!2147483647), (max(var_12, 28)))) : (((arr_10 [i_4]) ? ((((arr_14 [i_5 - 1] [19] [i_3] [i_2]) - var_13))) : (min(var_8, 9))))));
                            var_21 |= var_7;
                            var_22 *= (min(247, 0));
                        }
                    }
                }
                arr_16 [i_2 + 2] [i_3] = (max(var_6, (((max(1, (arr_14 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2])))))));
            }
        }
    }
    #pragma endscop
}
