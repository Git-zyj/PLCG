/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_1, var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (min(((-(((((arr_1 [6] [i_0]) + 2147483647)) << (((arr_0 [i_1]) - 12355)))))), (arr_5 [i_0] [i_0])));
                arr_7 [i_1] [i_1] = arr_0 [i_1];
                var_19 = (min(var_19, -1230355283));
            }
        }
    }
    var_20 = (max(var_20, ((((((((65535 << (var_15 - 5724627)))) || var_6))) >> (((~1) + 27))))));
    var_21 = (((((var_1 << (var_9 + 1317511595))) > var_11)) || ((max((~var_1), var_12))));
    #pragma endscop
}
