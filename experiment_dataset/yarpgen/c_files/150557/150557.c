/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 -= (-((4586035275130772192 ? ((min((arr_4 [i_0]), (arr_0 [i_0])))) : (((arr_0 [i_0]) ? (arr_1 [0] [0]) : (arr_4 [i_1]))))));
                arr_6 [i_0] = ((-((-(arr_1 [i_0] [i_0])))));
                arr_7 [i_1] [i_0] [i_0] = (max((arr_0 [7]), (arr_1 [i_0] [i_1])));
                arr_8 [i_0] [i_0] = 4586035275130772191;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((((arr_10 [i_5]) && ((max(var_9, (arr_9 [i_2] [i_3]))))))))));
                                var_17 = -4586035275130772192;
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_18 += (((((((arr_12 [19] [i_3] [i_7]) + 14))) ? (arr_13 [i_3 + 1] [i_3]) : (((arr_10 [i_3]) ? (arr_18 [i_2] [3] [i_3 + 1] [i_2] [i_2]) : (arr_17 [i_2] [0] [i_2]))))));
                    var_19 -= (((arr_20 [i_3 + 1]) || ((min((arr_20 [i_3 + 1]), (arr_20 [i_3 + 1]))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    var_20 |= ((-(arr_19 [16] [i_3 + 1] [8] [i_8] [i_8])));
                    var_21 = (((~-5468497669197969214) ? (arr_25 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) : (arr_22 [i_2] [i_3 + 1])));
                    var_22 -= 0;
                }
            }
        }
    }
    var_23 = (min((((((-421555072 ? var_1 : var_12))) ? (~var_7) : var_13)), (((((max(var_9, var_14))) ? (var_13 == var_1) : -4586035275130772191)))));
    var_24 = (!-6917544499119698972);
    var_25 = (max(var_7, ((((((var_11 ? var_10 : var_4))) ? (!var_12) : ((min(var_3, var_5))))))));
    #pragma endscop
}
