/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 -= (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 13748)) + (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((~(-32767 - 1))))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_19 |= ((((-258253258 ? var_5 : var_11)) & ((1152921504606846975 ? (arr_2 [i_1]) : (arr_2 [i_3])))));
                        var_20 ^= (((max((~51788), (arr_3 [i_1]))) / (arr_11 [i_1] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_21 = (((51788 * var_4) ? (arr_1 [i_1] [i_2]) : (101 & -27415)));
                            var_22 -= var_5;
                            var_23 -= var_13;
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_24 |= 0;
                            var_25 = ((27415 >> (var_5 + 21009)));
                            var_26 = (max(var_26, (((~(arr_17 [i_4] [i_4] [i_6 + 1] [i_6 - 1] [i_4] [i_4] [i_0]))))));
                            var_27 = var_6;
                        }
                        var_28 = (var_13 ? (((10948834967086797530 > (arr_2 [i_0])))) : 13748);
                        arr_23 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = 27411;
                        var_29 = (min(var_29, (((27422 > (arr_8 [i_0] [i_0] [i_2] [i_4]))))));
                        arr_24 [i_0] [i_0] [i_2] [i_4] = (arr_13 [i_4] [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_30 = (var_3 == 51788);
                        var_31 = ((-(-1 || 3159359623872780941)));
                        var_32 = (i_7 % 2 == zero) ? ((((((arr_19 [i_7] [i_1] [i_1] [i_1] [i_7] [i_7]) ^ 1)) << ((0 * (arr_16 [i_7] [i_2] [i_1] [i_1] [i_0])))))) : ((((((((arr_19 [i_7] [i_1] [i_1] [i_1] [i_7] [i_7]) ^ 1)) + 2147483647)) << ((0 * (arr_16 [i_7] [i_2] [i_1] [i_1] [i_0]))))));
                        arr_27 [i_0] [i_1] [i_2] [i_7] = 0;
                    }
                }
            }
        }
        var_33 = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
    }
    var_34 = (max(-1, (((-25 ? 13472340166827668560 : 13747)))));
    var_35 |= var_12;
    #pragma endscop
}
