/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = ((((var_8 >= (var_4 <= var_0))) ? var_6 : (((max((var_9 > var_16), var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = arr_4 [i_0] [i_0];
                    var_19 = (arr_0 [i_0]);
                    var_20 = (((arr_0 [i_0]) ? ((max(var_2, (arr_5 [i_0])))) : ((((max((arr_6 [i_2] [i_2] [i_2] [i_0]), (arr_4 [i_1] [3]))) | (arr_2 [i_1 + 1] [i_1 - 1]))))));
                    var_21 *= (((((var_10 >= var_12) ? ((((!(arr_4 [i_0] [i_0]))))) : ((var_10 ? 1062649826816579748 : (arr_3 [i_1] [i_2]))))) <= ((((arr_5 [i_2]) ? (max((arr_2 [i_1] [i_1]), (arr_0 [i_2]))) : ((22109 ? (arr_0 [i_0]) : (arr_7 [6] [i_1 + 1] [i_2] [i_0]))))))));
                }
            }
        }
    }
    var_22 = (((max(var_9, var_13))));
    #pragma endscop
}
