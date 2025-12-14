/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max((min(4294967271, 4294967269)), ((var_1 ? var_1 : var_7)))) ^ (((((~var_6) == (~var_10)))))));
    var_20 ^= ((var_10 <= ((min(var_2, -1295617812)))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0 - 1] [9] |= (arr_2 [i_0 + 2] [i_0]);
        arr_4 [7] [i_0 + 1] &= (((arr_0 [8]) >> (((arr_1 [i_0]) + 365229807))));
        var_21 = (max(var_21, (((min((((arr_1 [i_0 + 4]) ? (arr_1 [i_0 + 3]) : (arr_0 [i_0]))), (((109 ? var_0 : var_0)))))))));
        arr_5 [i_0] [i_0] = (((!var_0) ? (arr_1 [i_0 + 3]) : -1295617792));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = (((arr_0 [i_1]) ? var_4 : ((((max(5682293734057068908, 255))) ? ((var_4 ? (arr_7 [i_1] [i_1]) : var_11)) : (max((arr_7 [i_1] [i_1]), var_1))))));
        arr_9 [6] &= ((~(arr_7 [i_1] [i_1])));
        arr_10 [i_1] = (-1295617812 - var_7);
        arr_11 [i_1] [i_1] = ((1295617812 ? 0 : 1295617796));
        arr_12 [i_1] = (((((~((var_15 ? (arr_6 [i_1] [i_1]) : 57518285))))) ? ((((arr_8 [i_1] [i_1]) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))) : ((-(((arr_7 [i_1] [i_1]) ^ (arr_2 [i_1] [7])))))));
    }
    #pragma endscop
}
