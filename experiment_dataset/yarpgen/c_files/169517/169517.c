/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_15 = (-(64 & 24));
        arr_2 [i_0] [i_0] = ((+(((arr_0 [i_0]) >> (((arr_0 [i_0]) - 6629195685370047629))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] = ((~(arr_6 [i_0] [i_0])));
            arr_8 [2] [2] [2] = (((arr_3 [i_1]) ? ((((arr_0 [i_0]) ? (-32767 - 1) : 64))) : ((var_9 ? 1173 : (arr_6 [i_0] [i_1])))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_14 [19] [i_2] [i_2] [i_3] [i_0] [i_0] = (((arr_10 [i_3 - 1] [i_1] [i_2 - 2]) ? (arr_10 [i_3 + 1] [i_1] [i_2 + 4]) : var_0));
                        arr_15 [i_3] [i_3] [i_2] [i_3] [i_1] [i_3] = ((var_7 ? (arr_0 [i_2 + 2]) : var_5));
                    }
                }
            }
            var_16 = (arr_13 [i_0] [i_1] [i_1] [i_0]);
            arr_16 [i_1] = ((-((-32751 ? -87 : (arr_12 [i_0] [20] [i_1] [i_1] [i_1] [i_1])))));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    arr_28 [i_6] [i_6] [i_5] = ((-(max(-var_1, (min(15018839624459900143, (arr_4 [i_0] [i_4])))))));
                    arr_29 [i_0] [i_4] [i_5] [i_6] [i_4] [i_4] = (!14437);
                    arr_30 [0] &= arr_12 [1] [12] [2] [1] [i_4] [i_6];
                    var_17 = (max(var_17, (((~(~var_4))))));
                    arr_31 [i_0] [i_4] [i_5] [i_5] = ((-(((arr_12 [i_0] [i_5] [18] [i_6] [i_5] [i_6]) / (arr_25 [i_0] [i_6 + 3] [i_5] [i_6])))));
                }
                arr_32 [i_5] = (((((min(var_1, (arr_26 [i_5] [1] [i_0] [i_0] [i_0]))))) > ((var_4 ? var_7 : (arr_20 [i_4])))));
                var_18 = ((((~((min(119, var_10))))) < 1));
                var_19 = 1;
            }
            var_20 = (max(var_20, (((+(min((arr_11 [8]), (arr_11 [4]))))))));
            var_21 = (min((((arr_1 [i_4]) ? (arr_9 [i_4] [i_4] [i_4] [i_4]) : (arr_5 [i_0] [i_4]))), (max((arr_23 [i_4] [i_4] [10]), (arr_9 [i_0] [i_0] [i_4] [i_4])))));
        }
        var_22 += ((~((-(((arr_10 [i_0] [i_0] [i_0]) ? 29 : var_7))))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        arr_35 [i_7] [i_7] = -14971206721417203260;
        arr_36 [8] |= (min(((((arr_13 [i_7] [i_7] [i_7] [i_7]) < (arr_5 [i_7] [i_7])))), (((arr_5 [i_7] [i_7]) + (arr_26 [12] [i_7] [i_7] [i_7] [18])))));
        arr_37 [i_7] = ((~((354341381 ? 29 : -21296))));
        var_23 = (min(var_23, ((((((var_14 ? (arr_0 [i_7]) : ((var_7 ? var_3 : 2277279781791238715))))) ? ((((~var_2) ? 26294 : (arr_26 [14] [4] [20] [i_7] [i_7])))) : (min((arr_13 [i_7] [i_7] [i_7] [i_7]), (((~(arr_25 [i_7] [i_7] [i_7] [i_7])))))))))));
    }
    var_24 = var_14;
    var_25 = (min(var_25, var_0));
    #pragma endscop
}
