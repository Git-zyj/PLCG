/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(((((max(var_3, var_11))) ? var_0 : (((min(var_8, 15)))))), ((((~var_6) ? 12527 : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-((-(arr_0 [i_1 - 2] [i_1 + 3])))));
                arr_7 [i_0] [i_1 + 3] = ((-(arr_2 [i_1 - 2] [i_1 + 1] [i_1 - 1])));
                var_14 ^= ((((min((min(1475574273425519811, 54)), (min(-4, var_11))))) && 65521));
            }
        }
    }
    #pragma endscop
}
