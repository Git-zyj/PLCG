/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max(((min(var_10, 7575703416555439611))), var_17)) > 34250);
    var_19 += ((var_1 ? var_10 : (!var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] |= ((((min((min(7575703416555439611, -7575703416555439612)), 42))) ? 8947804040604132716 : (((((arr_3 [i_0] [i_2] [i_0]) || 3244211919))))));
                    var_20 = (max((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : 7575703416555439611)) / (arr_5 [i_0] [i_1] [i_0] [i_0]))), (min((-7575703416555439611 & -7575703416555439611), (arr_3 [i_0] [7] [7])))));
                    var_21 ^= 7575703416555439611;
                    arr_8 [i_0] [i_0] [i_2] [0] &= (((((-7575703416555439611 + 9223372036854775807) >> (((arr_4 [i_2] [i_1] [i_1] [i_2]) - 26106)))) < (min((arr_4 [i_2] [i_2] [i_1] [i_2]), 86418984752139413))));
                }
            }
        }
    }
    #pragma endscop
}
