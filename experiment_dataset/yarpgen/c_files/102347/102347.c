/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] = 14137314201075558706;
                    var_13 = (min((max((arr_5 [i_0 - 1]), (arr_5 [i_0 + 2]))), 14137314201075558706));
                    arr_8 [i_0] [i_0] [i_0] = (arr_1 [i_0 - 2] [i_1]);
                }
            }
        }
    }
    var_14 &= ((var_12 ? var_7 : 14137314201075558738));
    var_15 ^= (max(var_0, 210));
    #pragma endscop
}
