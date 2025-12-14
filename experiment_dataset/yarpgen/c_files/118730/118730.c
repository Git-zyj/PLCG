/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] &= (min((((((max((arr_3 [i_0 - 1] [6]), (arr_0 [4])))) ? (((!(arr_4 [i_1])))) : (((arr_4 [i_0]) ? (arr_1 [i_0]) : (arr_3 [9] [9])))))), (((arr_4 [i_1]) ? (max(var_9, (arr_4 [i_0 - 1]))) : (((((arr_2 [i_0]) >= (arr_2 [0])))))))));
                arr_6 [12] = ((!((((arr_2 [i_1]) ? ((var_3 ? var_8 : (arr_2 [i_0]))) : ((((arr_3 [i_0] [i_1]) % var_3))))))));
                var_10 *= (max((arr_2 [i_0 - 1]), var_5));
                var_11 *= (arr_2 [i_1]);
                var_12 *= (min((((arr_0 [i_0 + 2]) ? (max((arr_0 [i_1]), (arr_4 [i_0]))) : ((var_1 ? (arr_4 [i_0]) : (arr_3 [i_0] [i_0]))))), var_2));
            }
        }
    }
    var_13 = ((((~var_1) >> ((var_4 >> (var_2 + 28518))))) >> (-var_5 + 113));
    var_14 = (max(var_3, (max(var_3, var_1))));
    #pragma endscop
}
