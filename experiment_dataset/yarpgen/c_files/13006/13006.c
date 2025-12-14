/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_2 [i_0]) ? (arr_0 [12] [12]) : -1))) ? (!var_10) : (((arr_2 [i_0]) << (arr_2 [i_0])))));
        arr_4 [i_0] = (((max(((((arr_0 [i_0] [i_0]) >> 4))), (arr_1 [i_0] [10])))) ? ((((arr_1 [i_0] [i_0]) && (-1 < -2113758587)))) : (max(2113758587, 0)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = (min(var_12, (((((((((arr_8 [i_1]) + 10315)) - 20700))) ? var_4 : ((max((arr_7 [i_1]), (arr_7 [i_1])))))))));
        arr_9 [i_1] = (((-(arr_7 [i_1]))));
        arr_10 [i_1] = (((((arr_5 [i_1] [i_1]) & -31359)) | ((((((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_6 [i_1] [i_1]))) & ((max(-5, var_1))))))));
    }
    var_13 = ((var_1 ? var_0 : ((var_9 << ((max(var_8, 0)))))));
    #pragma endscop
}
