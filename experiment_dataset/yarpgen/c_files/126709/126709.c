/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_15 <= 9102) ? (max(var_14, var_15)) : (((var_4 ? var_2 : var_8))))) * var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [17] [i_0] = ((((var_11 <= var_5) <= (arr_3 [i_0]))));
                    arr_8 [16] [i_0] [i_2] = ((((((min(var_8, 903626508)) * 37))) ? (((-903626509 ? 102 : 4294967295))) : ((((((arr_1 [4]) ? var_6 : var_1))) ? (min(var_11, var_12)) : var_9))));
                    var_18 = (arr_2 [i_0]);
                    var_19 = (max(var_19, var_5));
                    arr_9 [i_0] [i_1] [0] [i_0] = (((max((arr_3 [i_0]), ((var_8 ? (arr_3 [i_0]) : 6675561177345262773))))) ? (((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_5 [i_0]))) : (arr_5 [i_0]));
                }
            }
        }
    }
    #pragma endscop
}
