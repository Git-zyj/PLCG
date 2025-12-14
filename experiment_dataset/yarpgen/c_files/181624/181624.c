/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((var_6 ? ((min((-127 - 1), 65535))) : -2144638366)), (126 << 16)));
    var_15 = -127;
    var_16 = (max(((~(~var_13))), (((!(var_12 != var_1))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 = ((((var_7 ? var_8 : var_11)) == 20867));
            arr_5 [i_1] [i_1] [i_0] = ((var_4 ? 3586406217 : (arr_2 [i_1])));
        }
        var_18 = (min(var_18, 30837));
    }
    #pragma endscop
}
