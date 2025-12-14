/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((min(var_13, var_14)), var_10));
    var_19 = var_11;
    var_20 = (min(((min((max(var_6, var_17)), (min(1, -22))))), (max(var_17, (min(var_6, var_12))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_0 [i_0]), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_3 [16] [i_0] = (arr_1 [10] [10]);
        var_21 = max((min((max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))), (max((arr_1 [i_0] [i_0]), (max((arr_0 [i_0]), (arr_1 [13] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = (arr_6 [0]);
        var_23 = (max(var_23, (min((arr_4 [2]), (max((min((arr_5 [i_1]), (arr_4 [14]))), ((max((arr_6 [i_1]), (arr_6 [i_1]))))))))));
        var_24 *= (min((min((min((arr_5 [i_1]), (arr_5 [i_1]))), (min((arr_4 [16]), 0)))), (max((max((arr_5 [i_1]), (arr_5 [i_1]))), (min((arr_5 [i_1]), (arr_6 [i_1])))))));
        arr_7 [i_1] [i_1] = min((max((arr_4 [i_1]), (max((arr_5 [i_1]), (arr_4 [i_1]))))), (max((min((arr_6 [i_1]), (arr_4 [i_1]))), (min((arr_4 [i_1]), (arr_5 [i_1]))))));
    }
    #pragma endscop
}
