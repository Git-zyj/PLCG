/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 *= ((((-7 ^ (max((arr_7 [i_0] [i_0] [i_0] [i_0]), var_0)))) <= ((min((127 ^ 32), -5)))));
                    var_12 = (((((((20 ? 22 : (arr_7 [i_0] [i_1] [i_0] [i_2]))) - ((max(134086656, 1)))))) ? (min((min(1, var_9)), ((min(var_4, 65535))))) : -14));
                }
            }
        }
    }
    var_13 = (min(2, 65527));
    #pragma endscop
}
