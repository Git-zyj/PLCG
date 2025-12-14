/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((var_2 ? (~var_6) : ((~(arr_1 [i_0] [i_0])))));
        arr_4 [0] = ((-(arr_1 [i_0] [i_0 + 1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        var_14 -= (arr_6 [i_0 - 1] [i_0 - 1] [i_3 + 2]);
                        var_15 = (min(var_15, (arr_6 [i_2 + 3] [i_2 + 2] [i_2 + 2])));
                        var_16 = (min(var_16, ((((arr_9 [i_0] [i_0 + 1] [i_2 + 1] [i_3 - 2]) > (arr_9 [i_0] [i_0 - 1] [i_2 + 1] [i_3 - 1]))))));
                        var_17 = var_10;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    var_18 *= ((var_13 ? (arr_5 [i_5 + 1] [i_4 + 3] [i_0 + 1]) : (arr_5 [i_5 + 1] [i_4 - 1] [i_0 - 1])));
                    arr_17 [i_4] = ((+(((arr_6 [i_4] [i_4 + 2] [i_4 + 2]) ? var_0 : (arr_1 [i_0] [i_4])))));
                }
            }
        }
        arr_18 [11] = ((-1839950331 ? 5 : -960037948));
    }
    var_19 = var_6;
    var_20 = 1697041885;
    var_21 = ((~(((((var_3 ? var_3 : var_9))) ? var_9 : var_2))));
    #pragma endscop
}
