/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -934740306;
    var_14 = (min(var_4, var_0));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = min(((~(arr_1 [6] [i_0]))), (arr_2 [i_0] [i_0]));
        arr_4 [i_0] = -1763618710424283295;
        arr_5 [i_0] = (min((arr_0 [i_0]), (arr_0 [i_0])));
        arr_6 [i_0] [i_0] = (max((((min((arr_1 [9] [0]), -1793323426)) ^ (arr_2 [i_0] [i_0]))), (((((min(65, (arr_1 [i_0] [i_0])))) ? 48804 : ((191 ? (arr_0 [0]) : 14520976)))))));
        arr_7 [i_0] = (((min((arr_2 [i_0] [i_0]), (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [0] [i_0])))))) ? ((min((((!(arr_1 [7] [i_0])))), (arr_0 [i_0])))) : (min((arr_0 [i_0]), (max(15, 210)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_11 [i_1] = ((((max(5, 210))) ? ((~(arr_10 [i_1]))) : (max(7440281259998138732, (arr_10 [i_1])))));
        arr_12 [5] = (((max((arr_10 [i_1]), (arr_8 [i_1])))) ? ((min(111, 301814750))) : (min((arr_10 [i_1]), 1274708584)));
    }
    #pragma endscop
}
