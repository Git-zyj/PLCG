/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [9] [9] = ((max(var_5, 7379373820591432871)));
                var_19 = ((((~(-32767 - 1))) & (((var_8 != (arr_0 [i_0 + 4]))))));
            }
        }
    }
    var_20 = (((((var_7 ? (min(16297, var_11)) : (((min(23, var_5))))))) ? (var_2 || var_1) : var_10));
    #pragma endscop
}
