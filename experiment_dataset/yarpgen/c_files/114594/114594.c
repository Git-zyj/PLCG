/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_4;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = var_2;
        var_12 = 1;
        var_13 = ((((8333936859238362553 ? 8333936859238362553 : ((8333936859238362553 ? 436805877 : 8333936859238362553)))) / ((((~var_4) ? 9848343632915055559 : ((11445700871714967535 ? 436805877 : var_0)))))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_14 = (min((arr_1 [i_1] [i_1]), ((4114181616793117419 ? (arr_0 [i_1 + 1]) : (arr_1 [i_1] [i_1 - 2])))));
        var_15 = var_2;
    }
    #pragma endscop
}
