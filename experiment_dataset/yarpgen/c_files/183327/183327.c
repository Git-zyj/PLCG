/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-9099692681218067422 ? 9099692681218067421 : var_1));
        var_18 = (~((var_1 ? var_6 : var_6)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((2834188547 == (~var_16)));
        var_19 = ((var_17 ? (((~((max(var_10, var_5)))))) : ((15 ? var_16 : var_6))));
    }
    var_20 = ((((((max(var_6, 1))))) <= 1));
    var_21 = 3144818081;

    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_22 ^= ((~((max(58, 58)))));
        var_23 = (max(var_23, (((-7251526129645186643 ? 921548974 : -3977931190855985028)))));
        arr_9 [i_2] = var_5;
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_18 [7] = (max(((max(var_10, (var_15 > var_13)))), ((4249832687 ? var_15 : var_17))));
                var_24 = (min((max(var_9, (arr_1 [i_4]))), (((-(((var_1 || (arr_0 [i_4])))))))));
            }
        }
    }
    #pragma endscop
}
