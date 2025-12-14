/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 >> (var_2 + 737110439)));
    var_13 = (~var_0);

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) + 47177));
        arr_2 [i_0] = (min((arr_0 [i_0 - 1]), (min((arr_0 [i_0]), (arr_0 [i_0 - 1])))));
        arr_3 [i_0] = 1;
        var_15 = (max(1, (((arr_1 [i_0 + 1]) ? var_5 : var_7))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (min(1002402187, ((41684 * (arr_4 [i_1] [i_1])))));
        arr_8 [i_1] [17] = ((((-((max((arr_7 [i_1]), (arr_5 [i_1])))))) % (max((arr_5 [i_1]), (max(0, 1))))));
        var_17 = (arr_4 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = ((((((arr_4 [i_1] [i_1]) ? (arr_7 [i_1]) : 1))) ? ((min((arr_7 [i_1]), (arr_6 [i_1] [11])))) : (((arr_4 [i_1] [i_1]) * 41684))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] = var_2;
        var_18 = ((-(((((41684 % (arr_10 [i_2] [1])))) ? (max(var_8, -13)) : var_2))));
        var_19 = ((var_2 ? (((arr_5 [i_2]) ? (arr_1 [i_2]) : ((var_3 | (arr_6 [i_2] [15]))))) : (arr_0 [i_2])));
    }
    var_20 = (max((((min(var_6, 1)) ? (var_6 && 421228447) : (min(var_1, -1294988673)))), var_11));
    #pragma endscop
}
