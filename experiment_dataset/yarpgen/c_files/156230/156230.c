/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (max((arr_0 [i_0]), (arr_0 [i_0])))))) ? (arr_2 [i_0]) : (max((arr_0 [i_0]), ((var_10 ? var_2 : var_0))))));
        arr_4 [i_0] [i_0] = ((-(((arr_2 [i_0]) ? (arr_0 [i_0]) : -var_1))));
        var_12 &= ((!(((-(arr_0 [i_0]))))));
    }
    var_13 -= var_0;
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_14 = (~var_8);
                    arr_13 [i_1] [i_2] [i_3] [i_2] = (min((((var_4 ? (arr_11 [i_3] [i_3] [i_3 - 1] [i_2]) : ((max((arr_7 [i_2] [i_2]), var_5)))))), (max((arr_10 [i_3 - 1]), (arr_6 [i_1 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
