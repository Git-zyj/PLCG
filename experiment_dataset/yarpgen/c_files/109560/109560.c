/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((((!(((arr_2 [1] [i_1]) >= (arr_0 [i_0]))))) ? 0 : (arr_0 [i_0])));
                arr_4 [i_0] [i_1] = (!(((0 ? 1 : -1))));
            }
        }
    }
    var_19 = var_17;
    var_20 = max(var_4, (min(var_12, var_16)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_10 [i_3] = ((-(arr_6 [i_3 - 1])));
                arr_11 [1] [i_3 - 1] [1] = (arr_0 [1]);
            }
        }
    }
    #pragma endscop
}
