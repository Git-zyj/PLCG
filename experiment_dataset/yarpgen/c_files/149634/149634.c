/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (min(var_19, ((((((arr_0 [i_0]) ? 26 : 1188268813)) << (1188268813 % 682613880))))));
        arr_3 [i_0] = ((1188268813 ? ((7936484041832747190 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0]))) : (((arr_2 [i_0] [i_0]) >> (((max(134217216, var_6)) - 134217194))))));
        var_20 = (min(1188268813, ((var_18 + (-9223372036854775807 - 1)))));
        var_21 = (((((-8945614022240922139 ? 682613893 : 206))) % (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 -= var_14;
        var_23 = ((((!150) ? (max(497081619, 235)) : ((1282294689 ? 0 : (arr_6 [i_1]))))) + (((arr_5 [i_1] [i_1]) & 55)));
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        var_24 = ((((min((arr_6 [i_2 + 2]), 1188268813))) ? (((arr_6 [4]) ? (arr_5 [i_2] [i_2]) : (arr_0 [3]))) : ((-(arr_5 [i_2 - 1] [i_2 + 3])))));
        var_25 = (((!(((3612353415 ? (arr_8 [i_2] [i_2]) : 497081619))))) ? (min(4207407132, 55)) : 295872930);
    }
    var_26 = ((2726749041 + ((((var_10 ? 3999094360 : var_9)) / var_18))));
    #pragma endscop
}
