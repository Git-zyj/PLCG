/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((max((min(0, -2273102050552348954)), 2273102050552348958)) / (~47))))));
    var_11 -= (max(var_1, -var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 *= (arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = 67;
        arr_4 [i_0] = ((!((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_13 = var_8;
        arr_5 [i_0] = (max(2817675915, (~var_0)));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] [1] |= (arr_8 [i_1] [i_1]);
        arr_10 [i_1] = var_6;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = ((((max((arr_2 [i_2]), -8518629270359697853))) ? ((max((arr_2 [i_2]), (arr_2 [i_2])))) : (((!(arr_2 [i_2]))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_14 += (((((((((-127 - 1) ? 2250273965 : 66))) ? ((max(2044693323, 3))) : ((var_2 ? 0 : 8518629270359697866))))) ? (~53) : -67));
                        var_15 += (((((((3168649891 ? (arr_15 [i_3] [i_3] [i_2]) : (arr_1 [i_2] [i_2]))) + -1))) ? (~4439) : 12));
                    }
                }
            }
        }
    }
    var_16 = (((var_4 ? var_9 : var_7)));
    #pragma endscop
}
