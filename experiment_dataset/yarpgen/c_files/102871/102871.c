/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-(12353 * var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (!41980);
                    var_15 -= (max(((2339947775 ? 6354118017679400574 : 11212)), -88));
                    arr_12 [i_2] [i_1 - 2] [i_0] = (max(var_4, (((var_7 + (arr_0 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
