/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) - -8));
        arr_3 [i_0] |= (arr_0 [i_0] [i_0]);
        var_20 = (min(var_20, (((!((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))))));
        arr_4 [i_0] = ((((((-2251799813685248 & (arr_0 [i_0] [i_0]))) + 9223372036854775807)) >> (((((arr_1 [i_0]) ? ((1716072336 ? -1 : (arr_1 [i_0]))) : (23213 || 7749023862012230589))) - 4294967243))));
    }
    #pragma endscop
}
