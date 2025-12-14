/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = ((0 / (arr_0 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((-(arr_0 [i_0] [i_0])));
        var_19 = (((var_14 | var_3) & (((~(arr_3 [i_0] [i_0]))))));
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_20 = 1914605772;
                var_21 += 4064;
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_22 = (((arr_7 [i_4]) >= var_7));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_1] = -var_14;
                            var_23 |= (((4064 * 3107013372) ? (!var_14) : var_0));
                            var_24 = (~8351873024047993459);
                            var_25 = -99;
                            var_26 = (min(var_26, (15164527843964581840 >= 3406286962290080967)));
                        }
                    }
                }
            }
            var_27 = (min(((((~53153) ^ ((max(3716, var_12)))))), -7936601771385727490));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_28 = (min(18446744073709551595, 311695916));
            var_29 -= min((((-(max(1914605772, var_16))))), 3637251983650552506);
        }
        var_30 = (max((max((-4023140606607825132 ^ var_1), (1843822133 | var_0))), (((32599 & (((arr_22 [i_1]) ? var_16 : 1)))))));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 7;i_8 += 1)
    {
        var_31 = (!var_9);
        var_32 |= (1 <= var_6);
        var_33 = (min(var_33, (arr_8 [i_8 + 3])));
        var_34 -= (((3107013353 / var_5) != 1914605768));

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_35 += (((arr_12 [i_8] [i_8 - 1] [i_8 - 1]) && 0));
            var_36 = (((((3 ? 2255677748 : -4220585478070566287))) || 113));
        }
    }
    #pragma endscop
}
