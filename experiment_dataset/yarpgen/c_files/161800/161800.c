/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 ? ((11184545575542496860 >> ((max(var_5, var_12))))) : var_2));

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [2] |= (((((-32034 ? (var_3 ^ -6791195119964146044) : ((((arr_0 [7] [i_0]) ? (arr_0 [i_0] [i_0]) : 33501)))))) ? (max(var_9, 4294967281)) : 106));
        arr_3 [i_0] = (((arr_0 [i_0 - 1] [i_0]) ? (min((arr_1 [i_0 - 1] [i_0 - 1]), 3953997935893034146)) : (arr_1 [i_0 + 1] [i_0])));
        arr_4 [i_0] [i_0] = ((((((-20486 ? var_4 : 65535)))) ? (max((!var_8), ((var_6 - (arr_1 [4] [1]))))) : 20489));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_10 [4] [4] |= ((((((arr_5 [i_1 + 2]) > (arr_5 [i_1 + 2])))) > (max((var_6 || -20488), (592470761 / var_2)))));
            arr_11 [i_1] [0] [i_2] = ((((((~(arr_6 [i_1] [i_2 + 1]))))) ? (arr_7 [i_2] [i_2 - 1]) : (((((max((arr_0 [i_1] [i_2 - 1]), -6791195119964146044))) ? ((((arr_6 [1] [i_1]) ? 20489 : (arr_5 [i_2])))) : (arr_1 [i_1] [i_2]))))));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_14 [i_3] [i_3] = ((((!(592470784 - -20486))) ? 32764 : var_5));
                arr_15 [i_1] [i_2] [i_3] = (max((((~(149 <= 33481)))), (max((((!(arr_9 [i_3])))), (min(592470784, (arr_1 [i_3] [i_1])))))));
                arr_16 [i_2] [i_2] [5] = ((20495 ? (max((arr_12 [i_2] [i_2] [i_2 - 1] [i_2]), var_11)) : (((max(20457, 86))))));
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_19 [i_4] [i_4] [i_4] = 78;
            arr_20 [i_4] [i_4] [i_1] = (((~var_11) ? (arr_7 [i_1] [8]) : 147));
            arr_21 [i_4] = 0;
        }
        arr_22 [i_1] [i_1] = ((((max(33461, 63507))) ? ((max(-20495, -592470762))) : ((max((arr_5 [i_1 + 2]), (149 == var_1))))));
        arr_23 [i_1] [i_1] = var_13;
    }
    var_15 |= (((((var_4 ? var_10 : var_7))) ? ((0 ? (max(64, -592470783)) : 32034)) : 149));
    var_16 = var_4;
    var_17 = 77;
    #pragma endscop
}
