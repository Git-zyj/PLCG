/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = ((var_3 ? (((min((max(65532, 46632)), var_16)))) : (min(var_2, (min(var_5, var_9))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 |= ((+((-1 ? (arr_0 [14] [17]) : (arr_1 [i_0])))));
        var_21 = ((29949 && (((var_12 - (((max(65514, (arr_3 [i_0]))))))))));
        var_22 = (min(var_22, (arr_3 [i_0])));
        var_23 = min((arr_0 [i_0] [i_0]), ((max((arr_1 [i_0]), var_2))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_24 ^= (((arr_6 [i_0] [i_0]) ^ (arr_4 [i_3] [i_3 + 1] [i_3])));
                            var_25 = (min(var_25, ((((-27217 >= 7219) ? -92 : (((arr_6 [i_2] [i_3]) ? (arr_3 [10]) : 9223372036854775807)))))));
                            var_26 = (((arr_6 [i_0] [i_0]) ? var_12 : 16235));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((~(((arr_13 [i_4 - 2] [16] [10] [16] [i_0]) ? var_7 : var_5))));
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_27 = ((-6833769871517943513 ? ((((max((arr_10 [i_0] [i_0] [i_0] [i_5]), (arr_10 [i_0] [i_0] [i_2] [i_5])))) ? (arr_15 [0] [i_1] [i_2] [i_3 - 1] [i_5]) : ((((arr_15 [i_5] [i_3 - 1] [i_2] [i_1] [i_0]) < (arr_16 [i_0] [i_0] [i_2] [i_3] [i_5 + 2] [i_5])))))) : (arr_12 [i_2])));
                            arr_18 [i_2] = (arr_8 [i_3 + 1] [i_2] [3]);
                        }
                        var_28 = (min(var_28, (arr_13 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [21])));
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_22 [4] |= (arr_9 [i_6]);
        var_29 = ((var_8 ? (max((arr_9 [4]), -29933)) : ((((arr_17 [i_6] [i_6] [16] [i_6] [i_6]) ? (-27217 * 22) : (arr_6 [i_6] [i_6]))))));
        arr_23 [i_6] = ((-(max(((min((arr_3 [i_6]), (arr_8 [i_6] [i_6] [i_6])))), (min((arr_7 [i_6] [17]), 6495947165925069885))))));
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        var_30 = (min(var_30, (arr_9 [i_7 - 2])));
        var_31 = (max(var_31, ((((!var_9) | (((!(arr_5 [9])))))))));
        var_32 += ((~(max(49298, (arr_7 [i_7 - 2] [i_7 + 2])))));
        var_33 *= max((((((max((arr_3 [i_7]), var_13))) ? -17 : ((14 ? 29949 : -858179190890482492))))), var_0);
    }
    #pragma endscop
}
