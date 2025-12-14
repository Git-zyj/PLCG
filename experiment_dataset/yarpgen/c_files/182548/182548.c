/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (min((((max(var_8, var_15)))), 58720256));
    var_21 = (max(var_21, var_4));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = max((((max(11, (arr_1 [i_0]))))), (arr_0 [i_0]));
        arr_3 [i_0] [1] = (((min(((~(arr_1 [i_0]))), -1968296280))) ? var_8 : (((var_3 < ((max(43064, (arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_15 [i_2] [i_2 - 1] [i_1] [i_2] = (((min(12582912, (((!(arr_0 [i_0])))))) + (max((arr_12 [i_2 - 1] [i_2]), -var_13))));
                        var_22 = (max(var_22, var_3));
                        var_23 = (max(var_23, var_0));
                        arr_16 [i_2] [i_2] [i_2] = (((arr_6 [i_2] [i_2] [i_2 + 2]) || (arr_6 [i_0] [i_0] [i_0])));
                    }
                }
            }
        }
        var_24 += -58720271;
    }
    var_25 *= var_14;
    #pragma endscop
}
