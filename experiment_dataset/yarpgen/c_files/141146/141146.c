/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = var_15;
                        var_18 = var_3;
                        var_19 -= var_10;
                        var_20 = (max(var_20, ((max(((max((arr_11 [11] [11]), (arr_11 [i_1] [i_3])))), (max((arr_0 [i_3]), (arr_7 [9] [i_0]))))))));
                        arr_12 [i_0] [i_0] [i_0] = (min((min(var_14, var_12)), (arr_0 [i_3])));
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] = var_13;
                    arr_14 [i_2] &= (arr_4 [i_2]);
                    var_21 = (min((((arr_7 [i_0] [i_1]) - (arr_8 [i_0] [0] [i_0] [i_0] [i_0]))), (arr_2 [i_0])));
                }
            }
        }
    }
    var_22 = (((max(var_12, var_3)) + (max(var_2, ((min(var_0, var_7)))))));
    #pragma endscop
}
