/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (arr_11 [i_0] [i_0] [i_1] [i_1 + 2] [i_2 - 1] [i_2]);
                                arr_13 [i_1] [i_1] [7] = 255;
                                arr_14 [i_1] = var_5;
                            }
                        }
                    }
                    arr_15 [12] [i_1] [i_1] [13] = var_3;
                    var_18 = (max(var_18, (((((max((arr_5 [i_1 + 3] [i_2 + 2]), var_8))) ? ((min((arr_5 [i_1 - 1] [i_2 + 1]), (arr_5 [i_1 + 3] [i_2 + 1])))) : ((((arr_2 [i_1 + 2]) == 1766832135))))))));
                }
                var_19 = (min(var_19, (((-((min(1473876086, var_11))))))));
                arr_16 [i_0] [i_1] [i_1] = (!(!933936040));
            }
        }
    }
    #pragma endscop
}
