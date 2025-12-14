/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_1] = (arr_4 [i_0] [i_1] [i_1]);
            var_20 = (max(var_20, ((max(((((arr_3 [i_0]) > var_4))), ((8701474743895696067 ? (arr_2 [i_0]) : 4295)))))));
        }
        arr_7 [17] [i_0] = (arr_2 [i_0]);
        var_21 |= (arr_0 [7]);
    }
    var_22 = (max(var_3, (max(var_13, ((min(-4296, 95)))))));
    #pragma endscop
}
