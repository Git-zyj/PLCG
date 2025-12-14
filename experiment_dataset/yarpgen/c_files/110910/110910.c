/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_10 = (((-21 != 2896255634587589063) && (((((-(arr_2 [i_0] [i_0])))) && ((max((arr_0 [i_0] [i_0]), (arr_1 [i_0 - 1] [i_0]))))))));
        arr_3 [i_0 - 1] [i_0] = (arr_0 [i_0 - 1] [i_0]);
        arr_4 [i_0] = (((((arr_0 [i_0] [i_0 + 1]) ? (((arr_0 [1] [i_0 + 1]) - (arr_1 [i_0] [4]))) : (((((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0])))))))) ? ((((arr_2 [1] [i_0]) ? (((arr_0 [i_0] [i_0 - 1]) ? (arr_0 [i_0] [10]) : (arr_2 [i_0] [i_0]))) : (arr_1 [i_0] [i_0 + 1])))) : (max((arr_1 [i_0 + 1] [i_0]), (max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0]))))));
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = ((-(arr_2 [i_1] [0])));
        arr_9 [i_1] = (arr_0 [i_1] [i_1]);
        var_11 = ((!((max((arr_6 [i_1]), (arr_6 [i_1]))))));
        arr_10 [i_1] = ((-(arr_6 [i_1])));
    }
    #pragma endscop
}
