/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = -1033629681;
        var_19 = (max((((arr_2 [i_0]) ? 7292183803775949062 : ((((arr_0 [i_0]) ? 1 : (arr_0 [i_0])))))), ((((((32761 ? -105426172 : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_2 [i_0]) ? 702504118 : 702504144)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 ^= ((((702504117 ? (max(-1033629694, (arr_3 [0] [i_1]))) : (arr_3 [16] [i_1]))) < (((-7078887685061473150 == (arr_4 [8]))))));
        arr_5 [i_1] [i_1] = 210445090;
        var_21 = (min((arr_4 [i_1]), ((((arr_4 [i_1]) == (arr_4 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_22 = ((((((arr_6 [i_2]) ^ 1033629694))) ? (((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2]))) : (arr_6 [i_2])));
        var_23 ^= (arr_7 [i_2]);
    }
    var_24 = ((var_2 ? var_1 : 18446744073709551591));
    var_25 = (((((((min(702504114, var_1))) ? (1337063738 / 1) : var_7))) ? -116748100 : ((((max(1, 32767))) ? var_4 : var_4))));
    #pragma endscop
}
