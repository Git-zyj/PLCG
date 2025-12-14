/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? ((min(((((arr_0 [i_0]) ? (min(1105643922, (arr_1 [i_0]))) : (arr_1 [i_0])))), (((((38332 << (((((arr_1 [i_0]) + 1125754103)) - 9))))) ? 1424612509402435588 : (arr_1 [i_0])))))) : ((min(((((arr_0 [i_0]) ? (min(1105643922, (arr_1 [i_0]))) : (arr_1 [i_0])))), (((((38332 << (((((((((arr_1 [i_0]) + 1125754103)) - 9)) + 926910701)) - 22))))) ? 1424612509402435588 : (arr_1 [i_0]))))));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [8] = 134217728;
        var_20 = ((((((arr_1 [6]) ? (arr_5 [i_1] [i_1]) : (arr_1 [16])))) ? (((arr_5 [i_1] [i_1]) | (arr_5 [i_1] [i_1]))) : (min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
        var_21 &= ((+(max((arr_0 [i_1]), (arr_5 [i_1] [i_1])))));
        arr_7 [i_1] = (arr_1 [6]);
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_22 = (((((((((arr_0 [i_2]) * (arr_10 [i_2] [i_2])))) ? ((((-32767 - 1) ? (arr_4 [i_2] [i_2]) : (arr_1 [i_2])))) : (((arr_5 [11] [i_2]) * (arr_5 [14] [i_2])))))) ? (max((min((arr_5 [i_2] [i_2]), 1356242551)), ((min((arr_9 [i_2] [i_2]), (arr_8 [i_2])))))) : (max((((arr_8 [3]) ? 4095 : 1356242556)), 1105643922))));
        arr_11 [i_2] = ((((((max(127, 56122))) && ((((arr_5 [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2 - 1] [i_2]))))))) << (((max((min((arr_10 [14] [14]), -1)), (arr_8 [i_2 - 1]))) + 13)));
        arr_12 [i_2] = max((((arr_0 [i_2 - 1]) % (max((arr_9 [i_2 - 1] [i_2]), (arr_1 [i_2]))))), ((-60 ? -111 : 9413)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_15 [i_3] = (arr_0 [i_3]);
        arr_16 [i_3] [1] = 82;
    }
    #pragma endscop
}
