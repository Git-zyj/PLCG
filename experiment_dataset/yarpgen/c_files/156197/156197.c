/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((min(8184, 96)), var_5);
    var_19 = var_7;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] = ((-((~((~(arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] = (arr_2 [i_0 - 1]);
        var_20 = ((-(!1069837742)));
        var_21 = ((!((max((arr_0 [6]), ((-8179 ? var_4 : (arr_1 [i_0] [i_0]))))))));
        var_22 = (((((((((var_10 ? 32767 : (arr_2 [7])))) ? (~63) : var_10)) + 2147483647)) >> ((((~((~(arr_1 [i_0 - 1] [6]))))) + 5082243577528823155))));
    }
    var_23 = -8179;
    #pragma endscop
}
