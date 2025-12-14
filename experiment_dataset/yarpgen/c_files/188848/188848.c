/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 26;
        var_12 *= (((((((max(0, (arr_2 [12])))) ? ((((arr_2 [2]) || (arr_2 [10])))) : ((24426 ? 0 : -1))))) ? (min((((1 ? (arr_1 [10]) : (arr_2 [10])))), ((65535 ? (arr_0 [i_0]) : -4771616527271908335)))) : var_9));
    }
    var_13 += var_6;
    var_14 += 20;
    #pragma endscop
}
