/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((min(1, -901844054852750125)), (min(((max(1, 1087443956))), 42298055494096468)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = min((arr_4 [1] [1] [i_1]), (max(((((arr_2 [i_0]) >= (arr_4 [i_0] [i_0] [i_0])))), (~var_12))));
                arr_7 [i_0] [i_0] [i_1] = (((((var_4 ? (arr_1 [i_0] [i_1]) : (arr_0 [i_0] [i_1])))) ? (~var_2) : (~var_2)));
                var_19 -= (max((min(126, ((101 & (arr_5 [i_0]))))), (((((arr_5 [9]) ? var_7 : (arr_5 [13]))) | (~20238)))));
            }
        }
    }
    #pragma endscop
}
