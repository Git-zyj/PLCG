/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = var_7;
                    arr_9 [i_2] [i_1] [i_1] = arr_4 [i_1] [i_1] [i_1];
                }
            }
        }
    }
    var_14 = (((min((var_12 - -17841), (var_9 > var_11))) == (((max(153, 152))))));
    #pragma endscop
}
