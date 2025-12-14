/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 32767;

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, 235));
        arr_2 [i_0] = -1;
        var_19 = (min(var_19, ((((0 % 34928) >= (((34928 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 2])))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_20 &= -var_3;
        arr_6 [i_1] = 30592;
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (((-(arr_5 [i_2 + 1]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 += (max((max((max((arr_12 [i_2]), -32758)), var_2)), ((((30592 >= var_7) & (arr_1 [i_2 + 2]))))));
                    arr_15 [i_2] [i_2] [i_2] [i_2] = (max((arr_3 [i_2]), (((max(34928, (arr_13 [i_2])))))));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = -20087;
        arr_19 [i_5] = (max(var_12, (max(30607, var_14))));
    }
    #pragma endscop
}
