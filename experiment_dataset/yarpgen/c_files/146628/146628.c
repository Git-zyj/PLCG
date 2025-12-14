/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((!((min(-122, var_3))))) ? var_11 : -75));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_15 *= (max((((~179) ? 10 : -727082757)), ((((arr_4 [i_1 - 2] [i_1 - 3]) || (arr_4 [i_1 - 2] [i_1 + 1]))))));
                var_16 += arr_2 [i_0] [i_0];
                arr_6 [21] [i_1] = (arr_0 [i_0]);
            }
        }
    }
    var_17 = (min(var_17, ((((!var_0) == (-var_10 * var_11))))));
    var_18 = (min(4, (!var_3)));
    #pragma endscop
}
