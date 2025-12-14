/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [20] [i_0] = (arr_0 [i_1]);
                arr_7 [i_1] [i_1] = (((((8 | 64) | ((~(arr_4 [i_0] [i_0] [i_0 - 1]))))) | ((((min(1, 1339695398))) ? (((arr_1 [i_0] [i_0]) | 65535)) : ((var_9 | (arr_0 [i_0 + 2])))))));
                arr_8 [8] = var_4;
            }
        }
    }
    var_13 = var_8;
    var_14 |= 0;
    #pragma endscop
}
