/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (!9880268021038723277);
                var_17 = (((((-(arr_5 [i_0])))) ? ((30336 ? -1228800052141829474 : 30336)) : (((var_9 ? (arr_5 [i_1]) : (arr_5 [i_0]))))));
            }
        }
    }
    var_18 = min(137438951424, (((min(-1, 30339)))));
    var_19 = (((var_14 ? var_6 : -var_10)));
    #pragma endscop
}
