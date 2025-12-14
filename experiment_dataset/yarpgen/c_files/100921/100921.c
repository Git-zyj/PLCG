/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((1 ? ((min(1, var_9))) : (arr_0 [i_0])))) ? (((min(var_3, (arr_2 [i_0] [i_0]))))) : ((var_10 - (((arr_2 [i_0] [i_0]) - 34359738367)))));
        var_13 = ((((max(5877312312380746600, (min(1, 5852342973053459713))))) ? (((arr_1 [i_0]) ? var_2 : ((max((arr_1 [i_0]), var_11))))) : 2147483647));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, var_10));
        arr_7 [18] [18] = (arr_5 [6] [i_1]);
        var_15 = ((var_11 * (arr_5 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_16 = (2392505762703874813 && var_7);
                        var_17 = (max(var_17, ((((((arr_12 [i_3 - 1] [i_3 - 1] [i_3 + 2]) + 2147483647)) >> (((arr_12 [i_3 + 2] [i_3 + 1] [i_3 + 1]) + 1512113155)))))));
                    }
                    var_18 = 48993;
                    var_19 += (arr_8 [i_1] [i_2] [i_3 + 1]);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_22 [i_5] [i_6] [i_6] = var_3;
            var_20 = ((34359738349 + ((min((min(var_0, 2130308055)), (arr_12 [4] [i_6] [i_6]))))));
            var_21 = (max(var_21, 14614));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_22 = var_6;
                            var_23 = (min(var_23, ((max(2392505762703874819, -2130308046)))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_24 = (max(var_24, (((26329 ? -1603142781 : 241)))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        var_25 = var_3;
                        var_26 = 2130308055;
                        var_27 &= (var_6 / 47);
                    }
                }
            }
            var_28 = (((arr_2 [i_5] [i_10]) ? (arr_2 [i_10] [i_5]) : var_7));
        }
        arr_38 [7] = ((((arr_8 [i_5] [i_5] [i_5]) ^ (arr_8 [i_5] [i_5] [i_5]))));
    }
    #pragma endscop
}
