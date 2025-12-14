/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_12;
    var_18 = ((-((85 ? (var_5 ^ var_14) : (max(1789454243836937778, 6989836947529071882))))));
    var_19 = (max(0, (min(321560553, 3973406743))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((((arr_1 [i_0]) ? var_5 : (!3973406743))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = ((((arr_2 [i_0] [i_1] [i_3]) ? 1 : (arr_8 [i_4] [i_2] [5] [i_0 + 1]))));
                                arr_12 [2] [i_1] [i_1] [i_1] [i_2] [i_1] [i_2] = 13135;
                                var_22 -= (96468326 > 3611835558);
                                var_23 = 73;
                            }
                        }
                    }
                    arr_13 [i_1] [12] [i_1] [i_1] &= (var_7 ? (arr_1 [i_0]) : var_8);
                }
            }
        }
        var_24 |= (((((arr_2 [i_0] [i_0 - 1] [1]) >= var_10)) ? ((var_4 ? (arr_4 [i_0] [i_0]) : 1)) : (5782706137507390608 - 2533040657)));
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_23 [i_5] [i_8] [i_6] [i_7] [i_7] = (((((((-1777851797826247578 + 9223372036854775807) >> (arr_18 [i_5 + 1] [i_6] [15]))) >= ((max(213, -407431262))))) ? ((((6293978252063273978 ? 935847072 : 3359120223)))) : -26431));
                        var_25 = ((187 ? 2012200423 : -20471));
                        var_26 ^= ((((((arr_1 [10]) ? (arr_20 [i_5] [i_6 - 2] [i_7] [i_8 - 1]) : (-14039 >= 1947256341)))) ? ((10423939813218055140 ? -118 : 3846707140887697496)) : ((((arr_1 [i_5 - 1]) ? var_14 : var_1)))));
                    }
                }
            }
        }
        var_27 = ((5480256055612882671 ? var_12 : 188));
        var_28 = 5986966254945894724;
    }
    #pragma endscop
}
