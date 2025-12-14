/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_12 ? ((max(288230376151711742, var_9))) : var_2))) ? ((((((var_2 ? var_1 : 281474976710656))) ? var_7 : ((var_1 ? var_6 : var_4))))) : (((((-1 ? var_10 : 1))) ? (~-2755613310716554044) : (max(var_10, var_9))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((200 ? (734 == 182) : 119));
        arr_2 [5] [i_0] = (min((arr_1 [i_0]), var_12));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_15 = (min(var_15, ((((((1996875524093943549 ? 144115050636902400 : 0))) ? 1 : ((1 << ((((var_12 ? 161 : 182)) - 153)))))))));
        arr_5 [0] = (arr_3 [14]);
        arr_6 [i_1] = ((-var_3 ? (((17815 ? (arr_4 [i_1] [i_1 + 2]) : ((28145 ? var_1 : 2822609680))))) : (arr_3 [i_1 - 1])));
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        var_16 = ((~(arr_8 [i_2 - 3])));
        var_17 = (~var_12);

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 &= (min((((min((arr_8 [i_3]), var_2)))), ((+((((arr_10 [i_2] [i_2] [i_3]) && var_3)))))));
            var_19 *= ((!(((var_11 / ((max(1, 1))))))));
        }
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_20 = var_12;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [i_4] [i_4] [i_4] = (arr_10 [i_4] [i_5 + 2] [i_6]);
                        arr_26 [i_4] [i_6] [i_4] = ((-(~var_8)));
                        arr_27 [i_4] [1] [7] [i_4] = ((((1 ? (arr_8 [7]) : var_5)) != 97));
                    }
                }
            }
            arr_28 [i_4] [i_5] [i_5] = -27023;
        }
        var_21 = (arr_12 [i_4]);
        arr_29 [i_4] = (((((~(max(var_9, var_8))))) ? (((~(-127 - 1)))) : (max(1205038639736968892, (min((arr_23 [i_4 + 2] [i_4] [i_4] [8]), var_9))))));
        var_22 = (max(var_22, ((((!(((var_9 >> (arr_12 [7])))))) ? (((((var_8 ? var_4 : var_3))))) : (((1 ? -6 : var_1)))))));
        arr_30 [i_4] [i_4] = (max((((!(arr_22 [i_4 - 1] [i_4] [i_4] [i_4])))), (((arr_13 [i_4] [i_4]) ? (((!(arr_7 [i_4] [i_4])))) : 0))));
    }
    var_23 = var_9;
    #pragma endscop
}
