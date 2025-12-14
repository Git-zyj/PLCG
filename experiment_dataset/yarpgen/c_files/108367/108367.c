/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_12 ? (9 && 3536) : (((((9 ? 0 : var_1))) ? -9223372036854775805 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((!(((var_3 ? (arr_2 [i_1 - 2] [i_1 + 1]) : (arr_2 [i_1 - 2] [i_1 + 1]))))));
                arr_6 [i_0] [i_0] [6] = (((~9223372036854775807) * (((((arr_3 [i_0]) < ((15504365802852963594 ? -9223372036854775807 : 62))))))));
            }
        }
    }
    #pragma endscop
}
