/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_4 [8] [i_0] = (((((~(arr_3 [i_0])))) ? (arr_3 [i_0 - 1]) : (((arr_0 [12] [12]) ? (arr_0 [i_0] [i_0 - 2]) : 870682189))));
        arr_5 [i_0 - 1] [i_0] = ((1 >= (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_2 [i_0])))));
        arr_6 [1] [i_0] = ((((var_16 ? (arr_0 [i_0] [i_0 - 2]) : 31)) >= ((((arr_1 [i_0]) >> (((arr_3 [i_0]) + 4205)))))));
    }
    var_17 = (min(var_17, (((var_12 ? 4017079128 : var_4)))));
    var_18 -= ((var_6 ? var_8 : 219));
    var_19 = (min(var_0, (((var_6 == (~3319073872))))));
    #pragma endscop
}
