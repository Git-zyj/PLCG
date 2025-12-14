/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_7 ? (max(1804770520, 1804770520)) : (64 / var_2)))) ? ((var_6 ? (((276192683 ? -126 : -70))) : var_12)) : var_6));
    var_14 = (((~var_2) >= (((!(2147483647 & 9223372036854775807))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (((1584951472 - 2782607828) ? ((65472 ? 255 : -127)) : (var_6 ^ var_4)));
        var_16 = (-9223372036854775805 / 64);
        var_17 = (max(var_17, (((((((arr_1 [i_0]) / 9223372036854775805))) ? (arr_1 [i_0]) : (arr_2 [i_0]))))));
        var_18 = ((4 & (~3242621267)));
        var_19 = (max(var_19, (63 || var_1)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 = ((((min((9083215510258151485 || var_12), (((arr_4 [i_1]) ? (arr_3 [i_1] [i_1]) : var_12))))) ? (min(0, var_6)) : (arr_4 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_11 [i_3] [i_2] [i_3] = var_1;
                    var_21 = (max(var_21, ((((max((max(-2147483639, var_3)), (33423360 || var_1))) & ((((((-(arr_9 [i_1] [6] [i_3]))) < 12)))))))));
                    arr_12 [i_2] [i_2] [i_1] = ((((min((((4290772992 ? var_10 : 13))), (max((arr_6 [i_1]), var_11))))) ? var_5 : ((((13 ? 8127074629458938407 : 11517525)) << (((arr_9 [i_1] [i_2] [13]) - 10581895776193080726))))));
                    arr_13 [i_3] [i_2] [i_2] [i_1] = (min(var_11, ((min(var_12, -9223372036854775795)))));
                }
            }
        }
        var_22 = (min(var_22, (((!((max(283863093, (min(5654847607726227337, 1417380880))))))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_23 = (((((-2147483647 - 1) ? 17078387861296863293 : 4680757366811536354)) & (min(18446744073709551583, var_10))));
        var_24 = (max(var_24, ((max(13974222873796961577, 32767)))));
    }
    var_25 = -8131;
    var_26 = (((((((var_8 ? var_1 : 117)) + (max(var_10, 260046848))))) ? var_7 : (((118506116 ? var_9 : var_2)))));
    #pragma endscop
}
