/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        arr_3 [i_0] = (min((min((((!(arr_0 [i_0])))), (arr_0 [i_0 + 2]))), ((((((arr_0 [i_0]) - (arr_0 [2])))) ? (arr_0 [i_0]) : (arr_1 [i_0 + 1] [i_0])))));
        arr_4 [i_0] = (arr_0 [i_0 - 1]);
        var_13 = (!(arr_0 [i_0 + 2]));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (arr_5 [i_1]);
        var_14 |= (max((min((arr_2 [i_1] [i_1]), (((arr_2 [i_1] [i_1]) ? (arr_0 [i_1]) : 2687551746)))), 120));
        arr_9 [i_1] [i_1] = ((((((~(arr_1 [i_1] [i_1]))))) ? (min((arr_0 [i_1]), (arr_0 [i_1]))) : (min(120, (arr_0 [i_1])))));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_15 ^= (((((((arr_10 [i_2]) + (arr_10 [i_2])))) ? (max(120, (arr_6 [i_2 + 1]))) : ((min(-22097466, (arr_1 [i_2] [i_2])))))) - (((((((((arr_5 [i_2]) || (arr_1 [i_2] [i_2]))))) >= (max(3107, (arr_11 [i_2]))))))));
        var_16 = (((!65535) * (arr_10 [i_2 - 1])));
    }

    for (int i_3 = 4; i_3 < 16;i_3 += 1)
    {
        var_17 ^= 1;
        arr_15 [i_3] = var_2;
    }
    var_18 = (~-1560419792);
    var_19 = var_4;
    #pragma endscop
}
