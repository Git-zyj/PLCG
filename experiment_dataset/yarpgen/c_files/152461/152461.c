/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (min(((max(-1, -79))), ((1948295055 ? 123 : ((112 ? 72 : 8856586343304216885))))));
                var_16 = ((((((!var_0) ? var_1 : 2346672241))) ? ((-(max(3660288260, 352108562)))) : (!-740889594)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_17 = ((var_3 ? ((((arr_5 [i_0] [i_1] [i_2] [i_3]) ? (arr_7 [i_0] [i_0] [i_0]) : var_0))) : (((arr_0 [i_0]) ? var_9 : var_2))));
                        var_18 = (~var_2);
                        var_19 = ((-var_6 ? ((var_12 ? var_9 : -356077266)) : (~var_9)));
                        var_20 = (~8437525471508585657);
                        var_21 = var_1;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_2] = ((!((((arr_8 [i_0] [i_0] [i_0] [i_2] [i_4]) ? (arr_7 [i_1] [i_2] [i_4]) : var_11)))));
                        var_22 ^= var_14;
                        var_23 |= ((var_2 ? (arr_4 [i_1] [i_2] [2]) : 352108562));
                    }
                    var_24 = (~56444);
                }
                var_25 = (min(131, (max(2389646018, 352108557))));
                var_26 = ((-(((!(((16 ? 157 : -7453791075525505975))))))));
            }
        }
    }
    var_27 = ((-((var_4 ? 176 : 16383))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                var_28 = ((118 ? -1 : 0));
                var_29 ^= ((~(((!(arr_16 [i_5 + 1]))))));
                var_30 = 6514021783140323814;
            }
        }
    }
    #pragma endscop
}
