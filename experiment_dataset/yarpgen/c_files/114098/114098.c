/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -5753321738231238194;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1 - 2] = (((((var_1 ? (arr_0 [i_0] [13]) : (arr_3 [i_0 - 3] [i_0 - 3]))) ^ (arr_0 [i_0] [i_0 + 4]))));
                var_19 = ((((((!(arr_1 [i_0]))))) + ((~((1 ? 5753321738231238194 : 29504))))));
            }
        }
    }
    var_20 = (min(var_1, ((-(var_17 || var_15)))));
    var_21 &= ((((((var_9 >> (var_12 - 77329360673874383))) ? (max(var_13, var_15)) : var_17))));
    var_22 += ((((((((1 ? 83 : 1023))) ? (max(var_17, var_6)) : ((max(var_8, var_1)))))) ? var_1 : 31));
    #pragma endscop
}
