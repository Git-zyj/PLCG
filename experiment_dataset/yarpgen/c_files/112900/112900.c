/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0] = (arr_0 [i_0]);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_8 [i_1] = ((((((!(arr_1 [i_0]))) << (((((arr_0 [11]) - (arr_1 [i_0]))) + 2317856408299777152))))));
            arr_9 [i_0] [i_1] [i_1] = ((((min((((arr_7 [i_0] [i_0]) ? (arr_6 [i_1] [i_1] [i_1]) : (arr_1 [i_0]))), (max((arr_1 [i_1]), var_14))))) ? (arr_5 [i_1]) : ((+(((-1680785958648529403 + 9223372036854775807) >> (var_12 - 46685)))))));
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            arr_12 [i_2] = 138;
            arr_13 [i_0] [i_0] = var_10;
            arr_14 [i_2] [i_2] [i_2] = (max((arr_5 [i_2]), (((((arr_0 [i_0]) | (arr_2 [i_0] [i_0]))) | ((min(var_10, 76)))))));
        }
    }
    var_18 = 149;
    var_19 = var_7;
    #pragma endscop
}
