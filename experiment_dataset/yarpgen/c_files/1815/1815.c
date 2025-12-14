/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? -var_2 : var_5));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = ((-(((2311470852032112800 < (~121))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = ((-(min(var_2, 12383888560413531476))));
            var_14 &= ((arr_3 [i_0] [i_0]) + (((~var_8) ? (~16135273221677438815) : var_2)));
            var_15 = ((0 ? (((((((8098362267087191911 >> (40847 - 40787)))) && var_3)))) : 15401173350140588600));
            var_16 = ((-(min(2305843009213693951, -9009))));
            arr_4 [i_0] = var_5;
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_0] [i_2] [i_0 - 1] = (arr_8 [i_2 + 1] [i_0 - 1]);

            /* vectorizable */
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                var_17 = -17854360962995309993;
                var_18 = (arr_0 [i_0]);
                arr_13 [13] [13] [i_3] = ((-var_5 == (750684696152927942 != 23876)));
                arr_14 [i_0 + 1] [i_2] [i_2] [i_2] = ((2311470852032112800 ? var_9 : (arr_8 [i_3 - 2] [i_3 - 2])));
            }
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_19 |= (min((((arr_6 [i_0 + 1] [i_4 - 1]) ? (~4058990863871961854) : (arr_2 [i_4] [i_4 + 2]))), ((((arr_5 [i_0 + 1] [i_0 - 1]) ? 100 : var_8)))));
            var_20 = (min(var_20, (arr_1 [i_0 - 1] [i_4 + 2])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_21 = (arr_11 [i_4 - 1] [i_5] [i_6]);
                        var_22 &= 17129690922514495933;
                        var_23 = (min(var_23, ((((((0 ? (arr_7 [i_0 - 1]) : var_9))) + ((16135273221677438827 ? 4642504357840731403 : (arr_12 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_0 + 1]))))))));
                    }
                }
            }
            var_24 = ((var_4 ^ ((~(arr_11 [i_0 + 1] [i_0] [i_0 - 1])))));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_25 [i_7] = (((~var_2) ? 97 : -var_8));

        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            var_25 = ((-(((arr_23 [7]) ? 2311470852032112782 : (arr_22 [i_7] [1])))));
            var_26 -= (~11515788655179915028);
            var_27 = var_6;
        }
        var_28 = arr_6 [i_7] [i_7];
    }
    #pragma endscop
}
