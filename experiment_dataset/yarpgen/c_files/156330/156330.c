/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (~var_0);

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_14 = (max((((arr_1 [i_0 + 1]) ? ((-(arr_1 [i_0]))) : 17564741215175903242)), -4294967295));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] = (((arr_6 [i_0 + 1] [7] [i_0 + 1]) - (((!(arr_6 [i_0] [i_0] [i_0 - 1]))))));
            arr_8 [i_1] [18] [18] = 87;
        }
    }
    var_15 = (min(var_15, var_1));
    #pragma endscop
}
