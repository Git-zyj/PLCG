/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((15032597557130626317 ? ((-105 ? var_10 : var_9)) : (!var_11)))) ? 15032597557130626309 : (15032597557130626309 * 3414146516578925327)));
                var_16 = (arr_0 [i_1]);
            }
        }
    }
    var_17 = (((min(var_4, var_12))));
    #pragma endscop
}
