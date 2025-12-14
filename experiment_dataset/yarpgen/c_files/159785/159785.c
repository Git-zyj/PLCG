/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-(((((-75 ? -1575511218217857754 : -35))) ? var_5 : -32)));
    var_15 = (max(var_15, ((min((((~1) ? var_3 : ((var_8 ? var_3 : var_1)))), var_0)))));
    var_16 = (max((((max(var_9, var_5)))), var_13));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (((((-(arr_1 [i_0] [i_0])))) && (((~(arr_0 [i_0] [i_0]))))));

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((((-var_13 ? (arr_1 [i_1 - 2] [i_1 - 1]) : 262143)) / (arr_4 [i_0] [i_1 - 1])));
            arr_6 [i_0] [0] [0] = (arr_4 [i_0] [i_1]);
        }
    }
    #pragma endscop
}
