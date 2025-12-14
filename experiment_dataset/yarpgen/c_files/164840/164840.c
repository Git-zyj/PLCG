/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = ((-1121187223 ? 53111 : 1536));
                                var_15 = ((!(((((((arr_3 [i_0] [i_0]) ? 4214388669 : (arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])))) ? ((((arr_8 [i_4] [i_3] [i_1] [i_0]) ? var_3 : var_12))) : ((268173312 ? -10065 : 1)))))));
                                arr_14 [i_3] = (~7190);
                            }
                        }
                    }
                    var_16 *= 2450443713612513095;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_17 = 42894;
                                arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] = (arr_20 [i_7]);
                                var_18 = var_12;
                            }
                        }
                    }
                }
                var_19 = (((arr_23 [i_6] [i_6] [i_5]) ? 0 : (arr_24 [i_5])));
                var_20 = ((-(~105)));
                arr_29 [i_5] = -10075;
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_21 -= ((((var_7 % (max((arr_22 [i_5] [i_6] [i_10] [i_5]), (arr_17 [i_12]))))) / var_4));
                                var_22 -= max(65535, (arr_33 [i_5] [i_6] [i_6] [i_12]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = 4294967295;
    #pragma endscop
}
