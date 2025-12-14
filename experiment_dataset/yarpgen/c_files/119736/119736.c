/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_5 ? (var_3 > 20690) : (230 % var_3))), var_0));
    var_11 *= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [1] = (max(var_0, (min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 3])))));
                    var_12 = (((((arr_3 [i_1]) >> (min((arr_3 [i_0]), 47))))) ? (arr_8 [i_1 - 1] [i_1 + 2] [i_0] [i_0]) : (((((2571812197 << (3950807207 - 3950807195)))) ? (min(var_4, (arr_2 [i_0]))) : var_4)));
                }
            }
        }
    }
    #pragma endscop
}
