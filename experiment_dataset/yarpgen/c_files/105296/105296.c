/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [17] = (arr_1 [i_1]);
                arr_7 [i_0] [1] [i_0] = (((1754721658583926330 ? 0 : 7206435078156292684)));
            }
        }
    }
    var_20 = (var_15 | var_0);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((((arr_16 [i_4 - 1] [i_3] [i_2] [i_2]) ? (arr_16 [i_3] [i_3] [i_3] [i_2]) : (arr_16 [i_2] [i_3] [2] [i_4 - 1]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [14] [i_4] [i_4] [i_4] [i_2] = (((!(arr_21 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_6] [i_6 - 1] [i_4]))));
                                arr_23 [i_4] [i_4] [i_3] [i_4] [i_4] [i_6] = (((var_10 ? ((8637658211529144626 ? -15 : -13)) : ((((arr_8 [i_2]) != var_3))))));
                                arr_24 [i_2] [i_3] [i_4] [i_5] [i_6] = (50141 ? (min((arr_2 [i_2] [5] [i_4 - 1]), (arr_2 [14] [i_3] [i_6 - 1]))) : ((((arr_4 [i_2] [i_3] [i_2]) ? (arr_4 [i_2] [i_3] [i_4 - 1]) : (arr_4 [i_2] [i_3] [16])))));
                            }
                        }
                    }
                    arr_25 [i_3] [0] [i_4] [0] = ((((arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_2]) ? (arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_19 [i_2] [i_2] [6] [0]))) >= (((-(~var_11)))));
                    arr_26 [i_2] [i_2] [i_4] = -26;
                }
            }
        }
    }
    #pragma endscop
}
