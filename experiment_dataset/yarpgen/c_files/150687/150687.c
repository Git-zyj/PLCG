/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = 0;
                                var_21 += ((!(((96 ? (arr_11 [5] [i_0] [i_0]) : -41)))));
                            }
                        }
                    }
                    arr_13 [i_1] = 41;
                    arr_14 [i_1] [i_1] [i_2] [i_1] = 41;
                }
            }
        }
        var_22 ^= -41;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_23 ^= (min((max(var_7, (arr_17 [i_5]))), (((!(((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) == var_6)))))));
        arr_18 [i_5] = ((var_10 ? (arr_16 [0] [0]) : -62));
        arr_19 [i_5] = ((!((max(var_2, 41)))));
    }
    var_24 = (min(var_24, ((max(((min(var_8, var_16))), (((!(!var_3)))))))));
    #pragma endscop
}
