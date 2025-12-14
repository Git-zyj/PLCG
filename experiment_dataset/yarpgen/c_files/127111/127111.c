/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 ^= (((max((arr_0 [i_0]), (arr_0 [i_0]))) >= (arr_0 [i_0])));
        var_17 = 33;
        var_18 = (((((1 < (arr_1 [i_0])))) > (arr_2 [7])));
        var_19 = arr_2 [i_0];
    }
    var_20 = (min(var_20, ((((max(((15833332571657668708 ? var_8 : var_10)), (var_5 || var_8))) - (((max(-12198, var_0)) - ((11828998596787021943 ? 161 : var_11)))))))));
    #pragma endscop
}
