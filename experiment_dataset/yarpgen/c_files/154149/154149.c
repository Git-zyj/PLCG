/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((~(arr_0 [i_0]))));
                var_14 = (max((max(-59, (arr_1 [i_1] [i_0]))), (arr_1 [i_0] [i_0])));
            }
        }
    }
    var_15 = ((((max(-4649525909479076761, 602))) ? (max(((max(var_2, var_3))), 12740435132152284575)) : ((max(((max(var_7, var_2))), ((var_0 ? var_6 : 167)))))));
    #pragma endscop
}
