/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_18 *= 366500335;
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((-366500335 >= ((((arr_0 [i_0]) ? (arr_7 [i_0 - 3] [1] [i_2] [i_3]) : (arr_1 [i_0]))))));
                    }
                    var_19 = (min(var_19, (((!((max((!93030380), (-1693322876 - -5907735418699718054)))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] = (arr_1 [i_0]);
                                arr_17 [i_5] [i_0] [i_2] [i_0] [i_0] = (var_3 == ((max(5907735418699718054, (!11265154327587513597)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                {
                    arr_25 [i_8 - 2] [i_8] [i_6] = (max((~11265154327587513598), (max(var_9, (~var_2)))));
                    arr_26 [i_6] [i_8] [i_8] = (max(((((!(arr_20 [i_8]))) ? (1 | var_7) : ((min(34359738367, var_10))))), (((var_15 != (arr_24 [i_8 + 2] [i_8] [i_8]))))));
                }
            }
        }
    }
    var_20 -= ((max(((((var_13 + 2147483647) >> (var_14 + 3555194524861602634)))), (min(var_1, var_16)))));
    #pragma endscop
}
