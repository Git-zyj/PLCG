/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((~1) ? 1 : ((min(137, 1))))), (((((min(1, var_0)) + 2147483647)) << ((1 ? var_16 : 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((min(((~(arr_0 [i_1 - 1]))), ((1 ? (-2147483647 - 1) : 159)))) >= 32760));
                    arr_8 [i_1] = (((~(arr_4 [i_1 - 1]))));
                    arr_9 [i_0] [i_0] [i_1] = (((((min(var_16, 0)) ? 2011080698 : ((min(var_4, (arr_6 [i_1] [20] [i_2] [i_2])))))) < ((((max((arr_5 [14]), var_5))) ? ((1 ? (arr_1 [i_0]) : var_15)) : 39535))));
                }
            }
        }
    }
    #pragma endscop
}
