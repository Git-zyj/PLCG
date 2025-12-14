/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (max(var_6, ((((!(arr_3 [i_0]))) ? (arr_1 [i_1 - 3]) : var_19))));
                var_21 -= (((min((min((arr_4 [i_1 - 3] [i_0] [i_0]), 2139202883)), (arr_2 [i_1 - 2]))) | (arr_0 [i_1 - 3] [i_0])));
                var_22 = (((min(var_3, (arr_3 [i_0]))) > ((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = 941250346;
        var_23 = (min(((((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2])))), (((arr_6 [i_2]) + 12829968443845236818))));
    }
    var_24 = var_10;
    #pragma endscop
}
