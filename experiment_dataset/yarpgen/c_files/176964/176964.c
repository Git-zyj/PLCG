/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((!var_11) <= (var_2 == var_12)));
    var_14 = (~var_1);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (min(((~(((!(arr_1 [i_0])))))), (((var_7 > (arr_1 [i_0]))))));
        var_15 ^= (arr_1 [22]);
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_5 [1] [i_1] = (min((((arr_0 [i_1]) | (arr_0 [i_1]))), (((arr_0 [i_1]) ? (arr_0 [i_1]) : var_10))));
        var_16 = ((((((max(var_4, var_12))) ^ (max(18002202583249245550, 18002202583249245539)))) * ((((((444541490460306085 <= (arr_3 [2] [2])))) / (var_7 ^ var_5))))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_16 [16] [i_4] [16] &= ((2970923001 ? 145553764 : (arr_7 [i_3])));
                        var_17 = (((((~(min(var_6, var_8))))) ? (min((arr_13 [5] [17] [i_2] [17] [7]), -4506469222322809765)) : (((min(var_9, (arr_9 [i_2 + 1])))))));
                        var_18 = var_9;
                        arr_17 [i_2] [i_2] [i_2] [i_2] = (((arr_6 [i_2 + 2] [i_5]) << (((((var_11 ? var_3 : 3411696324)) < var_0)))));
                    }
                }
            }
        }
        var_19 = (min(((min((arr_7 [i_2]), (arr_10 [i_2] [22] [i_2])))), ((var_4 ? (arr_14 [13] [13] [i_2 - 1] [14] [i_2 - 1] [19]) : var_3))));
        arr_18 [i_2] [i_2] = (min((((((min(var_0, var_7))) ? ((min(var_10, -81))) : (arr_1 [i_2])))), (max((min(-16155, 444541490460306065)), (~19395)))));
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_21 [15] = ((-(min((arr_1 [12]), var_0))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                {
                    var_20 = (((((((arr_1 [i_7]) > (-107 == -16155))))) / (min(-49, ((1 ? (arr_23 [i_7] [2] [22]) : 115))))));
                    arr_26 [i_6] [i_7] [i_7] [17] = (min(((min(1, var_7))), (((arr_19 [i_7 + 3]) * (arr_19 [i_7 + 2])))));
                    arr_27 [i_7] [i_7] [2] [i_7] = var_2;
                }
            }
        }
        var_21 = (((((min(var_3, 1655228098369319501)) + 9223372036854775807)) << ((((~((444541490460306065 << (18002202583249245544 - 18002202583249245531))))) - 10771436743663935487))));
        var_22 -= ((((!((((arr_0 [18]) << (var_11 + 1742))))))) << (((min((((arr_1 [6]) / var_7)), (65535 | 105))) + 298621627)));
    }
    #pragma endscop
}
