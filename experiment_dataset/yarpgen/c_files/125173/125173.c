/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_13 ^= (max((max((arr_1 [i_0] [i_0]), (arr_7 [i_0 - 1] [i_0 - 3] [i_0]))), (((!((max((arr_2 [i_0 - 3]), var_5))))))));
                    var_14 = (((((max(var_8, var_5)) / (((arr_6 [i_2] [i_1 + 2] [i_1] [i_0]) ? (arr_6 [1] [i_1] [i_1] [i_1 + 1]) : var_7))))) ? (arr_7 [i_0] [i_0] [i_2]) : (!1));
                    arr_8 [i_0] [i_0] [i_1] [i_1 + 3] = ((var_6 ? (((max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 3]))))) : (max(((var_9 ? var_0 : (arr_5 [i_2] [i_1 + 1] [i_0] [8]))), (max(0, 8683494371002023996))))));
                    var_15 = (max(var_15, (((var_6 ? (((arr_7 [14] [14] [6]) ? 3741551547094297407 : -var_2)) : ((max((max(var_6, (arr_4 [9] [i_1] [i_2]))), (max(var_12, (arr_3 [7] [7])))))))))));
                    var_16 -= var_12;
                }
                var_17 ^= (max(var_7, (((((min(var_8, var_0))) ? var_8 : (((arr_1 [i_0] [i_1]) ? var_8 : (arr_2 [i_1]))))))));
                var_18 ^= (((arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1]) ? ((min((arr_1 [i_1 - 1] [i_1 + 2]), (arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1])))) : (((arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1]) ? var_4 : var_2))));
            }
        }
    }
    var_19 = var_6;
    var_20 = (min(var_20, ((max((max(((max(var_9, var_8))), (max(var_1, var_7)))), var_4)))));
    var_21 = (min(var_21, (((var_8 ? (((var_1 / var_5) ? var_11 : (max(var_11, var_4)))) : -var_5)))));
    #pragma endscop
}
