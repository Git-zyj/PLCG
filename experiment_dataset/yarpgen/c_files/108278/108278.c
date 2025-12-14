/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((769107388 < ((max(((var_2 ? 0 : var_1)), (var_3 & var_5)))))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_11 = ((!(~29748)));
        var_12 = ((((650130912 ? 26 : 1)) >= -650130913));
        var_13 = var_1;
    }
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_15 = ((((min(1, 37))) ? (((!(((~(arr_1 [i_2]))))))) : ((max((-1526085989 >= -32749), 1)))));
                var_16 -= (max((((26 && ((((arr_6 [i_1] [i_1]) ? 1 : -3565522017992068560)))))), ((+((((arr_5 [i_1 + 3] [i_2] [i_1]) != (arr_3 [i_1]))))))));
            }
        }
    }
    var_17 = (((((((var_8 ? var_0 : var_9)) * ((min(var_2, var_5)))))) ^ ((var_2 ? (!var_9) : var_6))));
    #pragma endscop
}
