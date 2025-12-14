/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = -51;
        var_18 = (((((14697 ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : (((arr_0 [i_0] [i_0]) / var_10))))) ? (min((1867294003 / 266115307), 13739)) : var_14));
    }
    var_19 &= (~((13739 ? -526691219 : -13738)));
    var_20 ^= (max(((-526691219 ? 25609 : 5540145592107003512)), (((79 ? (-36 % var_8) : ((35105 ? 19 : var_11)))))));
    #pragma endscop
}
