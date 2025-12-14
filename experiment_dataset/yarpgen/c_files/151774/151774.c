/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 % (1538433405986172476 - var_2)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_16 += (((arr_1 [i_0 - 3] [i_0]) ? (arr_2 [24]) : 97));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = (max(var_17, var_0));
            arr_5 [i_0] [i_0 - 2] = 0;

            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                arr_8 [i_2] [9] [i_2] [i_2] = ((var_1 ? (arr_6 [i_0 - 4] [i_0] [i_0]) : (arr_6 [i_0 - 3] [i_0 - 1] [i_2 + 1])));
                var_18 = (min(var_18, -879121904));
                arr_9 [i_0 + 1] [i_0 + 1] [1] [i_2] = (((var_8 - var_7) >= var_3));
            }
        }
        arr_10 [i_0] [i_0] = ((var_9 ? var_4 : var_10));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_13 [8] = (((((var_10 ? (arr_11 [i_3]) : var_5))) ? (((5285970139936771363 ? 7798269959188614804 : 8191))) : (min(3427601367456929600, (((arr_0 [i_3]) + 17419922687480370505))))));
        var_19 = (((min(((!(arr_0 [11])), ((6665018032315706918 > (arr_6 [i_3] [i_3] [6]))))))));
    }
    var_20 = (((((((2983085635 ? var_1 : var_6))) ? ((var_5 ? var_6 : var_4)) : ((min(2983085651, var_4))))) > (((~(var_1 > var_11))))));
    #pragma endscop
}
