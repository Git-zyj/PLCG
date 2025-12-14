/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-(!56818))));
    var_18 = (((var_1 / ((min(1, -17))))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_19 = (((((((arr_1 [i_0 - 2]) && 1)) && 17)) ? ((-(((-127 - 1) ? (arr_1 [i_0]) : (-127 - 1))))) : (-17 >= 0)));
        var_20 = (-127 - 1);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_0] = (((arr_4 [i_0]) ? ((((((~(arr_2 [i_1])))) ? ((max(0, (-127 - 1)))) : 1))) : 14));
            var_21 = 14;
            var_22 = ((~(arr_7 [0] [i_1])));
        }
    }
    #pragma endscop
}
