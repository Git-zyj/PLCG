/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (1635051080 != 17475106875731026106);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((arr_1 [i_0]), 1391667819599169306))) ? (arr_1 [i_0]) : (((var_9 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        var_20 |= ((0 / (((arr_2 [i_0]) ? (arr_0 [i_0]) : ((18446744073709551615 ? 1896241377677752633 : var_17))))));
        arr_4 [i_0] = (arr_1 [i_0]);
        arr_5 [9] |= ((max((var_18 % var_10), (arr_2 [i_0]))));
    }
    var_21 = var_8;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                var_22 = var_0;
                var_23 = var_16;
            }
        }
    }
    #pragma endscop
}
