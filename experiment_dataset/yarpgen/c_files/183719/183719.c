/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((((arr_5 [i_1 - 1] [i_1 + 2]) ? (!var_6) : var_0)) * ((127 ? ((((arr_6 [i_0] [i_1] [i_0] [i_1]) < (arr_1 [i_1])))) : (-31867 != -13886))))))));
                    var_14 &= ((-((-(((arr_1 [i_0]) ? var_12 : (arr_4 [i_0] [i_0] [i_0] [i_0])))))));
                    var_15 = (min((((~(var_8 > var_7)))), (((1 ^ var_8) ? (((arr_1 [i_0 - 2]) + var_12)) : (arr_2 [i_1])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_16 = ((min((((var_0 == (arr_7 [9] [i_3])))), (((arr_3 [i_3] [i_3]) ? (arr_6 [i_3] [i_3] [i_3] [i_3]) : var_2)))) >= ((((-(arr_8 [i_3]))) ^ ((max((arr_0 [i_3] [i_3]), (arr_8 [i_3])))))));
        var_17 = (min(((-(!var_8))), ((min(((!(arr_2 [i_3]))), (var_5 > 486032103))))));
    }
    var_18 = (max(var_18, (((~(max((min(var_8, var_12)), var_8)))))));
    #pragma endscop
}
