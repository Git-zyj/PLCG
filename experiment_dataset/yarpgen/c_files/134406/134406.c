/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= -var_6;
    var_16 = ((~((-var_9 << (var_7 - 17977)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 += (arr_0 [i_0] [i_0]);
        var_18 = (((-77 + 2147483647) << (16238 - 16238)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((((max((arr_0 [i_1] [i_1]), -8447332884771715523))) ? (arr_2 [i_1] [i_1]) : ((~((((arr_0 [i_1] [i_1]) < 11066844647411754476)))))));
        var_19 -= ((+((((arr_3 [i_1]) || var_13)))));
    }
    var_20 = var_13;
    #pragma endscop
}
