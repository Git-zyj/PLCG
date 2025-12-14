/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~7691759501232244740);
    var_14 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 = ((((((11632 ? var_4 : 53903))) ? (max(524224, (arr_9 [i_3]))) : -18881)) / (arr_4 [i_2 + 2] [i_3 - 1]));
                            var_16 |= min(((-7389617247412200065 ? -13495321728283790852 : (~2889029671))), (var_1 && var_2));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_17 = 51110024052366707;
                            var_18 = (((arr_11 [i_4] [i_0] [i_0]) ? ((((22049 ? 13495321728283790856 : 983060360)) - (!var_6))) : (39376 & 17761825001890053003)));
                            var_19 = (~2848996099);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_20 -= (((!(~-7389617247412200065))) ? ((~((13013776234939774873 ? 12388215123631927315 : 2673749138)))) : (((31744 + (arr_13 [i_1] [i_6 + 1] [i_7] [i_7])))));
                            var_21 = (max(var_21, (((~((((max(64491, var_8))) ? var_10 : var_12)))))));
                            var_22 = (min(var_22, (arr_10 [i_7] [i_1] [i_1] [i_0])));
                            var_23 = (0 == 2553739255320873211);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_24 |= -13495321728283790872;
                    arr_25 [i_8] [i_9] [1] = ((!(!var_0)));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_25 = (!var_5);
                        var_26 = ((var_6 ? var_12 : (arr_19 [i_8 + 1])));
                        var_27 = (arr_3 [i_8 + 1] [i_11]);
                        arr_28 [i_9] [i_10] [i_9 - 1] [i_9] = (((-18879 ^ var_1) ? var_3 : (arr_13 [i_8 + 1] [i_8] [i_8 + 1] [i_11])));
                        arr_29 [i_8] [i_9] [i_10] [i_11] [i_10] = (arr_9 [i_9]);
                    }
                }
            }
        }
    }
    var_28 = 25111;
    #pragma endscop
}
