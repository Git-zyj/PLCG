/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = var_6;
                                var_13 = (max(var_13, (((((((var_3 ? (arr_1 [i_0]) : var_2))) ? (arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [4] [i_0]) : (arr_5 [i_1 + 1] [i_3 + 2])))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2 + 1] = (max((((arr_5 [i_2 - 1] [i_2]) ? 2858895234 : (arr_5 [i_2 + 1] [i_2]))), (var_2 + var_8)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_14 = ((-((((var_11 - 8064) <= var_11)))));
                                var_15 = (arr_8 [i_0] [i_1] [i_2 - 1] [6]);
                                arr_18 [i_0] = ((2858895234 % ((((((min(var_4, 3954254820))) || 4294967295))))));
                            }
                        }
                    }
                    var_16 = min((arr_12 [i_0] [i_0] [1] [i_2] [i_2] [i_2 - 1]), ((995896702687378497 ? (~-995896702687378497) : -33)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_17 = ((~((~(8 & 5097815296121107495)))));
                        var_18 &= ((((~(arr_12 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7 + 1])))) ? ((2525973953 << (-1872137751 + 1872137779))) : (((-(arr_9 [1] [i_8 - 2] [i_8 - 1] [i_8] [i_7] [i_7 + 1])))));
                        var_19 = (((arr_21 [i_8 - 3] [i_8] [i_8] [i_7 + 1]) ? (~33) : (arr_21 [i_7 - 1] [i_7 - 1] [i_8 - 3] [i_7 - 1])));
                    }
                }
            }
        }
    }
    var_20 = ((((var_7 - ((max(var_11, 36770))))) ^ 1887766578));
    var_21 = (min(((~(-32767 - 1))), var_7));
    #pragma endscop
}
