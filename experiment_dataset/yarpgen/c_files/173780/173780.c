/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (((!(arr_0 [i_0 - 2]))) ? 7592290573974890233 : ((((!(arr_0 [i_1]))))));
                var_20 = (max(((~(arr_3 [i_0 + 2] [i_0 + 1]))), (arr_2 [i_0 + 4] [i_0 + 2] [i_0 - 2])));
            }
        }
    }
    var_21 = var_18;
    #pragma endscop
}
