/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_6));
    var_19 = 3636581202;
    var_20 = ((var_7 ? ((((max(4294967287, var_11))))) : var_15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, var_13));
                    var_22 -= (min((658386087 != var_16), (max((((arr_7 [i_0 + 1] [i_1] [i_2] [i_2 - 1]) ? (arr_6 [i_1]) : (arr_5 [i_0 - 1] [i_0 + 1]))), (max(var_4, var_0))))));
                    arr_9 [i_0 + 1] [i_0] [i_2 + 2] [i_2 + 2] = var_3;
                    var_23 = (min((((((var_2 ? (arr_4 [i_1] [i_2]) : var_0))) ? ((~(arr_5 [i_0] [i_1]))) : ((((arr_7 [i_0] [i_1] [i_1] [i_2 - 2]) | (arr_4 [i_0 + 2] [i_1])))))), (arr_6 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
