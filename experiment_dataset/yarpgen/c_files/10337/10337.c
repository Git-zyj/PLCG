/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 = 1416969325;
    var_22 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((!(~23555))));
                arr_6 [i_0] [i_1] = (!((((~1) ? (arr_0 [i_0 + 2]) : (arr_0 [i_1])))));
                var_23 = 2147483647;
            }
        }
    }
    #pragma endscop
}
