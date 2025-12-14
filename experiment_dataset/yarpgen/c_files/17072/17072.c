/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_7;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] &= (2052947863 | var_9);
            arr_6 [i_0] [i_1] = var_13;
            var_18 = (!-896583252);
        }
        arr_7 [i_0] [i_0] = (arr_4 [i_0 + 2] [i_0 + 2] [i_0]);
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_19 -= 7555209202467041438;
        arr_11 [2] &= -1;
    }
    var_20 = var_13;
    #pragma endscop
}
