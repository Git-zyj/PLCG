/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [0] = (1 == 98);
        arr_3 [0] = 2690;
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] = ((-((var_3 - (arr_1 [0])))));
        arr_7 [i_1] = var_11;
        arr_8 [i_1] = (max(((-(arr_5 [i_1] [1]))), var_10));
    }
    var_20 = var_4;
    #pragma endscop
}
