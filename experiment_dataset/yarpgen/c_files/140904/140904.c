/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (((((var_3 ? (((var_8 > (arr_4 [i_1] [i_1] [i_3])))) : var_5)) & (((((var_5 + 2147483647) >> (((arr_4 [i_1] [i_2] [i_3]) - 48672)))) | (~1908798088))))))));
                            arr_11 [i_0] [i_0] [i_2] [i_3] [4] &= (1776747241 >= (((-996949026 ? 17238 : -1776747242))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = var_1;
                            arr_13 [i_0] [i_1] = (12003056519855597654 <= -3503462836692294262);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 7;i_5 += 1)
                    {
                        {
                            arr_20 [i_4] [i_1] [i_4] [i_5] = (((min((arr_19 [i_1] [i_1 + 2] [4] [4] [i_1 - 1] [i_1]), (arr_19 [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 2] [i_1]))) * (-1776747255 > -5247885248443380179)));
                            var_13 = (((868554884587741547 && (arr_6 [i_0] [i_1] [i_4]))) ? (((((max(var_1, (arr_14 [i_0])))) >= (arr_5 [6])))) : (((((arr_10 [1] [i_1] [i_1] [8] [i_1]) ? -15 : 48297)) << ((((var_4 ? (arr_3 [i_1]) : 1)) - 2119543216)))));
                            arr_21 [i_0] [i_1] [i_4] [i_4] [i_5] = (((arr_10 [i_1] [i_4] [i_4] [i_0] [i_1]) ? var_7 : ((min(((1776747257 ? 1776747234 : 8120)), 12)))));
                            var_14 = var_1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_15 = ((!(arr_14 [i_7])));
                            var_16 = min(42, (51 / 868554884587741539));
                            var_17 = (min(var_17, (arr_18 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2])));
                            arr_28 [i_0] [i_6] [i_6] [i_7] [i_1] = (arr_15 [i_1] [i_1] [4]);
                        }
                    }
                }
            }
        }
    }
    var_18 = -var_10;
    #pragma endscop
}
