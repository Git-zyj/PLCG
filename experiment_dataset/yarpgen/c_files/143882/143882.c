/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_10;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max(((-((63 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))))), -var_17));
        var_21 = (((((((arr_1 [i_0]) ? 26 : var_15)))) ? ((5451 >> (((arr_3 [i_0] [i_0]) - 150)))) : ((var_4 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_22 = (((((((83 ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? var_2 : (((arr_0 [i_0] [i_0]) ? 26451 : (arr_0 [i_0] [i_0]))))) == ((var_19 >> (((var_15 % -99) - 88))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_23 = (min((!var_0), (~97)));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_24 = (max(var_2, 11289));
                        var_25 = ((!((max((arr_6 [i_3]), (~0))))));
                    }
                }
            }
        }
        var_26 = ((((max(var_17, 387))) & (arr_14 [i_1] [19] [i_1] [i_1] [i_1])));
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] [i_5] &= ((32766 < (~var_10)));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_15 [i_5] [i_6] [i_7] [i_8] [i_6]) >> (((arr_0 [i_8] [i_7]) - 225))));
                        var_27 = (arr_25 [i_8] [i_6]);
                        arr_27 [i_5] [i_8] &= -12;
                    }
                }
            }
            var_28 = (((arr_20 [i_5]) ? ((125 ? 21 : -14476)) : (arr_6 [i_5])));
        }
    }
    var_29 = (max((var_3 != var_7), 48));
    #pragma endscop
}
