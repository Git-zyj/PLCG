/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_3 [i_0] [i_0]);

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_19 = ((((1 == ((var_8 ? var_0 : -9223372036854775806)))) ? ((-var_13 ? (((max((arr_8 [i_0]), 82)))) : (~var_4))) : (arr_4 [i_0])));
                    arr_9 [i_0] [i_0] [1] = (arr_8 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
