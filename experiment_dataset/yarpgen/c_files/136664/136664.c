/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (((min((~68), ((6560975024069596229 ? 19241 : 6560975024069596229))))) ? var_1 : ((((min(6560975024069596229, 374400604))) ? (min(var_11, 6560975024069596225)) : ((max(var_0, -374400586))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(var_19, (((1 ? 1 : 374400613)))));
        arr_2 [i_0] [i_0] = ((~((-1 ? 1 : 17538))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 -= (((((0 ? var_6 : (arr_4 [i_1])))) ? (var_5 - var_2) : 1));
        var_21 ^= (arr_3 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_22 = ((var_12 ? (arr_4 [i_2]) : (!1)));
        var_23 &= (~-7522);
    }
    var_24 ^= var_6;
    var_25 = (((((65535 ? 2473276814 : -374400609))) & var_1));
    var_26 ^= ((-374400586 - var_4) / (((17538 ? -8904209558981626106 : 26909))));
    #pragma endscop
}
