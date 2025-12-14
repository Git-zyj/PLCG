/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = (max((max((max(var_17, 49729)), 0)), var_1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max((((-(!var_17)))), (min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))));
        arr_3 [i_0] |= ((max(((min(var_0, var_16))), (max((arr_0 [i_0] [i_0]), -118)))) * (((min((arr_1 [i_0]), ((((arr_1 [i_0]) > (arr_1 [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_6 [i_1]) || var_13));
        arr_8 [i_1] [i_1] = (arr_5 [i_1] [i_1 - 1]);
        arr_9 [i_1] = ((-(((8388607 && ((max((arr_4 [i_1]), var_7))))))));
        arr_10 [i_1] [i_1] = (max(var_11, ((~(arr_4 [i_1])))));
    }
    #pragma endscop
}
