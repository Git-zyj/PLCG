/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0]) << (var_1 + 743371505)));
        var_19 = ((4294967295 ? -23652 : ((7 ? 1 : -458))));
        var_20 = (max(var_20, (((!(arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = 30;
        arr_6 [i_1] = (((((85 ? 11488091597710476363 : 818709300))) ? (46 != 1) : 25));
        arr_7 [i_1] [11] = ((~(((arr_1 [13]) | 232))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_22 = (arr_4 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_4] [i_3] [i_4] = (max(98, (arr_17 [i_4 + 1] [i_4 + 2] [i_3 - 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_23 = (((--0) / (((((arr_2 [i_4] [i_6]) ? (arr_5 [i_2] [11]) : (arr_9 [i_4] [i_6])))))));
                                arr_26 [i_2] [i_3] [10] [i_2] [i_6] |= -555110942;
                                var_24 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((((max(-99, 18446744073709551615))) ? var_3 : ((max(31, -66)))))) ? ((3719020390 ? var_17 : var_17)) : (max(var_17, var_14))));
    #pragma endscop
}
