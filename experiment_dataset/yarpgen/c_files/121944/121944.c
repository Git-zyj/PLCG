/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_7;
    var_19 *= var_3;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = (max(var_20, ((((((((!(arr_0 [i_0 + 1] [i_0])))) <= 28675)) ? (min(19967, (~-7188616312049012236))) : (arr_1 [i_0] [i_0 - 2]))))));
        arr_2 [i_0] [i_0] &= (((-(arr_1 [i_0 - 2] [i_0 - 1]))));
    }
    var_21 = var_14;
    var_22 = (min(var_22, ((max((~var_8), ((((var_15 ? var_6 : 442094521731448867)))))))));
    #pragma endscop
}
