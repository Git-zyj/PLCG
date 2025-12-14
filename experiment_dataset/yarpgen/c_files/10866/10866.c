/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = ((21586 * (max(((var_0 ? 61432 : (arr_0 [i_0]))), ((max(4094, (arr_0 [i_0]))))))));
        var_19 = (((4286 * 43948) ? ((~(4080 & 65535))) : ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((43929 || (((~(!30600))))));
        arr_4 [i_0] = (max(((((max(16418, 65523))) >> ((((11097 ? (arr_1 [i_0]) : (arr_2 [i_0]))) - 50343)))), ((((arr_0 [i_0]) && 14676)))));
        var_20 = (min(var_20, var_3));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = ((((max(16021, 14586))) ? ((max(10, 43929))) : 43387));
        var_22 = var_0;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = 61432;
        var_23 = 65523;
    }
    var_24 = max(43954, (((14600 < (2980 - 7297)))));
    #pragma endscop
}
