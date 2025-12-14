/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 18130602808866354852;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = ((var_11 == (arr_0 [i_0 + 1] [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] = (arr_3 [i_0]);
            var_16 = (max(var_16, (((arr_1 [2]) ? var_6 : ((316141264843196764 / (arr_2 [i_0])))))));
            arr_6 [i_0] [i_0] = (((arr_4 [i_0 + 1]) | (arr_4 [i_1])));
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = (~18130602808866354843);
            var_17 = (((arr_0 [i_0 + 1] [i_0 + 1]) ? 6093157269093609667 : -6));
            var_18 = var_4;
        }
        var_19 &= (((arr_0 [i_0 + 1] [3]) * 102));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_20 = (((arr_12 [i_3 - 1]) != 6093157269093609667));
        var_21 = (arr_12 [i_3]);
        var_22 = 316141264843196780;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_23 = (arr_15 [i_4] [i_4]);
        var_24 = ((((max(((((arr_14 [6] [i_4]) & 1))), (max((arr_13 [14] [i_4]), -4418615636924478561))))) ? (((arr_13 [i_4] [i_4]) - (arr_15 [i_4] [i_4]))) : ((((6403707219079353880 <= (arr_13 [i_4] [i_4])))))));
        var_25 = (((92 - 441349857) ? ((((arr_13 [i_4] [6]) >> (18446744073709551590 - 18446744073709551578)))) : ((((1 && 9192689375462423394) / (((arr_13 [i_4] [i_4]) ? 141280772 : 172)))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_26 = (((((-((min(199, 1)))))) ? (var_1 >= var_3) : -38));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_27 = (max(var_27, (((((arr_24 [i_6] [i_5] [i_5]) < (arr_24 [i_6] [i_7 + 1] [i_6])))))));
                                arr_30 [i_4] [i_6] [i_5] [i_4] [i_8] = ((((((!((max(8480297475591254852, -9223372036854775806))))))) & (min((max((arr_13 [i_5] [i_5]), (arr_17 [i_4]))), 164))));
                                arr_31 [i_4] [i_7 + 1] [i_7 + 1] [i_4] [i_8] = var_11;
                                var_28 = ((((min((arr_29 [i_7 + 1]), (-6403707219079353880 & 141280797)))) ? (((var_7 ? 31 : -4418615636924478564))) : (arr_17 [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (~(min(((var_0 ? var_9 : 18446744073709551615)), (((57 ? var_13 : var_6))))));
    #pragma endscop
}
