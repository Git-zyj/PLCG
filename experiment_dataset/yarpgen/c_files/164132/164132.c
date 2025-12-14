/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = -2081084921;
    var_19 = (max(var_19, (-2081084920 && 0)));
    var_20 = ((var_15 ? ((((max(var_7, var_12))) ? (0 + 1982541903505397505) : (((103 << (4294967269 - 4294967253)))))) : var_13));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = (max((((4205910362214312540 ? (arr_3 [i_0 + 1] [i_1 + 1]) : 105))), (arr_6 [i_0] [i_0 - 1] [i_0 - 1])));
                    var_21 = (((max((arr_6 [i_1 - 1] [i_0 - 1] [i_0 + 1]), 2768133808))) || ((min(var_6, (arr_0 [i_1 - 1])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 = (((128 / ((1 ? var_7 : var_16)))) <= 128);
                    var_23 -= (min((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 + 1])));
                    var_24 = (arr_4 [i_0] [i_3]);
                    var_25 = (1 ? (max(((0 ? (arr_6 [i_0 - 1] [i_0 - 1] [i_4]) : var_15)), 128)) : var_4);
                }
            }
        }
        arr_13 [i_0] = (((~(min(18446744073709551615, 32336)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_26 &= ((-24071 ? var_9 : ((var_16 ? 106 : -7942302864618314594))));
        var_27 = ((var_10 == (arr_4 [i_5] [i_5])));
    }
    #pragma endscop
}
