/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 32767;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (((((((((arr_0 [i_1]) ? var_9 : (arr_4 [i_0] [i_1] [i_2])))) ? var_2 : -8109827189822363192))) ? (((arr_5 [i_0] [i_0]) ? var_2 : (((1069547520 ? (arr_1 [i_0]) : var_0))))) : -var_14));
                    arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0] = max(((~(arr_4 [i_0] [i_0 - 1] [i_0 - 1]))), ((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : var_13))));
                    var_17 = (((((arr_3 [i_0 - 1] [10] [i_2]) ? ((var_11 ? (arr_4 [5] [i_1] [i_1]) : (arr_1 [18]))) : (var_0 - var_12))) > (((-1069547520 - (arr_2 [18] [i_1]))))));
                    arr_8 [i_1] [i_1] [i_1] = 0;
                }
            }
        }
    }
    #pragma endscop
}
