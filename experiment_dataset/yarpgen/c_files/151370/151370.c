/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (((((max(255, (arr_0 [i_0] [i_1]))))) ? ((((min((arr_2 [i_0]), var_6))) / var_6)) : ((((arr_0 [i_0] [7]) && (arr_5 [i_0] [i_0]))))));
                arr_8 [i_0] [i_0] [i_0] = (((((var_9 ? var_4 : var_12) / var_3))));
            }
        }
    }
    var_14 = (max((var_6 / var_0), (((((7061409886898554781 ? 13889848193595167857 : 173))) ? (min(1, var_9)) : (1014428221 * var_9)))));
    #pragma endscop
}
