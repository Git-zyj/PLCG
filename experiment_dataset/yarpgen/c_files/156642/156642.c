/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (!47369)));
    var_21 = (((~11) <= (((((18446744073709551606 ? -81 : 5059518882009427623)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(((63412 ? 3397309312 : (((arr_0 [i_0] [i_0]) ? 1212770964 : 18446744073709551600)))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = (min(var_22, (~-1)));
            arr_6 [i_1] = (((((-((max(1, (arr_3 [1] [i_0]))))))) ? (~18084) : ((min(1, 2142)))));
        }
        arr_7 [i_0] = (164869116 >= -6883);
    }
    var_23 = var_2;
    #pragma endscop
}
