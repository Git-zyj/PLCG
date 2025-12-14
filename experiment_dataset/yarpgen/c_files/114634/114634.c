/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_13 = ((~(max(var_9, (min(0, var_2))))));
                        arr_9 [i_1] [i_3] = (((arr_1 [i_0]) + var_0));
                    }
                }
            }
            arr_10 [i_0] [i_1] = var_11;
            var_14 = ((-((-((((arr_0 [i_0]) >= 29189)))))));
        }
        arr_11 [i_0] = 4294967294;
        var_15 = ((var_9 << ((min((arr_1 [i_0]), 0)))));
        arr_12 [i_0] = -64;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_19 [i_0] = ((((((arr_3 [i_0] [i_0]) ? var_0 : (arr_3 [6] [i_4])))) / ((var_5 ? 19 : -1677694641))));
                        var_16 = var_0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
