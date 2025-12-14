/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_11 = (max((arr_3 [i_0] [i_0]), ((min((arr_1 [i_0]), (arr_1 [i_2]))))));
                var_12 = (max(var_12, ((((185 ? ((4794 ? (arr_6 [i_1] [i_2]) : 213)) : ((min((arr_0 [i_0] [i_1]), (arr_7 [i_0] [i_1] [i_2]))))))))));
            }

            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                var_13 = -1165078528;
                arr_10 [16] [i_1] [i_1] = (~111);
                var_14 -= ((((((arr_7 [i_0] [i_3 + 2] [i_3 - 1]) == -145))) <= (((-22007 <= (arr_1 [19]))))));
                arr_11 [11] = ((((!(!3))) ? (min(((~(arr_2 [i_0] [4]))), (arr_4 [i_3 + 2] [i_3 + 2]))) : (min(var_8, (((arr_8 [i_0]) ? 52 : var_6))))));
                arr_12 [10] [i_1] [i_1] [i_1] = (((((min(103, 8346392731106992486)) / ((min((arr_9 [i_0] [i_1] [i_0]), (arr_6 [i_0] [11])))))) != (((var_10 + (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
            }
            arr_13 [i_0] [i_0] [i_0] = (((max(var_5, var_2)) < (arr_6 [i_0] [i_0])));
        }
        arr_14 [i_0] = (((arr_5 [i_0] [i_0] [1] [i_0]) + (max((min(1, -2002458280)), ((max((arr_4 [i_0] [i_0]), 255)))))));
    }
    var_15 = (((~var_0) ? ((min(var_0, (min(var_5, var_1))))) : (((!-4882399057148729037) << (155860736 - 155860723)))));
    var_16 = (min(var_16, ((26 ? ((var_1 ? var_3 : ((241 ? 78 : var_9)))) : var_7))));
    #pragma endscop
}
