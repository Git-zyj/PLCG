/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(((5517871481688143610 >> (var_18 + 1461870785037556004))), (max(5517871481688143610, 345010054))))) ? (~-var_7) : var_9));
    var_21 = (min(var_4, -1491));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((((max((~var_5), (arr_3 [i_0 + 1])))) ? -3219987963894453536 : (min((arr_1 [i_0]), ((1 ? var_2 : (arr_4 [i_1] [i_0])))))));
                arr_7 [i_0] [i_1] = 10122509980153165557;
            }
        }
    }
    var_22 = var_16;
    #pragma endscop
}
