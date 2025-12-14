/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((~(((!(~var_0))))))));
                    var_18 = ((!(((-((~(arr_3 [i_0]))))))));
                    var_19 = (--127);
                    var_20 = (max(var_20, ((((-(~3484466040063420771)))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_21 -= ((!(~61367)));
                        arr_11 [i_1] [i_1] |= (~-17991);
                    }
                }
            }
        }
    }
    var_22 = (~var_15);

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_23 = ((!(((-((-(arr_15 [i_4] [i_4]))))))));
        var_24 = (min(var_24, ((((~(((!(arr_12 [i_4]))))))))));
        arr_16 [i_4] = (!(~var_16));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_25 = (--29765);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_6] = (((-((-(arr_18 [i_5] [i_5]))))));
                    var_26 += ((-(((!(!var_7))))));
                }
            }
        }
    }
    #pragma endscop
}
