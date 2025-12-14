/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((max((max(1798744941, (arr_0 [i_0] [i_1]))), 9805))))));
                var_13 = (max((arr_2 [i_0]), (!55730)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_14 -= (arr_8 [i_0]);
                                var_15 -= 55731;
                                arr_12 [i_0] [i_0] [10] [i_3] = (!9805);
                                arr_13 [i_0] = ((9805 <= (arr_11 [i_4])));
                            }
                            var_16 = ((((((arr_2 [i_2]) ? 55739 : (arr_2 [i_1])))) / (((9801 ? var_3 : 55720)))));
                        }
                    }
                }
            }
        }
    }
    var_17 -= var_5;
    var_18 = var_4;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_16 [i_5] |= (55720 && 55740);
        var_19 = (((arr_15 [i_5]) ? var_1 : ((var_9 | (arr_8 [i_5])))));
    }
    #pragma endscop
}
