/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((255 << (var_2 - 67)));
    var_18 ^= (var_3 | (((((var_7 + 2147483647) << (47 - 47))))));
    var_19 = ((((((max(var_11, var_11))) << ((((max(223, 209))) - 217)))) - (((((1 ? var_7 : var_1))) ? (var_14 > 1) : -30479))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [9] [i_1 + 3] = (((((((max(46, var_15))) % 201))) ? ((((!((((arr_1 [i_1]) ? (arr_6 [i_0] [i_1] [i_1]) : (arr_2 [i_1 - 1] [12])))))))) : (max((var_3 > 6401), (arr_0 [2])))));
                arr_8 [i_1] = 1;
                arr_9 [12] [i_1 + 3] [12] = (((((!(((arr_3 [i_0]) && var_16))))) / ((3 % ((var_13 ? -24 : 79))))));
            }
        }
    }
    #pragma endscop
}
