/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = arr_1 [i_1 + 1] [i_1 + 2];
                arr_5 [i_0] [i_0] [i_0] = (((arr_4 [17] [i_1 + 1]) ? ((((-898307803 & 5765108428503273781) ? 1973907962955872253 : (arr_2 [i_0 - 1])))) : var_6));
                var_20 -= (max((((arr_3 [i_0 + 2] [i_0] [i_1 + 2]) ? (arr_3 [i_0 - 1] [1] [i_1 - 1]) : (arr_3 [i_0 + 2] [i_0] [i_1 - 1]))), (~var_5)));
                var_21 = (max(var_21, var_13));
            }
        }
    }
    var_22 -= var_0;
    var_23 = (max(((65529 ? var_9 : -1973907962955872265)), var_8));
    #pragma endscop
}
