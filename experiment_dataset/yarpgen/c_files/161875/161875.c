/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] &= ((-((var_5 + (arr_2 [i_2 - 1] [i_2 + 1])))));
                    arr_7 [i_1] [i_1] [2] [3] = 128;
                }
            }
        }
    }
    var_12 = -118;
    var_13 *= var_1;
    var_14 = ((var_0 ? ((-1796422427 ? ((-116 ? -32748 : 6116278044731451867)) : (((12288 ? 2965780574 : 43412))))) : 95));
    var_15 = (max(((min(-97, var_6))), ((var_5 ? var_0 : var_8))));
    #pragma endscop
}
