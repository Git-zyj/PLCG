/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((~(min(7679, var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = (((!53716) > 9223372036854775807));
                arr_6 [5] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                arr_7 [i_0] = -9223372036854775807;
            }
        }
    }
    #pragma endscop
}
