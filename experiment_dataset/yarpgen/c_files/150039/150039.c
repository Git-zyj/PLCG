/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_10 <= var_12);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 58535;
        arr_4 [i_0] [i_0] = (~var_14);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 *= (min((max((arr_7 [i_1]), (var_17 % 62612))), (max((!var_15), (min(63072, 1109370002))))));
        var_21 = (max(var_21, (((((((!(!7001))))) / (arr_5 [i_1]))))));
        var_22 *= (((min(3274159260, (arr_5 [i_1])))) && ((min((arr_7 [i_1]), -12))));
    }
    #pragma endscop
}
