/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_1 - 2] [i_1] [i_2 + 1] [i_3 - 1] = (arr_2 [i_0 + 1] [i_1]);
                        var_20 = (((arr_9 [i_0 + 1] [i_1 - 1]) ? 88 : ((158 ? 1 : (arr_7 [i_0] [i_1] [i_1] [i_2] [i_2])))));
                        var_21 *= var_6;
                        var_22 = (88 & 975085343);
                        var_23 = var_2;
                    }
                }
            }
            var_24 = (max(var_24, (((var_5 ? (-8919763298428133925 | var_13) : ((((!(arr_2 [i_0] [12]))))))))));
            var_25 = (min(var_25, (arr_8 [i_0 + 1] [i_0 + 1] [i_1 - 4] [0])));

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            var_26 = -var_15;
                            var_27 -= ((116 ^ (arr_7 [i_0] [i_0] [14] [i_5] [14])));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] = (95 <= var_4);
                            arr_19 [i_0 + 1] [i_0 + 1] [i_4 - 1] [i_5] [i_6 + 1] [i_1] [i_6 + 1] = ((-(((((arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1]) + 2147483647)) << (13113 - 13113)))));
                        }
                    }
                }
                var_28 *= var_3;
            }
        }
        var_29 -= ((var_6 << (-255 + 264)));
        arr_20 [i_0] = ((var_5 ? (arr_5 [8] [i_0 - 1] [8]) : var_6));
        var_30 = ((!(1 <= 88)));
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            {

                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    var_31 = (((((min(var_8, var_7)))) ? ((129 ? var_13 : ((var_15 >> (var_13 + 115))))) : (arr_26 [i_7 + 1] [i_7 - 2] [i_8])));
                    var_32 += (--7549);
                    var_33 = (min(var_33, ((((arr_26 [i_9 + 2] [i_9 + 2] [2]) & (((((-127 - 1) ? 64 : 46)) ^ -1084292918)))))));
                }
                var_34 ^= ((-((536870904 | ((min(63, 167)))))));
            }
        }
    }
    #pragma endscop
}
