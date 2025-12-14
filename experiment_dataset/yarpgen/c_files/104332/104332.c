/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 *= ((((!(var_7 * 146))) ? 48743 : (((arr_3 [2]) ? -77 : var_1))));
                    arr_7 [i_0] [i_1] = var_5;
                }
            }
        }
    }
    var_12 = (min(var_12, 149));
    var_13 ^= var_8;
    #pragma endscop
}
