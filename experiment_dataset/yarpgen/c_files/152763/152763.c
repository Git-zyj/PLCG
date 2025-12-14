/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-127 - 1) ? 127 : (-127 - 1));
    var_16 |= ((0 ? 184 : 127));
    var_17 = (((min(var_10, 1218789537)) - var_9));
    var_18 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = -1300042297;
                    var_19 = (min(var_19, ((max(-127, ((((((arr_1 [i_0]) & (arr_1 [i_0])))) ? ((54 ? -241906856 : 1)) : (1 <= 127))))))));
                    arr_9 [i_0] [i_0] [i_0] = 1473470883;
                    var_20 = ((~(max(18, (((arr_1 [i_1]) - 241906856))))));
                }
            }
        }
    }
    #pragma endscop
}
