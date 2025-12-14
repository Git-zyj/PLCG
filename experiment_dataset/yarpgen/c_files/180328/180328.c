/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_0] = (((arr_4 [i_1]) & ((((max(255, (arr_7 [i_1])))) ? ((198 ? (arr_5 [i_1] [i_1] [i_1]) : (arr_6 [9] [9]))) : (!58)))));
                var_13 = (arr_7 [i_1]);
                arr_9 [i_0] [i_0] [i_1] = (((~50690) ? (min(4095, ((~(arr_1 [i_1] [i_1]))))) : (var_6 < var_0)));
            }
        }
    }
    #pragma endscop
}
