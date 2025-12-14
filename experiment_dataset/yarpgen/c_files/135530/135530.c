/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((max(var_9, var_4))) | ((~((var_2 ? var_1 : var_2)))))))));
    var_11 = ((!((max(((var_6 << (4096 - 4048))), var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((min((~1), (~18027505892678549505)))) ? (9223372036854775807 | 1551058135) : 18446744073709551614));
                var_12 = (max(var_12, (((((min((var_1 / 1), (((!(arr_2 [i_0] [i_0] [16]))))))) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_1 + 1] [1]))))));
            }
        }
    }
    var_13 -= (1 + var_5);
    #pragma endscop
}
