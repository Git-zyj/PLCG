/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((((max(var_10, (arr_2 [i_1] [1])))) ? (max((arr_4 [i_1] [i_0]), var_1)) : 3931731070))) ? ((-1 ? ((var_12 ? var_12 : var_6)) : 0)) : ((((arr_5 [i_0] [i_1]) ? 1 : (18446744073709551613 > 120))))));
                arr_7 [i_0] [i_0] [i_0] = var_9;
            }
        }
    }
    var_17 = (701444350280456579 || 1);
    var_18 = (max(((~((max(var_0, var_7))))), var_12));
    #pragma endscop
}
