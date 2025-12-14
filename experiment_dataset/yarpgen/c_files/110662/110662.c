/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (~-16025);
            arr_5 [i_0] [1] [1] = (((var_14 & var_8) & ((~(arr_0 [i_0 + 1] [i_0 - 1])))));
        }
        var_16 = var_0;
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] = var_12;
        arr_9 [i_2] = var_7;
    }
    #pragma endscop
}
