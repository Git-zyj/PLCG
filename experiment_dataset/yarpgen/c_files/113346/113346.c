/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((min(14336, (max((arr_0 [i_1 - 1]), (arr_3 [i_1])))))) ? (arr_2 [i_0] [i_1]) : ((var_9 ? (arr_3 [0]) : var_4)));
                var_10 = arr_0 [i_0];
            }
        }
    }
    var_11 = (40 + var_0);
    var_12 = (min(var_2, var_5));
    var_13 = (max((min((var_5 & var_2), var_4)), ((((~var_0) ? (min(-1107469023, 1)) : ((max(var_8, var_3))))))));
    var_14 = (max(var_2, (~var_4)));
    #pragma endscop
}
