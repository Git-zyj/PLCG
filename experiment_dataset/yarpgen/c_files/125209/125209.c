/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(124, -1));
    var_12 |= ((~(((var_2 ? var_2 : var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((((max(-124, var_4))) ? ((max(var_1, (25873 || -4700675573544247966)))) : ((((-127 - 1) > -6))))))));
                    arr_9 [i_1] = (!(((arr_3 [i_1]) && (arr_2 [i_0] [i_1]))));
                }
            }
        }
    }
    var_14 |= 6;
    #pragma endscop
}
