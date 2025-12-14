/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((var_14 ? var_14 : var_8)) >= (arr_0 [i_0])));
        var_17 = (2077989882 ? 79 : var_8);
        var_18 = (max(var_18, (((39064 * ((var_7 % (arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 += ((~(((arr_4 [i_1] [i_1]) ? var_2 : 0))));
        arr_5 [i_1] [i_1] = ((var_10 <= (arr_3 [i_1])));
        var_20 = (min(var_20, (2452962594245114907 && var_14)));

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_21 = ((var_7 ? (arr_0 [i_1]) : var_9));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_22 &= ((!(arr_6 [i_2 + 4])));
                            var_23 -= 4294967295;
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_24 = ((((1 ? var_10 : -6281)) << (-1771295992 - 2523671275)));
                            var_25 = ((((var_8 ^ (arr_11 [i_1] [i_1] [i_1] [i_1])))) | ((20697 ? 1668872935 : 1159403849335094764)));
                        }
                        var_26 = -4912496969432561516;
                    }
                }
            }
            var_27 = (min(var_27, ((205133141 ? 241 : 12670))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_28 = (max(var_28, ((((!58) ? ((~(arr_15 [i_7] [10] [i_7] [i_7]))) : (var_0 - 32764))))));
            var_29 = ((((((arr_17 [i_7] [i_7] [i_7] [i_1] [i_7] [i_1] [i_7]) ? var_13 : (arr_19 [6] [i_1] [i_1] [i_1])))) ? var_13 : var_4));
            var_30 = ((1 & (!17776651099684294506)));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            var_31 ^= (((3355400133 - (arr_4 [i_1] [i_1]))));
            var_32 = ((!(((230 ? 48697732 : 18446744073709551615)))));
            var_33 += (var_1 | -401707257);
            arr_25 [i_1] [i_1] [i_1] = (1327679303 & 15993781479464436709);
            var_34 = (min(var_34, (((arr_0 [i_8]) >= var_13))));
        }
    }
    var_35 = (max(var_35, ((min((((max(var_8, 1151320717)))), (((21 - 3150457936) - (min(14970730496045212747, 205133139)))))))));
    #pragma endscop
}
