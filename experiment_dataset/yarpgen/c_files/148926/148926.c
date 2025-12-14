/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((min((((var_12 >= (((var_2 ? (arr_3 [i_2 + 4]) : (arr_3 [2]))))))), ((-(((arr_4 [i_0] [i_2 + 2]) ? (arr_3 [i_2 + 1]) : (arr_3 [11]))))))))));
                    var_19 = ((((((var_14 > var_8) || (((arr_5 [i_0]) < var_13))))) * (~-var_6)));
                    arr_8 [i_2] [i_2] = ((0 == ((min((arr_6 [i_1 + 1] [i_1 + 3] [i_2]), var_9)))));
                }
            }
        }
    }
    var_20 = (((!var_5) >> ((((((max(var_10, var_0))) ? var_0 : ((max(var_5, -4627279752840600997))))) - 2631174734793277985))));
    var_21 = ((+(((var_4 / var_14) / (max(var_5, var_0))))));
    var_22 = ((!((min((~7746461095401803083), (var_14 ^ var_12))))));
    #pragma endscop
}
