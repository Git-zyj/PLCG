/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (~var_16);
                    var_18 = (((!32753) ? ((((((!(arr_2 [i_0 + 1] [i_0 + 1] [1])))) % 1172316861))) : (max(((min((arr_2 [i_0] [i_0] [i_0]), 942806941))), (arr_0 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 -= (((((1 ? 31534 : 0))) ? (-127 - 1) : (min(((((-15270 + 2147483647) >> (var_16 - 1051125953)))), (min((arr_6 [i_0] [i_2] [i_3] [i_3]), var_2))))));
                                var_20 = var_4;
                                var_21 = max((1 || var_0), ((!((var_8 && (arr_7 [i_0] [i_0] [i_2]))))));
                            }
                        }
                    }
                    var_22 = ((min(var_2, (((var_3 ^ (arr_5 [i_1])))))));
                    var_23 = ((-(max(((((arr_4 [i_0]) ^ var_2))), 1))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_13 [i_5] = (arr_5 [10]);
        var_24 = 21;
        arr_14 [i_5] [i_5] &= -2033729756;
        var_25 = ((((((min(45283, 9))) ? (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (((80 ? (arr_6 [i_5] [i_5] [i_5] [i_5]) : var_2))))) ^ (arr_5 [10])));
    }
    var_26 = ((var_1 ? ((max(0, 945841253))) : (((((0 >> (-1 + 18)))) ? (!-1) : var_6))));
    #pragma endscop
}
