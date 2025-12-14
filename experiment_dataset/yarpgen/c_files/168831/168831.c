/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((1 ? 1 : (max(var_3, ((1008806316530991104 ? 3709346019131686074 : 1)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = 9068131391669333986;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_9 [i_1] [4] [i_0] = (!var_7);
            var_21 = (arr_6 [17] [i_1]);
            arr_10 [i_1] = (arr_1 [6]);
            var_22 &= (((arr_6 [i_0] [i_0]) ? 1 : (((arr_8 [22] [22] [i_1]) * (arr_0 [i_0] [i_1])))));
            var_23 -= (arr_3 [i_0]);
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_24 -= ((~(arr_11 [i_0] [i_0])));
            var_25 = ((~3771407815) ? 1890187805 : var_10);
        }
    }
    #pragma endscop
}
