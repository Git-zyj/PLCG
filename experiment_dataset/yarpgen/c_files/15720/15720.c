/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (var_12 > 38660);
        arr_3 [6] [i_0] = ((-84 <= var_8) + (min(10420, (arr_0 [i_0]))));
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] = 1584029484;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = var_6;
        arr_9 [i_1] = 42;
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_12 [1] = (max((min((min(var_11, var_12)), -2710937811)), ((min(116, (arr_11 [i_2 - 1]))))));
        arr_13 [i_2 - 1] = ((((50387 || (arr_10 [i_2 - 1]))) ? 1584029459 : ((((var_2 == (arr_11 [i_2])))))));
    }
    var_18 = 2710937798;
    #pragma endscop
}
