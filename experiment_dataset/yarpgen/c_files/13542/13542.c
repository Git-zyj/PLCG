/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_8);
    var_12 &= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (arr_2 [i_0] [i_0] [5]);

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_14 = (max((arr_7 [i_1] [i_2]), ((((arr_1 [i_0] [i_1]) != -91)))));
                    var_15 |= (((((~(~var_10)))) ^ ((~(((arr_1 [i_0] [i_0]) ? 4221326484 : var_10))))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_16 = (min(var_16, (((((min((arr_4 [i_0] [0] [i_1] [i_3]), var_2))) ? ((var_7 ? var_6 : var_6)) : ((var_9 + ((max(var_10, 61916))))))))));
                    var_17 = (min((((arr_3 [i_0] [i_1] [i_3]) ? var_0 : ((3637 ? (arr_7 [i_1] [i_1]) : -1539346688819758217)))), ((((arr_3 [13] [13] [i_3]) <= var_2)))));
                    var_18 = ((((min(61918, (arr_6 [i_0] [i_1] [i_3])))) ? (arr_3 [i_0] [i_1] [7]) : (max((arr_3 [i_0] [i_1] [i_3]), var_1))));
                }
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_19 = (((min((((3640 ? (arr_15 [i_0] [i_0] [i_0] [i_4] [i_0]) : (arr_4 [i_5] [i_4] [i_1] [i_0])))), 9223372036854775807))) ? (min((arr_1 [12] [i_4 - 1]), ((~(arr_12 [i_5] [i_5] [i_5] [i_5]))))) : (min((((arr_12 [i_0] [i_0] [i_0] [i_5]) | var_7)), (arr_14 [i_0]))));
                        var_20 = (((((~(arr_5 [i_4 - 2] [i_4 + 2] [i_4 + 1] [i_4 + 2])))) ? var_1 : (((arr_5 [i_4] [i_4] [i_4 + 2] [i_4 - 2]) ? (arr_5 [i_4] [12] [i_4 + 1] [i_4 + 2]) : 65082))));
                    }
                    var_21 = var_8;
                    var_22 = ((((((arr_13 [i_4 + 2] [i_4 + 2] [11]) ? ((max((arr_8 [i_4 - 1] [i_1] [i_4 + 1]), (arr_9 [i_0] [i_0] [i_0] [i_0])))) : var_1))) ? ((1277489500008868685 ? (4070362583413653653 ^ var_6) : ((var_10 - (arr_0 [i_1] [i_1]))))) : ((((!(((4294967294 ? var_6 : var_6)))))))));
                    var_23 = (max(var_23, 38548));
                }
            }
        }
    }
    #pragma endscop
}
