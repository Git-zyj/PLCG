/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((max((arr_1 [i_1 - 2]), (arr_2 [i_1 + 1])))) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (min((229 != 59267), (arr_0 [i_1 - 2] [3])))));
                var_11 *= (6269 | 483489378824712531);
            }
        }
    }
    var_12 = var_5;
    var_13 = ((-((max(((min(var_7, var_10))), (min(var_2, var_1)))))));
    #pragma endscop
}
