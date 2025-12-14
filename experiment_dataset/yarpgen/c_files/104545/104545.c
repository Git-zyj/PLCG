/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 ^= max(((((((var_11 ? (arr_2 [i_0] [i_1 + 1]) : var_15))) ? (((!(arr_2 [i_2] [i_0])))) : (((-112 >= (arr_3 [i_0]))))))), ((((((var_17 ? -8262486963134098115 : (arr_4 [i_0] [i_2]))) + 9223372036854775807)) << (((var_6 + 42) - 7)))));
                    var_19 = (min(var_19, (arr_2 [i_2 - 4] [i_2 + 2])));
                }
            }
        }
    }
    var_20 &= var_2;
    #pragma endscop
}
