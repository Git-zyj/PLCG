/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = max(229, var_11);
    var_15 = (min(var_9, (!var_10)));
    var_16 = 36530374;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_17 = ((-1 - (-9223372036854775807 - 1)));
            var_18 = ((-((((((10 ? -8 : 288230376151711743)) + 9223372036854775807)) >> ((((var_6 | (arr_4 [i_0] [i_0]))) - 13416285334897764451))))));
            var_19 = 8;
            arr_6 [i_0] = (((arr_1 [i_0]) ? ((((0 != (arr_3 [i_0] [i_0]))))) : (min(55829330, -27))));
        }
        var_20 = ((~((((((var_11 ? var_9 : var_3))) == var_7)))));
        arr_7 [i_0] = ((min(((~(arr_0 [i_0]))), var_6)) & 1);
        arr_8 [i_0] = 1;
        var_21 |= (!var_3);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    var_22 = (~-22410);
                    var_23 += ((!(arr_5 [i_2] [i_3])));
                    var_24 += ((var_2 ? var_4 : var_8));
                    var_25 ^= ((var_0 ? (arr_16 [i_2] [i_4 + 2]) : (arr_11 [i_2] [i_2] [i_2])));
                    arr_17 [i_2] [i_4] [i_3] [i_3] = (max((((((var_9 << (var_9 - 54781)))) ? ((var_4 ? (arr_4 [i_4 + 4] [i_3]) : (arr_1 [i_2]))) : (arr_10 [i_4 + 3] [i_4]))), (1 >= 35008)));
                }
            }
        }
        var_26 = ((var_11 ? (arr_3 [i_2] [i_2]) : (((var_4 + ((max(1, (arr_12 [7])))))))));
        var_27 = (min(var_27, 546494155));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_28 = (0 / 248);
        var_29 = ((-20 ? 6 : (arr_5 [i_5] [i_5])));
        arr_21 [i_5] [0] = (((((-32767 - 1) + 2147483647)) >> (var_9 % 1)));
    }
    for (int i_6 = 3; i_6 < 18;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_30 -= var_6;
                                arr_36 [i_6] = var_4;
                            }
                        }
                    }
                    var_31 &= var_11;
                }
            }
        }
        var_32 = min(-6, ((((min(var_7, 8792054745424482467))) ? -2145139120 : ((var_9 ? (arr_30 [i_6 - 1] [i_6] [i_6] [i_6]) : 32754)))));
    }
    #pragma endscop
}
