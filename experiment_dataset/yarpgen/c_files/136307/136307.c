/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((((((((var_9 ? var_17 : var_3))) ? (14002620149961274015 || -863049621) : (((arr_1 [i_0]) ? 224 : var_16))))) || 2933322286));
                var_19 = (max(var_19, 4444123923748277601));
                arr_5 [i_1] [i_1 - 1] = min(var_2, var_8);
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
