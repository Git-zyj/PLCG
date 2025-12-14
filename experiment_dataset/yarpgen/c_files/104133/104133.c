/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min((var_2 * var_3), var_7)) * ((((min(var_8, var_2)))))));
    var_12 = (((((var_0 | 18446744073709551604) ? var_5 : var_6)) != (((min(-34, 179))))));
    var_13 = ((((var_3 - ((34 ? var_1 : 1)))) != (((((min(var_10, var_9)) == (min(262143, var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((min((arr_2 [i_0]), (arr_1 [i_0]))))) + -262150));
                var_14 = (((~1) ? (((max(24205, (((!(arr_3 [i_0] [i_1] [i_0])))))))) : (max((min((arr_2 [i_0]), var_8)), (arr_2 [i_0])))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [i_1] = ((((((((arr_7 [i_1] [i_1]) != -56))) == ((var_5 ? 0 : -47)))) ? ((min(((var_2 ? 7 : 57)), (arr_0 [i_0] [i_1])))) : (var_4 * 22628)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 |= ((((var_8 > (arr_13 [i_2] [i_2] [i_2])) ? -7091420530871967176 : (min(var_1, (arr_8 [i_4] [i_2] [i_4]))))));
                                var_16 *= (arr_6 [i_3]);
                            }
                        }
                    }
                    var_17 = (max(var_7, (~var_4)));
                    var_18 = (arr_13 [i_1] [i_1] [i_2]);
                }
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    var_19 = 28;
                    var_20 = ((5710364176301309913 | ((((min((arr_16 [1]), (arr_10 [i_1] [i_1] [i_1] [i_1])))) ? ((56 ? 18446744073709551615 : var_0)) : ((min(var_6, 262153)))))));
                    var_21 = ((65535 * (min(((var_4 ? var_1 : 1)), (arr_2 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
