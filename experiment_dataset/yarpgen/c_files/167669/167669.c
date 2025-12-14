/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min((!30), (arr_2 [i_0])));
        arr_4 [i_0 + 2] = (arr_0 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = var_9;
        arr_6 [i_0 + 2] = (((((!(arr_0 [i_0 + 2] [i_0 + 2])))) % (~var_4)));
        arr_7 [i_0] = ((((((arr_0 [i_0] [i_0 - 2]) | -22930))) ? (max(65530, (arr_0 [i_0 + 2] [i_0]))) : ((min(var_1, (arr_2 [i_0]))))));
    }
    var_13 ^= ((((22 + (var_10 + var_11))) + (((((max(var_9, var_5))) ? var_3 : ((min(var_11, var_0))))))));
    #pragma endscop
}
