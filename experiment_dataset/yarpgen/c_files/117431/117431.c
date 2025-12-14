/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((var_7 ? var_3 : var_8))) ? ((var_3 ? var_4 : var_7)) : (max(var_2, var_4))))) ? ((var_1 ? ((min(var_7, var_5))) : var_9)) : var_2));
    var_11 = (min(var_11, (min(var_5, var_0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((min((~var_7), (var_3 ^ var_7)))))));
                var_13 = (max(var_13, (((!(arr_1 [i_1]))))));
                var_14 -= (((((var_3 ? ((min(4094, 22236))) : ((var_8 ^ (arr_2 [12] [i_1] [12])))))) | (arr_3 [i_0] [i_1] [2])));
                var_15 = (max(var_15, (((~(((((((arr_0 [i_0] [i_1]) / (arr_0 [i_0] [9])))) > (arr_3 [8] [i_0 + 1] [10])))))))));
            }
        }
    }
    var_16 = (min(var_16, ((max((((-(var_0 & var_9)))), (((max(var_1, var_9)) | var_5)))))));
    #pragma endscop
}
