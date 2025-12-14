/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((992 ? 1914128686 : -29338)))) ? (((min(4071, 1294612213)) + -1010)) : 1794567271));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 = min((((arr_4 [20] [i_1 + 1]) ? var_10 : (arr_4 [i_1] [i_1 + 1]))), (((arr_4 [i_0] [i_1 + 1]) - (arr_4 [i_1] [i_1 + 1]))));
                arr_5 [i_0] = ((((min((arr_4 [6] [i_1 + 1]), (arr_3 [i_1 + 1])))) ? (((arr_4 [i_0] [i_1 + 1]) ? (arr_4 [i_0] [i_1 + 1]) : var_17)) : ((1 ? 2 : -1028101466))));
                var_21 = (((((-1 % -7) + (-1521421642 / var_6))) < (((-(((var_0 && (arr_1 [i_1])))))))));
                var_22 = (max(var_22, (!-101)));
            }
        }
    }
    var_23 = (((((var_2 & var_8) ? var_8 : ((-116 ? 1 : var_4)))) - ((((var_17 ? var_12 : 1)) + var_15))));
    var_24 = (-((-(var_5 + var_7))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            {
                var_25 = (min(((((min(var_11, 10007)) < ((((var_12 >= (arr_9 [i_2] [5])))))))), (arr_8 [i_2 + 3])));
                arr_11 [i_2] [i_2] [i_2] = (4294967290 ? ((8 ? 3984744999 : -521463949)) : (((var_8 + ((min((arr_7 [i_2 + 4] [10]), 26985)))))));
            }
        }
    }
    #pragma endscop
}
