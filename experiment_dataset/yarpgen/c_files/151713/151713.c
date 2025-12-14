/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((((((60 ? 239 : var_3))) ? ((15 ? 12 : var_10)) : var_4)))));
    var_12 = (min(var_12, (((var_1 ? ((var_0 ? var_7 : var_2)) : (((var_8 || var_6) ? ((241 ? 23 : 23)) : (var_2 == 66))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (arr_0 [i_0] [i_0]);
                arr_4 [i_0] [i_0] = (32 < 254);
            }
        }
    }
    #pragma endscop
}
