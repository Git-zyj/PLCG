/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (min(var_12, var_11));
        var_13 = ((((arr_1 [i_0]) + 9223372036854775807)) << (((((arr_0 [i_0]) + 1069248891478626418)) - 34)));
        arr_3 [i_0] [i_0] = arr_1 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = (var_0 ? (-3076498788113433241 & 3689612476910379278) : (arr_4 [i_1 - 3] [i_1 + 2]));
        var_14 = (3076498788113433241 << (((((arr_4 [i_1 + 1] [i_1 + 1]) + 5828519853219105313)) - 7)));
    }
    var_15 &= ((min(-3990857977946479655, -3076498788113433241)) & (max((var_8 / var_10), var_10)));
    #pragma endscop
}
