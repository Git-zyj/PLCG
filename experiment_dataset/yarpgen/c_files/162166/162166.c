/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = (((min((arr_1 [i_2]), var_7)) + ((((56 == (arr_1 [i_0])))))));
                    var_11 += (((arr_3 [i_2]) || ((((((44 << (55 - 38)))) ? 55 : 58)))));
                    arr_8 [i_1] [6] = min((((arr_6 [i_0] [i_1]) | var_2)), ((((arr_6 [i_0] [i_2]) ? (arr_5 [i_0]) : (arr_5 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_12 = (((~var_9) ? (arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]) : 57));
                                arr_15 [i_3] [i_3 - 1] [i_2] [i_3] [i_1] [i_3] = (28469 ? ((183 ? (~var_1) : 8200648528930713262)) : ((((var_6 >= 2341342221063760194) ? 206 : (max(194, var_2))))));
                                var_13 = ((-(arr_1 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((-((65535 ? var_3 : var_4))));
    var_15 = (max(var_3, (((((177 ? 40091 : var_4))) ? (((var_5 ? var_3 : 3))) : 993282435))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_16 = 3301684861;
                    var_17 -= (min(((min((arr_21 [i_5] [i_7 - 1] [i_5]), 255))), (((((arr_16 [i_5] [i_5]) / (arr_23 [i_6] [i_7] [i_7 - 1]))) | ((var_4 ? (arr_20 [1]) : -66))))));
                    var_18 = ((((((arr_21 [i_7] [i_6 - 1] [i_7 - 1]) ? ((31 ? (arr_21 [i_6 + 3] [i_6 + 3] [i_5]) : var_9)) : ((min((arr_22 [i_5] [i_6] [i_7]), (arr_19 [i_5] [i_5]))))))) ? ((((((arr_22 [i_5] [1] [i_5]) ? (arr_18 [i_7]) : 14949)) >= (((var_8 ? var_5 : (arr_22 [i_5] [i_7] [i_7]))))))) : ((1 ? (arr_23 [i_6 + 2] [i_7] [14]) : var_1))));
                }
            }
        }
    }
    var_19 = ((((((!var_6) ? var_1 : ((6824894062369263926 ? var_1 : var_8))))) | 8200648528930713257));
    #pragma endscop
}
