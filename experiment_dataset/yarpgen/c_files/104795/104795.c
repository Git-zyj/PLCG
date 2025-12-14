/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = ((!(arr_1 [i_0] [i_0])));
                    var_14 = ((-((((max(var_5, var_2))) ? 63153 : ((var_3 ? (arr_2 [i_1]) : (arr_4 [i_0] [i_0] [i_0])))))));
                    var_15 *= ((2147483647 / 4350) ? (min(97, ((4373 ? 7963505042544744438 : (arr_8 [i_0] [i_0] [i_1] [i_2]))))) : ((((arr_2 [i_0]) >> (-1 + 11)))));
                }
            }
        }
    }
    var_16 |= var_10;
    #pragma endscop
}
