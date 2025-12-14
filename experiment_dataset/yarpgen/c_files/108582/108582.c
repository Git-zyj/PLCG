/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_8 | var_3) == (((var_4 ? var_3 : var_9))))) || var_5));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_12 += ((((54491669 ? 1 : 0)) / (arr_7 [i_0 - 3] [i_0 - 2])));
                        var_13 = ((((((((0 ? -130 : 1))) ? ((0 << (var_5 - 17850))) : (35 + 124)))) && ((((arr_6 [i_0] [i_1] [i_2 + 3]) << (arr_3 [i_0] [i_3]))))));
                    }
                }
            }
        }
        var_14 = (((((-9223372036854775807 - 1) >> (var_7 + 19))) | ((182 << (((arr_12 [i_0] [i_0] [i_0] [i_0 - 4] [i_0] [i_0]) - 15277))))));
    }
    #pragma endscop
}
