/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = (((((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (max(-19, 5469213735841588316)) : ((-(arr_0 [i_0])))))) || (((~((-(arr_0 [i_0]))))))));
        var_11 = ((((max(13470826275539825101, -103)))) ? (max((max((arr_0 [i_0]), (arr_0 [i_0]))), (((arr_1 [i_0]) * 722836694240196548)))) : ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_0 [i_0]) + (arr_1 [i_0]))) : (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_12 = (((((((arr_1 [i_0]) - (arr_0 [i_0]))) - (((arr_0 [i_0]) - (arr_0 [i_0]))))) - (((((-(arr_1 [i_0])))) ? (((arr_0 [i_0]) - (arr_0 [i_0]))) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_4 [i_1] = ((((((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))) + (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))))) & ((8226454866234661723 * (arr_2 [i_1] [i_1]))));
        arr_5 [i_1] = ((((((((arr_3 [i_1]) || (arr_2 [i_1] [i_1])))) << ((((-(arr_3 [i_1]))) - 12146353683911989032))))) ? (((((~(arr_2 [i_1] [i_1])))) ? (8226454866234661728 & 0) : (((arr_3 [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_3 [i_1]))))) : ((((((arr_3 [i_1]) | (arr_2 [i_1] [i_1])))) ? (((arr_3 [i_1]) & (arr_2 [i_1] [i_1]))) : (((arr_2 [i_1] [i_1]) ^ (arr_3 [i_1]))))));
        arr_6 [i_1] = (((~((-(arr_2 [i_1] [i_1]))))) >> ((((((max((arr_3 [i_1]), (arr_3 [i_1])))) ? ((-(arr_2 [i_1] [i_1]))) : (arr_2 [i_1] [i_1]))) - 2174017334162905059)));
    }
    var_13 = (min(var_13, (((!((((((var_2 ? var_8 : var_6))) ? var_7 : var_8))))))));
    var_14 = ((~(((var_4 | var_6) ? -var_8 : var_4))));
    #pragma endscop
}
