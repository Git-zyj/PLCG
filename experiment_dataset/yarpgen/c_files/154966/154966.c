/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_9 * var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 |= max(255, (((!(arr_5 [i_0] [i_1] [i_1])))));
                var_14 = 7;
                var_15 ^= ((((((~240) ? (((arr_5 [i_0] [i_0] [i_0]) / 255)) : (arr_5 [6] [i_0] [i_1])))) ? (((arr_3 [i_0] [i_0] [i_1]) ? 255 : (arr_3 [1] [i_1] [12]))) : (arr_1 [i_1])));
            }
        }
    }
    #pragma endscop
}
