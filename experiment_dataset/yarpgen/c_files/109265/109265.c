/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((!(((((27215 ? 7024630391528754283 : 15)) & (!1325282871)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = (~27);
                    var_15 ^= ((((!(arr_4 [i_0] [i_1 + 3] [i_0 - 2] [i_0 - 2]))) ? (min((-1 | 1), 1)) : (63 / 9)));
                }
            }
        }
    }
    var_16 = (max(var_7, 1));
    #pragma endscop
}
