/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_15;
    var_21 = (max(var_21, var_19));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_22 += ((-((max(var_9, (arr_2 [i_0] [i_0]))))));
        var_23 = (min((max(var_11, (~var_2))), (~var_9)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (arr_0 [i_1] [i_1]);
        var_24 = (max(var_24, (((((arr_2 [i_1] [i_1]) >> (-55 + 77)))))));
    }
    #pragma endscop
}
