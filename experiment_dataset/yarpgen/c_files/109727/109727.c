/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = (((((!(arr_2 [i_0] [i_0] [i_0])))) == (!32767)));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = 20;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_17 [i_5] [2] [i_5] [i_5] [i_5] [i_5] = 20;
                        var_16 += ((+((((arr_12 [i_0]) && (arr_12 [i_0]))))));
                    }
                }
            }
        }
        var_17 = (((-((var_11 ? (arr_7 [i_0] [i_0] [i_0]) : var_10)))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_18 *= (((arr_18 [i_6]) ? ((var_2 ? (max(-8, 9)) : (((min(var_3, (arr_19 [i_6]))))))) : var_14));

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_19 *= (max(-32, 96));
            var_20 = ((+(((((arr_20 [i_6] [i_7]) ? var_7 : 18446744073709551589)) >> (20217 && 5966069163650024398)))));
        }
        var_21 &= (arr_22 [i_6]);
    }
    var_22 = var_0;
    var_23 *= ((((((max(var_8, var_1))) ? (max(var_11, 6701690643758925736)) : var_12)) == var_0));
    var_24 = (max((min(var_3, var_7)), var_9));
    var_25 = ((~(((((1 ? 48670 : var_3))) ? ((var_3 ? 18446744073709551609 : var_10)) : (((max(var_9, 5))))))));
    #pragma endscop
}
