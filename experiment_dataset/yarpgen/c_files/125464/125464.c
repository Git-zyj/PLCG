/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((!((max(12105102178569421713, var_18)))))), (max((191 / var_18), (max(255, var_18))))));
    var_21 = var_3;
    var_22 = (max(var_4, var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (-9223372036854775807 - 1);
        arr_4 [i_0] = (((arr_0 [i_0] [i_0]) ? -1 : 196));
        arr_5 [i_0] = (((((~(arr_1 [3] [3])))) && 2692518109));
    }
    #pragma endscop
}
