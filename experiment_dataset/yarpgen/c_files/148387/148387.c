/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((+(max((arr_1 [i_0]), var_1)))) & ((min(65534, 200019566)))));
        arr_4 [10] = arr_2 [i_0] [i_0];
        var_13 = (min(var_13, var_10));
        var_14 = (((((arr_0 [i_0] [i_0]) ? ((101 | (arr_0 [i_0] [i_0]))) : (arr_2 [i_0] [i_0]))) | (((~var_3) ? (arr_2 [i_0] [i_0]) : (~84)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [10] [i_1] = ((((~(min(2145386496, 7921630256952315474)))) + (((~(arr_6 [i_1]))))));
        var_15 *= (arr_6 [i_1]);
        var_16 = (max(var_16, ((((((243 + (arr_5 [i_1] [i_1])))) ? (((((min((arr_5 [i_1] [15]), var_7))) * (!158)))) : -1)))));
    }
    var_17 = -var_1;
    var_18 = var_2;
    var_19 = var_8;
    #pragma endscop
}
