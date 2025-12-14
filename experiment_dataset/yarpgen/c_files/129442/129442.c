/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((!((max(106, var_9)))))), (((~102) | ((-106 ? var_3 : 4929186053050251896))))));
    var_11 += var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_13 = ((+(((arr_3 [i_1 - 2]) ? -113 : (arr_0 [i_0])))));
            arr_4 [i_0] &= (arr_3 [i_0]);
        }
        var_14 = ((-101 * (arr_2 [i_0] [1] [i_0])));
    }
    #pragma endscop
}
