/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-((((var_9 ? var_0 : var_11)) * var_3)));
    var_14 = (((((~(987961606 | 2257083985)))) ? var_6 : ((((min(2918180735, var_3))) ? var_3 : (-827080498 > 1679300281)))));
    var_15 = (((((!var_8) ? 1158836038 : (min(663821749, var_3))))) ? var_9 : var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 ^= var_3;
                            var_17 = min(1376786564, (((arr_7 [i_0] [i_1] [i_1]) ? (arr_7 [i_0] [i_1] [i_2 + 1]) : var_3)));
                        }
                    }
                }
                var_18 = (!var_3);

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_19 = (min(var_19, (max(((-1344799687 ? (1479465819 * 844855466) : (((arr_8 [16] [i_1] [i_0] [16]) / (arr_12 [i_0 + 1] [i_1] [i_1] [i_1]))))), ((((1376786585 ? (arr_7 [i_0 - 1] [22] [i_4]) : (arr_12 [i_0] [i_1] [i_4] [i_4]))) * (arr_0 [i_0 - 1])))))));
                    var_20 ^= (2257083985 * 2918180725);
                    arr_14 [i_1] = ((var_11 < (min(var_5, 1376786574))));
                    var_21 = -296882239;
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_19 [i_1] [i_0 - 1] [i_1] [i_5] = -2147483642;
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_24 [i_1] = 1679300281;
                                arr_25 [i_0] [7] [i_1] [i_5] [i_6] [i_7 + 1] = (((((var_6 ? 2257083985 : -1073741824)))) ? (arr_4 [i_1]) : ((-1344799687 & (2147483647 & 4017054511))));
                            }
                        }
                    }
                    arr_26 [i_0] [i_0 - 1] [i_1] [i_5] = 674760910;
                }
            }
        }
    }
    var_22 ^= var_3;
    #pragma endscop
}
