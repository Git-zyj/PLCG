/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) || ((min(var_0, (arr_0 [i_0] [i_0]))))));
        var_12 = ((~(min((((arr_0 [i_0] [1]) ? 140737488355296 : (arr_1 [i_0] [i_0]))), ((max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 += 140737488355322;
        arr_7 [3] = (((18446603336221196312 % 1318474626) ? (((-((10396 ? -1318474643 : (arr_4 [i_1])))))) : (((max(18446603336221196312, -519810282)) >> ((((-(arr_4 [i_1]))) + 62939))))));
        var_14 = (max(var_14, ((((arr_6 [i_1]) || 18446603336221196312)))));
        arr_8 [i_1] = ((arr_0 [i_1] [i_1]) % (max((arr_5 [i_1]), (((1759046420 ? 255 : (arr_4 [i_1])))))));
    }
    var_15 = (~1);
    #pragma endscop
}
