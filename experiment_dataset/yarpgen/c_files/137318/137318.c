/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (max((((((!(arr_2 [i_0]))) && ((max(193, 42)))))), (min(var_1, (arr_1 [i_0 - 1] [i_0 + 1])))));
                var_20 = (min(var_20, ((((max((3052216724 < 4549), (~32768))) & (min(-1273094826, -70)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_21 = (min((max(242, -9617380325967214001)), 3440739509023071315));
                var_22 = (~-785908721);
            }
        }
    }
    var_23 = ((-(var_8 > var_10)));
    #pragma endscop
}
