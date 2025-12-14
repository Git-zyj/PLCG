/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        arr_3 [i_0] = (!var_8);
        arr_4 [i_0] = -29157;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_14 = max(116, var_4);
        var_15 = ((((min(1114389723, 72))) ? (((min((arr_5 [i_1]), var_5)))) : ((min((arr_5 [i_1 - 2]), (arr_5 [i_1 + 1]))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] = ((56908 < (~1)));
        var_16 *= ((((((arr_7 [i_2]) ? (((arr_9 [i_2]) | 72)) : -69))) ? (672665950039812599 | var_7) : ((max((arr_5 [i_2]), (((((-127 - 1) + 2147483647)) << (4722717580239626629 - 4722717580239626629))))))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_20 [i_5] [i_3] [i_3] [i_3] [i_2] = ((((max(32512, (arr_13 [i_3 - 1] [i_2])))) ? (arr_8 [i_3 + 1]) : (((((arr_8 [i_2]) + 2147483647)) << (var_12 - 16132353318467461772)))));

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_25 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5] [i_6] = (max((((arr_12 [i_3]) ? var_8 : (arr_12 [i_3]))), ((max(var_2, (arr_12 [i_3]))))));
                            arr_26 [i_3] [i_3] [i_3] [i_6] = var_0;
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_17 = ((1073741824 >= (arr_16 [i_3 - 1] [i_3] [i_3 - 2] [i_2])));
                            var_18 = (((((arr_23 [i_3] [i_3] [i_4] [i_3] [i_2]) * ((min(19, 65008))))) <= (((0 ? 19478 : 65535)))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_34 [i_3] = (min((min(var_13, (((!(arr_22 [i_3 - 1] [i_3] [i_4])))))), (((((-1073741832 & (arr_28 [i_2] [i_3] [i_5]))) != 33961)))));
                            var_19 = var_6;
                        }
                        var_20 *= ((!((((((var_5 ? var_0 : (arr_12 [i_2])))) ? (1073741825 >= 64843) : 3221225472)))));
                        var_21 += var_7;
                    }
                }
            }
        }
    }
    var_22 = 61709;
    #pragma endscop
}
