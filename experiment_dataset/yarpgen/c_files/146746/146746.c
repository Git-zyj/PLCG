/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_0 ? ((((!(var_5 & var_6))))) : ((3 ? 8191 : (var_4 ^ -123))));
    var_11 = (var_1 * (!3));
    var_12 = ((((((((var_7 ? var_8 : 8170))) ? var_3 : 1))) ? ((var_7 ? (((var_6 ? var_8 : var_7))) : 8166)) : var_7));
    var_13 = (((max(var_6, (var_1 < var_4))) * (!var_6)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_14 = ((var_6 <= (arr_2 [i_0 - 1] [i_0 - 1])));
        arr_3 [3] = var_1;
    }
    #pragma endscop
}
