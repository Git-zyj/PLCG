/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (max(var_15, (((1 & (arr_0 [i_0] [i_0]))))));
        arr_3 [1] = 1;
        arr_4 [i_0] = 1;
        arr_5 [i_0] [i_0] = (16 - (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (1 / 1);
        var_17 = (arr_0 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_18 = (min((((!(arr_11 [i_2])))), ((((~(arr_11 [i_2]))) * ((max(var_7, -27353)))))));
        var_19 = (((((!var_11) ? ((-27349 ? -108 : (arr_10 [i_2]))) : (arr_11 [1]))) % ((((max((arr_11 [1]), var_10)))))));
        var_20 = (max((((-121 + 2147483647) >> (1923 - 1908))), (69 | var_1)));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_21 = (max(var_21, (((((((41826 | var_0) ? (max(60759, 0)) : (41814 ^ -2432)))) ? (min(-537363137, (((arr_12 [i_3] [i_3]) ? 12181 : (arr_10 [i_3]))))) : ((((max(var_5, var_13))) ? ((1 ? var_8 : 15)) : (((-144753654 ? 0 : (arr_13 [i_3])))))))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_22 = (min(var_22, (((-86 % (((arr_16 [i_4] [i_4] [i_4]) + 2430242865)))))));
            var_23 = (max(var_23, ((((((var_6 + (arr_16 [i_4] [i_4] [i_3])))) ? (arr_15 [i_3]) : (arr_13 [i_3]))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_20 [i_3] [i_3] [i_3] = ((~(~1)));
            var_24 = var_13;
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_25 = (((((max((arr_21 [i_3] [i_3]), (arr_21 [i_3] [i_6]))))) * ((((min(1, -626968305))) * (min(17717045346225405046, 0))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_26 = (((729698727484146561 ? 729698727484146582 : 1)));
                        var_27 = (max(var_27, (((((min(var_13, 2543))) ^ ((max((arr_23 [i_7] [i_6] [i_7]), (arr_23 [i_7] [4] [i_7])))))))));
                    }
                }
            }
        }
    }
    var_28 = ((var_5 == ((30172 * (-626968305 - 1)))));
    var_29 |= ((var_10 / (((-32745 - (max(1311835431, 626968304)))))));
    #pragma endscop
}
