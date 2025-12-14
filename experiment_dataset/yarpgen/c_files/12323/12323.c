/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (-809336786 - (arr_2 [i_0]));
        var_20 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : 746485325));
        arr_3 [i_0] &= 2930758328758158757;
    }
    var_21 *= (max(((max((((var_12 >> (1993121158 - 1993121156)))), var_0))), 8919444398144000223));
    var_22 = (max(var_2, var_5));
    #pragma endscop
}
