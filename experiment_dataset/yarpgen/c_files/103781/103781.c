/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((-(-50 - 65514)));
    }
    var_11 = 3875490913;

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_12 = var_7;
        var_13 = var_1;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_14 = ((((((416184675 - (arr_6 [i_2] [i_2])))) + -0)));
        arr_7 [i_2] = (min(-416184675, ((-(!37054)))));
    }
    #pragma endscop
}
