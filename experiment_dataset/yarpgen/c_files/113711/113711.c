/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_1] = min((!30), (max((var_8 & var_9), (((!(arr_5 [i_0] [i_1] [i_1])))))));
                var_13 = var_4;
                var_14 = (min(var_14, (((((((arr_6 [i_0] [i_0]) & ((255 ? (arr_5 [i_0] [i_0] [i_0]) : 30))))) ? 0 : var_7)))));
            }
        }
    }
    #pragma endscop
}
