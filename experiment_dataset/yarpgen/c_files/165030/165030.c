/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 += (max((max(((-874988720 ? var_1 : 2147483641)), (2147483634 / var_4))), var_12));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_1 + 1] [i_2] |= 6784;
                        arr_10 [i_0] [i_1] [4] [i_0] = (((-2147483622 < 30) >> (((arr_0 [i_0]) - 2007984195))));
                        var_16 -= (~var_13);
                        arr_11 [i_0] [7] [i_1] [i_2] [10] = ((((2091359014707421560 + (arr_8 [i_3] [i_3] [i_1 - 2] [i_1 - 2] [i_0 + 1]))) - (arr_1 [i_0 + 1] [i_0 + 1])));
                    }
                }
            }
            arr_12 [i_0 - 1] [i_1] = (((arr_0 [i_1 + 1]) | (~0)));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_15 [7] [7] [i_4] = ((58762 ? -9223372036854775798 : ((min((arr_5 [i_0 - 1] [i_0 + 1]), 233)))));
            var_17 = 0;
        }
        arr_16 [i_0] = 47;
    }
    #pragma endscop
}
