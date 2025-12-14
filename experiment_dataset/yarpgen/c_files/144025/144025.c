/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? (min(-4294967296, 410641189)) : var_4));
    var_14 = (max(var_2, (((((var_12 ? var_1 : var_5))) ? var_10 : var_12))));
    var_15 = ((~(!var_10)));
    var_16 = ((var_3 << (var_9 - 2279890292)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0 - 1])));
        var_17 = 1020;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_18 = max(4883450484550619880, var_1);
            arr_9 [8] [i_2 - 2] = var_0;
        }
        arr_10 [i_1] [i_1] = (((max(-43, var_8)) % var_0));
        arr_11 [i_1] [i_1] = (arr_5 [i_1]);
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_16 [i_3] = var_1;
        var_19 = (min(var_19, (((~((((max(0, var_0))) ? (max(9182444707033326872, (arr_15 [i_3] [i_3]))) : (~553924797))))))));
        var_20 = (min(var_20, -1020));
    }
    #pragma endscop
}
