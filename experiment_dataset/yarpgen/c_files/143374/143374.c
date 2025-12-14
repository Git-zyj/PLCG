/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = ((!((((281474976710655 ? var_1 : 0)) != var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_2] = ((-1861577793 ? 18446744073709551615 : 23415));
                    var_13 = (min(var_13, (((arr_0 [i_0]) - (-1744859445 - -1744859445)))));
                    var_14 = (((arr_5 [i_1]) + (var_10 <= 4294967295)));
                }
                var_15 ^= (((min((arr_3 [i_0] [i_0]), ((max(64115, 1744859445))))) < ((((arr_3 [i_0] [i_1]) ? (arr_0 [i_1]) : ((var_7 ? 119 : var_0)))))));
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_16 = ((!((min(var_8, (arr_8 [i_4] [i_5 - 1] [i_3 + 3]))))));
                                var_17 = (min(var_17, (~1760741125)));
                                arr_17 [i_0] [i_1] [i_1] [i_3 + 2] [i_3] [i_0] = ((~63) ? (((!(arr_13 [i_3 - 1] [i_3 - 1] [i_1] [i_5 - 1])))) : (arr_13 [i_3 + 2] [i_3 + 2] [i_5] [i_5 - 1]));
                                var_18 = ((var_5 ? (min(-511, (min((arr_6 [i_0] [i_0] [i_3]), (arr_11 [i_4] [i_4]))))) : ((((!((((arr_4 [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_3]) : 8785)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((min(var_4, ((((-1744859445 + 2147483647) >> (var_9 - 40929))))))) ? (((-(!var_7)))) : (((1068699682 / var_0) + var_0))));
    #pragma endscop
}
