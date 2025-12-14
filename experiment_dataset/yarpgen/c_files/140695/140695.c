/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 2] [i_0] = 8527673361208890863;
                var_20 = (max(var_20, (((!(((139 ? 8527673361208890863 : var_2))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, (!139)));
                    var_22 -= (var_7 - var_19);
                }
            }
        }
        var_23 = (((arr_13 [8] [i_2] [i_2]) ? (arr_4 [i_2] [8]) : -var_19));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        var_24 = ((!(-4475020154816318823 - -923462347)));
        var_25 = (min(var_25, (((-(arr_9 [i_5 - 2]))))));
        var_26 |= (arr_4 [i_5 + 1] [i_5 - 2]);
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_20 [i_6] |= 8527673361208890863;
        arr_21 [i_6] = ((((((max(2048540416, (arr_0 [i_6]))) >> (-var_15 + 8575206010442657325)))) ? var_2 : var_17));
        arr_22 [i_6] [i_6] = (min(((((-1120076032 >= var_2) == (min((arr_19 [i_6]), (arr_1 [i_6] [22])))))), (max(-163708672, var_7))));
    }
    #pragma endscop
}
