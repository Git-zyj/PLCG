/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((var_5 ? (((2436678028 * 0) | (1 || -5190019752987389818))) : 65535));
    var_13 = 8373;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 3] [i_1] |= (min(13261948219190583067, 1157740204));
                arr_6 [i_0] [i_0] [i_0] = (~255);
                var_14 &= ((-(arr_3 [i_0] [i_1 - 2])));
                arr_7 [i_0] [16] [i_1 - 2] &= ((((((!1) ? ((((!(arr_0 [i_0]))))) : 12974541580304067265))) ? (((arr_2 [i_1 - 4]) / (arr_2 [i_1 + 2]))) : ((-(arr_2 [i_0])))));
            }
        }
    }
    var_15 = (((-var_3 || (1 || var_1))));
    #pragma endscop
}
