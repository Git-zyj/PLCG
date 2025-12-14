/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (min((((!(arr_0 [i_0] [i_0])))), ((12383 ? -2078 : ((~(arr_1 [8])))))));
        var_17 = 62;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 ^= (arr_11 [i_0] [i_1] [i_4] [i_4] [i_3 - 2] [i_4 + 2]);
                                arr_15 [i_0] [i_0] [i_1] [i_4 + 1] = (min(32752, -67));
                            }
                        }
                    }
                    var_19 = (((((arr_5 [i_2 + 2]) < (arr_5 [i_2 + 1]))) ? -1 : var_8));
                    arr_16 [i_0] [i_1] [i_1] [i_2] = ((!(((max(66, -6401866392607250418))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = -79;
                                var_21 = (~24);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_22 = (((arr_18 [i_1] [i_1]) ? (min(-6401866392607250423, -47)) : ((((!((max((arr_3 [i_2 + 1] [i_1]), var_14)))))))));
                                var_23 = (!7678801385041636254);
                                var_24 = 60;
                                arr_25 [i_0] [16] [i_1] = 18446744073709551613;
                            }
                        }
                    }
                }
            }
        }
        var_25 -= (((((max((arr_21 [i_0] [1] [0] [i_0]), (min(var_10, 29184)))))) != (arr_7 [i_0] [i_0] [i_0])));
    }
    for (int i_9 = 4; i_9 < 10;i_9 += 1)
    {
        var_26 ^= (-32751 >= (arr_22 [i_9 - 1] [i_9] [i_9] [12] [i_9] [i_9 - 4]));
        arr_28 [i_9 - 2] = (((((((((~(arr_0 [i_9 - 1] [i_9 - 1])))) ? (arr_27 [i_9 - 4] [i_9 - 3]) : (((arr_18 [i_9 - 3] [i_9 - 1]) ? (arr_10 [i_9] [i_9 - 1] [i_9 + 1]) : (arr_14 [i_9] [i_9] [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9 - 4] [i_9]))))) + 2147483647)) >> (((arr_24 [i_9] [i_9 + 1] [i_9 - 1]) - 9706))));
    }
    var_27 = (max(((-(max(7678801385041636254, 7301185330484626766)))), (((~((max(32767, var_10))))))));
    #pragma endscop
}
