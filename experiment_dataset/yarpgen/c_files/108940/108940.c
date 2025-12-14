/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0] = (((arr_3 [i_0 - 2] [i_0 - 1]) ? (~68) : ((((arr_2 [i_0] [i_0]) || (arr_2 [i_0] [i_0]))))));
        var_15 = (min(var_15, ((((arr_1 [i_0] [i_0 + 2]) ? ((-8425986917095903675 ? (arr_2 [8] [8]) : (arr_0 [i_0 - 1]))) : 21)))));
    }
    var_16 |= 3938169133262739910;
    var_17 = (max(var_17, ((var_7 ^ (max((var_6 && var_2), ((9223372036854775807 ? 17184970021261102579 : 956128020))))))));
    var_18 = ((1916666013 ? 11073479458917246972 : 1));
    #pragma endscop
}
