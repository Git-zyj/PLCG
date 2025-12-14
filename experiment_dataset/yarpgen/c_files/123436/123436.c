/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (arr_1 [i_1]);
                var_15 = (max(var_15, ((((((0 ? 0 : 4294967295))) ? (min(((18446744069414584314 ? var_5 : 6539570617017521496)), 4294967329)) : 1132079334)))));
                var_16 = (~(((!(arr_4 [i_1 + 2] [i_0] [i_1 - 2])))));
            }
        }
    }
    var_17 = var_2;

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] = var_5;
        arr_9 [i_2] = (min(((max((arr_7 [i_2 - 1] [i_2 - 2]), (arr_7 [i_2 - 1] [i_2 - 1])))), (max((arr_6 [i_2 - 2]), (arr_6 [i_2 + 1])))));
        var_18 = (arr_6 [i_2 + 1]);
        arr_10 [i_2] [i_2] = (arr_7 [1] [i_2]);
        arr_11 [5] = (((((arr_6 [i_2 - 2]) ? (arr_7 [i_2 + 1] [i_2 - 2]) : 11809175605886029534))) ? -var_10 : (arr_7 [i_2 + 1] [i_2 - 2]));
    }
    var_19 -= ((var_2 ? (max(var_12, (((var_6 ? var_7 : -1132079363))))) : ((((((var_2 ? var_12 : var_11))) ? (min(var_8, var_11)) : var_10)))));
    #pragma endscop
}
