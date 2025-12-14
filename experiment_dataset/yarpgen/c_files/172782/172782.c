/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((((var_4 ? ((var_3 ? 13856 : 2892718793)) : 13856))) ? var_0 : (((~(~2892718795)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (min((((((var_7 ? 2813238907 : (arr_2 [i_0] [i_0])))) ? var_2 : var_7)), 23077));
                arr_5 [i_0] &= (min(100820201985372013, 23077));
            }
        }
    }
    #pragma endscop
}
