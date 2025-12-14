/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~25547107);

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = ((var_10 >> (((arr_8 [i_0] [i_1]) + 5820329246559541605))));
                        var_18 = 118;
                        var_19 = var_10;
                        var_20 = (((var_6 + 2147483647) >> ((-(var_9 <= -110)))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_21 = min((min((((arr_3 [i_5] [i_1] [i_2]) ? 1089046116 : (arr_5 [i_0] [i_1]))), var_4)), ((max(-119, (arr_8 [i_0 + 1] [i_0])))));
                                var_22 = (min(((max((arr_1 [i_1] [i_5]), (arr_1 [i_1] [i_1])))), var_4));
                                var_23 += ((-(min(((-80 ? 9223372036854775807 : 7371595036375005309)), (arr_13 [i_0] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_1])))));
                                var_24 = ((((min(((81 ? 119 : 5070282839624493881)), var_5))) ? var_15 : ((((arr_1 [i_0 - 1] [i_0 - 1]) >= (min(var_7, var_15)))))));
                            }
                        }
                    }
                }
            }
        }
        var_25 = ((((min((min(var_15, 119)), var_6))) != 4717));
        var_26 = 16;
        var_27 = (((arr_8 [i_0 - 2] [i_0]) ? (arr_8 [i_0] [i_0 - 1]) : ((var_6 & (arr_8 [i_0] [i_0 - 1])))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_28 = (max(var_28, ((((18446744073709551615 - 9223372036854775807) >> (((((min(-2480370958090541958, 9617678579649903685)) - ((25932 ? (arr_14 [i_6] [i_6]) : (arr_15 [i_6]))))) - 13589773143366917303)))))));
        var_29 = ((+((((((arr_14 [i_6] [i_6]) ? var_4 : var_15))) ? var_11 : (arr_15 [i_6])))));
        var_30 = (max((arr_14 [i_6] [i_6]), (min((arr_15 [15]), ((var_13 ? (arr_14 [i_6] [i_6]) : (arr_14 [i_6] [11])))))));
    }
    #pragma endscop
}
