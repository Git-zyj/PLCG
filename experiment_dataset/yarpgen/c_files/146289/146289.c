/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_13, (((var_3 ? 1 : 7)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    var_20 = (((max((((!(arr_0 [i_2])))), (arr_4 [i_2 + 4] [i_2] [i_2 + 1])))) ? (((((~var_10) + 2147483647)) >> (arr_3 [5] [i_2 + 2]))) : (arr_1 [i_0] [i_0]));
                    var_21 = (var_18 < var_11);
                    arr_9 [i_2] [i_2] [i_0] = (max((((7 < (arr_1 [3] [i_2])))), (((arr_1 [i_0] [i_2]) ? ((-(arr_6 [1] [i_1] [i_2] [i_2]))) : -1107775138))));
                    var_22 = ((var_12 ? (min(((min(-2005841145864922236, var_2))), (arr_2 [i_0 - 1]))) : ((((((arr_7 [i_0] [i_2] [i_2]) & var_5))) ? (min(var_0, (arr_8 [i_2] [i_2] [0] [i_2]))) : (((arr_5 [i_2] [i_2] [i_1] [i_0]) - 90))))));
                }
            }
        }
    }
    #pragma endscop
}
