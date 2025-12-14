/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 6647;
    var_15 = ((((max(6641, var_10))) < (((min(var_1, -6648))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (min(var_16, (((104 || ((((arr_0 [i_0]) ? (arr_1 [i_0]) : 224))))))));
        var_17 = ((((-6648 ? ((6631 >> (((arr_0 [i_0]) - 3300513931707256509)))) : (arr_1 [i_0])))) ? (((((max(0, 0)))) ^ (((arr_0 [i_0]) ^ 6647)))) : -111);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 = (min(((((arr_4 [i_1]) == 6638))), -833));
        arr_5 [10] |= 3899509231;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_19 = (((arr_8 [i_2] [1]) << (((arr_3 [i_2]) - 38))));
        var_20 = (min(var_20, (((arr_6 [i_2]) ? 178 : 10550005043671396156))));
        arr_9 [i_2] [i_2] = 16;
        var_21 = 20;
    }
    var_22 |= var_6;
    var_23 |= ((var_11 << ((((-6623 / (~var_4))) - 179))));
    #pragma endscop
}
