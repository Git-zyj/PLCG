/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_0;
    var_11 -= var_0;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (min(var_12, ((((-(((arr_0 [5]) ? -8 : 608500255))))))));
        var_13 = (max((arr_0 [i_0]), (max(1181815617, (arr_0 [7])))));
        arr_2 [i_0] = (((~1181815617) ? -18893 : (arr_0 [13])));
        var_14 = (min(var_14, ((((((~(arr_1 [i_0])))) ? ((max((arr_1 [i_0]), (arr_1 [i_0])))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        arr_3 [1] = 1241973197;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1] [i_1]);
        var_15 = (min(var_15, ((((((608500265 ? 608500255 : (arr_0 [13])))) ? 3686467029 : (arr_1 [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] = (((arr_7 [i_2]) ? ((1 ? (max((arr_7 [i_2]), -1241973197)) : (max(-1241973204, (arr_9 [0]))))) : (min((max((arr_9 [i_2]), (arr_7 [i_2]))), 1))));
        var_16 = (max(var_16, (((((max(((-1241973191 ? -1241973204 : (arr_8 [18] [6]))), 18197))) ? (((((max((arr_9 [i_2 + 3]), -1241973197))) ? (arr_8 [14] [16]) : ((-(arr_7 [14])))))) : 62)))));
        arr_11 [i_2] [i_2] = ((((-(arr_9 [i_2])))) ? (max(((((arr_8 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_9 [i_2 - 1])))), (max(13519432770461758064, 65472)))) : ((((max((arr_8 [i_2] [i_2 - 1]), (arr_8 [i_2] [18])))))));
    }
    var_17 = 1241973234;
    var_18 = (max(var_18, var_3));
    #pragma endscop
}
