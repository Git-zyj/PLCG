/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [5] [i_2] [i_2] = (((((arr_9 [i_0] [i_1] [i_2]) ? var_10 : 627716699)) | (arr_9 [i_0] [i_1] [i_2])));
                    var_20 = (((((4294967295 ? 77 : (arr_1 [7]))) != (var_7 <= 31852))) ? (--24721) : (((!var_14) * ((var_13 ? var_10 : var_17)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((!(130899595 < -5196))))));
                                var_22 = arr_13 [i_2];
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((var_4 ? 395422184 : var_6))) ? var_12 : (261888 >= 10273541504216007295));
    var_24 = (((((((~1820012752) & -122)) + 2147483647)) << (var_2 - 3405)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_30 [i_5] = 9;
                                arr_31 [i_5] [i_6] [i_7] [i_5] [i_9] [12] = (max(((-((-(arr_17 [2]))))), (max((min(var_18, 1756574596)), (1 || 1111559136)))));
                            }
                        }
                    }
                }
                var_25 ^= var_2;
                arr_32 [i_5] = var_7;
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_26 = (~(min((((arr_24 [i_5]) & (arr_24 [9]))), (arr_36 [i_5] [4] [4] [i_10 - 1] [i_10] [12]))));
                            var_27 = -1582520521;
                            var_28 = 17886343204327448240;
                            var_29 = (((min(var_17, (arr_28 [i_5])))));
                        }
                    }
                }
                var_30 = (max((min((((-15 < (arr_26 [i_6] [i_5] [i_5] [6] [i_5])))), (min(56860, var_4)))), (max(var_12, -2029919580))));
            }
        }
    }
    var_31 = var_3;
    #pragma endscop
}
