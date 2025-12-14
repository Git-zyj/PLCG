/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((max((15660641735749105703 >= -1431671321), 6740606786631002318))) ? 30800 : (max(((var_9 ? var_10 : var_11)), ((var_3 ? 6740606786631002305 : -6740606786631002319))))));
    var_14 = (~((var_2 ? var_11 : var_12)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = -6740606786631002300;
                var_16 = ((var_1 >= (((var_0 ? (arr_4 [i_0]) : (var_12 >= 0))))));
                var_17 = (arr_4 [i_0 - 1]);
            }
        }
    }
    var_18 = 254;
    var_19 = (((((var_8 - (var_0 == 6740606786631002318)))) ? var_1 : (min(var_4, var_6))));
    #pragma endscop
}
