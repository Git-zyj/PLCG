/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (min(((max((min((arr_0 [i_0]), -73)), ((min(0, (arr_1 [6]))))))), ((-(arr_0 [i_0])))));
        arr_2 [11] = (arr_1 [i_0]);
    }
    var_21 = (max(((((min(var_7, var_1)) >> (15689170384861246380 - 440120231)))), (((var_4 + 1) ? ((10014051537698348223 ? 0 : var_17)) : 8432692536011203393))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_22 = ((((1 ? ((86 >> (((arr_4 [i_1]) - 7513922634929450179)))) : (13 != 2335386017))) - ((-(arr_1 [i_1])))));
                arr_7 [i_1] [i_2] = (-127 - 1);
            }
        }
    }
    #pragma endscop
}
