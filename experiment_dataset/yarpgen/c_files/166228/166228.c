/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] = (min((min(((1006632960 ? -521314352 : var_12)), (min(-11, 1006632960)))), ((var_6 ^ (6363 ^ -1006632960)))));
                var_15 = (min(var_15, (!-14889538207090198269)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_1, 11));
                                var_17 = (min(((-270485706 ? (~-2) : -var_12)), var_7));
                            }
                        }
                    }
                    arr_19 [i_2] [i_3] [i_4] = (((min(var_14, (arr_14 [i_2] [i_2]))) << (min((203256444 || var_3), ((var_6 ? (arr_12 [i_2] [i_3] [4] [11]) : 11))))));
                    arr_20 [i_2] [i_2] [i_2] [i_2] = (min((((arr_18 [i_2] [i_2] [i_3] [i_3] [i_4]) ? (arr_18 [i_2] [i_2] [i_2] [i_3] [i_4]) : (arr_18 [i_2] [i_3] [i_3] [i_3] [10]))), -11));
                    arr_21 [i_2] [i_3] = (!54);
                }
            }
        }
    }
    #pragma endscop
}
