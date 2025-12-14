/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_12 = (max((((-(arr_7 [i_0 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2])))), (min((arr_7 [i_0 - 1] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_3 [i_0 - 1] [i_2 + 2] [i_2])))));
                        arr_9 [i_0] = ((((((arr_7 [i_0 + 1] [i_2 - 1] [i_2] [i_3] [i_3]) - (arr_7 [i_0 - 2] [i_2 + 2] [21] [24] [i_2])))) || ((((arr_7 [i_0 - 2] [i_2 + 1] [i_3] [i_3] [12]) ? (arr_7 [i_0 - 2] [i_2 + 1] [i_3] [i_3] [i_3]) : (arr_7 [i_0 + 1] [i_2 + 2] [i_2 + 2] [i_3] [i_3]))))));
                    }
                    arr_10 [i_0] [i_0] [i_0] = (max((((arr_5 [i_0 - 2] [i_0] [i_2 + 2]) ? (arr_5 [i_0 + 1] [i_0] [i_2]) : (arr_7 [i_0] [i_0] [i_1] [i_1] [i_2 - 1]))), ((min((arr_0 [i_0 - 1]), (arr_6 [i_0]))))));
                }
            }
        }
    }
    var_13 = (max(var_13, (((var_9 ? (max(var_4, ((max(var_2, var_11))))) : (((var_8 ? (max(var_1, var_1)) : var_11))))))));
    var_14 = (max(var_14, var_7));

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_15 [i_4] = var_0;
        var_15 += (min((arr_5 [8] [0] [i_4]), (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4])));
        arr_16 [19] = var_4;
        var_16 -= 13256728813428700432;
    }
    #pragma endscop
}
