/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = ((~(max((min(var_6, -1)), (87 <= var_11)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 2] = (((~8) & ((-19 ? 2617945162770069386 : (arr_0 [i_0 + 1] [i_0 - 2])))));
        var_14 = (arr_0 [i_0] [6]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_15 = 7;
            var_16 = var_0;
            var_17 |= (((var_4 <= -19) <= (~22)));
            var_18 = ((((arr_0 [i_0] [i_0]) ? 10938451907081513672 : var_3)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_17 [1] [i_0] = (arr_9 [i_4] [i_2] [i_2]);
                        var_19 = (1 < var_11);
                    }
                }
            }
            var_20 = ((!((3857908002798660527 || (arr_7 [i_2])))));
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_33 [i_5] [i_5] [i_7] [i_8] [i_7] [i_7] [i_8] = ((((((2617945162770069386 ? 385267054 : 1))) ? var_9 : ((var_8 ? 25 : var_11)))));
                            var_21 *= (((((-1881796572 ? 48 : 169))) <= (min(var_1, var_5))));
                            var_22 = (max(var_9, (arr_27 [i_5] [i_7] [i_5] [i_7])));
                            var_23 = ((5 <= (min(var_11, 1336816084))));
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            arr_38 [i_5] [i_6] [i_6] [i_7] [i_5] [i_8 + 1] [i_10] = (((((1522898650521814289 ? (var_3 < -1522898650521814272) : 467170639))) ? ((18 ? -2617945162770069387 : ((var_5 ? var_7 : -10)))) : var_4));
                            arr_39 [i_5] [i_6] [i_6] [i_7] [i_8] [i_10] [i_5] = (min((((arr_25 [i_6 - 1] [i_7] [i_8 + 3]) ? (((var_8 ? var_3 : var_7))) : ((var_1 ? 10553308140784478011 : -2617945162770069386)))), ((max(211525677, 1)))));
                            arr_40 [i_5] [i_10] = (arr_34 [i_5] [15] [i_5]);
                        }
                        arr_41 [i_8] [i_5] [i_6] [i_6 - 1] [i_5] [i_5] = (((arr_19 [i_5] [i_5]) <= (min((arr_27 [i_5] [i_6] [i_5] [i_7]), var_11))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    arr_49 [i_5] [i_11] = (((-var_1 <= 16777088) <= -10));
                    var_24 = (max(var_24, 4850857418366166015));
                }
            }
        }
        var_25 = min((max(((5 ? var_1 : 1979833412101936370)), var_0)), ((((arr_28 [i_5] [i_5]) | (arr_27 [i_5] [i_5] [i_5] [i_5])))));
        var_26 = ((var_8 < (1336816077 | 62)));
    }
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 24;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            {
                var_27 = ((!(((arr_50 [i_13 - 1]) && 4294967295))));
                var_28 = (max(var_28, var_4));
                arr_55 [i_14] [i_14] = var_9;
                var_29 = ((53412 ? (((-17 <= ((1 ? 1 : 2287828610704211968))))) : var_5));
            }
        }
    }
    #pragma endscop
}
