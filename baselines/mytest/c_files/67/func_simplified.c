/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/67
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4)
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 2] [i_0] = var_8;
                var_20 = (((((arr_1 [i_0 + 1]) <= ((var_19 ? var_16 : (3019765929U))))) || (arr_4 [i_0] [i_0] [11U])));
                arr_6 [i_0] [i_0 - 1] [i_0] = ((((((((var_16 >= (arr_1 [3ULL]))))) / (arr_4 [16U] [i_1] [i_1]))) % ((((((arr_3 [i_0] [i_0] [i_1]) ^ (arr_0 [i_0] [i_1])))) ? (var_5 <= var_11) : (arr_0 [i_0 + 2] [i_0 + 3])))));
            }
        }
    }
    var_21 -= var_4;
    var_22 = (~var_9);
    var_23 = (max(var_23, var_19));
    var_24 -= var_11;
    #pragma endscop
}
