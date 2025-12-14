/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = 0;
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : 4294967295))) ? (arr_0 [i_0]) : (((20099 && (arr_0 [i_0]))))));
        arr_4 [i_0] = ((45436 ? ((((-21 + 2147483647) >> (45423 - 45397)))) : ((2147483647 ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (min(-647571502, 5578805028742762214))))));
        arr_5 [i_0] [i_0] = ((arr_0 [i_0]) != (arr_0 [i_0]));
    }
    var_21 = (min((((11347 ? var_14 : 2035262842))), 11347));
    #pragma endscop
}
