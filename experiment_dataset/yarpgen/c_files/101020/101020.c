/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min((!4294967274), 223));
                var_20 = (max(var_20, 124));
                arr_6 [i_0] = min(((var_2 | (arr_2 [i_0] [3]))), ((341232916356730664 - ((min(1020249590, 13974))))));
            }
        }
    }
    var_21 = var_11;
    var_22 |= -var_11;
    #pragma endscop
}
