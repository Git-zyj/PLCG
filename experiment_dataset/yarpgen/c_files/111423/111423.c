/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (min(119, (!7255271992768588958)));
                    var_21 = (arr_2 [i_0 + 1] [i_1]);
                    arr_7 [i_0] [i_0 - 1] [i_0] &= ((!var_11) ^ ((((arr_1 [i_0 + 2]) <= (arr_1 [i_1])))));
                    arr_8 [i_0 + 1] [i_1] [i_2] = (arr_5 [i_0 + 1] [i_0]);
                }
            }
        }
    }
    var_22 = var_18;
    var_23 = ((((((1 ^ 2884271689025054110) ? (~var_14) : (min(var_19, var_1))))) ? var_0 : var_17));
    var_24 = (max(0, 2511));
    var_25 = 422042161038028508;
    #pragma endscop
}
