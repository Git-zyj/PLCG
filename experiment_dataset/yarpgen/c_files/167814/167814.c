/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_7 ? var_5 : var_0)) | 45290));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(var_1, (1359957244 < 11454697347484882289)))) ? (((!var_1) ? -var_6 : (((arr_1 [i_0]) ? 24 : var_8)))) : (arr_1 [11])));
        arr_3 [i_0] = (max(((((~-28004) || (((11454697347484882262 ? var_10 : var_10)))))), (arr_1 [i_0])));
        arr_4 [i_0] = (!var_7);
        arr_5 [i_0] = (((1166997130 < (((min(var_3, 22686)))))) ? (arr_0 [i_0]) : (((((var_8 ? var_3 : var_10))) ? (min(var_9, (arr_1 [i_0]))) : (((var_10 ? var_7 : 43145))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_9 [i_0] [i_1] = var_1;
            arr_10 [2] = (min(242, 1202316777));
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {
                var_12 = -var_2;
                var_13 = (((arr_11 [i_2] [i_2]) ? var_8 : (((!(((var_6 ? 18 : var_3))))))));
                var_14 = var_3;
            }
        }
    }
    #pragma endscop
}
