/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 2] [2] [i_0] [i_3] = (min((max(-var_7, ((var_3 ? var_1 : var_0)))), (((min(var_11, var_6))))));
                            var_12 = ((+(((-25008 < 15) & (~1)))));
                            var_13 *= (!((max((var_10 - var_10), var_6))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_14 = (var_4 ^ var_10);
                            arr_17 [i_0] [i_0] [9] = var_9;
                            arr_18 [i_0] [i_1] [i_1] [1] = min((!var_7), ((min(-7, 8329855711731269885))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_15 = var_4;
                                var_16 ^= ((~(!var_3)));
                                var_17 = (min(var_17, (((((max(119, 1))) ? (~29357) : (min(7280621704235155868, (((18040343803580903153 ? 1050919153 : 0))))))))));
                                var_18 -= (min((max(var_6, (!var_11))), ((min(1, 25785)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_19 = ((~(((!((min(var_7, var_2))))))));
                                var_20 = (min((((!var_11) ? 2147483647 : (max(var_11, var_6)))), ((~(var_1 == var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
