/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 9223372036854775807;
    var_20 = ((((((119 != var_16) ^ (~var_0)))) - (((((-23203 ? 23203 : var_8))) ? (((var_18 ? 55527 : 35587))) : (-24287 * 3466281973)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (~-23203);
        arr_3 [i_0] [i_0] = ((~((var_13 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
    }
    #pragma endscop
}
