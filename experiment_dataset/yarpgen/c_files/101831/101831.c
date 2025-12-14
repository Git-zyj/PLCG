/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (1 || var_11);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_0 [i_1]);
                arr_7 [i_0] [i_0 + 2] = min(2277779908, 2277779908);
                arr_8 [i_0] [i_1] = 2275782291052608324;
            }
        }
    }
    var_15 = ((-2091948817 ? var_12 : ((-144115119356379136 ? (((var_10 ? var_7 : 0))) : ((var_2 ? 211842487 : var_7))))));
    #pragma endscop
}
