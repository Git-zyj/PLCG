/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((((var_6 < 0) ? (!18446744073709551615) : var_11)))));
    var_17 = var_10;
    var_18 = (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (((((~((((arr_2 [i_0]) == (arr_1 [i_0]))))))) ? (var_6 != var_3) : (((2031616 == 17591649173504) ? (17591649173501 | var_9) : (((arr_3 [i_0]) & 2343170775))))));
                arr_5 [i_1] = (((((arr_0 [i_0 - 2]) ? -2031617 : 18446726482060378104)) > -var_2));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 13;i_3 += 1)
        {
            {
                var_20 |= (((((-2031616 >= var_1) >= (((arr_2 [i_2]) ^ var_10)))) ? (((~-2031617) * ((((arr_7 [i_3]) <= (arr_4 [i_2])))))) : (((!(2031616 == var_9))))));
                arr_10 [i_3] |= ((((2334231518048054317 % var_14) & (!18446744073709551599))) % (((((var_4 ? var_13 : (arr_9 [i_3])))) ? ((0 ? var_11 : var_12)) : (~60415))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_21 = ((((var_9 > ((17591649173498 >> (17489363853442574555 - 17489363853442574529))))) ? ((-(~17591649173504))) : ((((((17591649173498 << (var_13 - 14153530761527844986)))) ? (((!(arr_2 [i_2])))) : (((!(arr_0 [i_4])))))))));
                    arr_13 [i_2] = (((((var_13 | (((3582428306 ? (arr_6 [1] [i_4]) : var_1)))))) ? (-var_10 || 53037) : (((((4345736591511322267 ? (arr_8 [i_3 - 1]) : (arr_7 [i_2]))) > 18446744073709551589)))));
                }
                var_22 -= (-2031616 > 17591649173512);
            }
        }
    }
    #pragma endscop
}
