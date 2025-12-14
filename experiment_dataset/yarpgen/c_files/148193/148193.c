/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (max((((!var_6) + 1)), 342));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_13 = (((!1557536331) >= (!-342)));
                        arr_10 [i_1] = (7558968684061621288 - 0);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_14 = ((var_7 || (0 ^ 2147483647)));
                            var_15 = (max((1 | 523264), (-342 < var_7)));
                            var_16 = (min((min(321, var_9)), (0 < 1)));
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_2] = ((~((-7558968684061621274 - (~0)))));
                            var_17 = (4294967284 ^ 0);
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_18 [1] [i_1] [i_1] [i_1] [1] = (((-342 || 1) < ((7720 >> (var_1 + 20545)))));
                            var_18 = ((((min(var_5, -342))) ? ((1 ? -8881948367595723610 : 1)) : (((1 ? 28865 : 1252975220)))));
                            var_19 = (((1989507069965540612 % -7558968684061621274) == (!1989507069965540614)));
                        }
                        for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2 + 1] [i_1] [i_7] = ((~(((!(min(1, 1)))))));
                            arr_23 [i_1] = (1 * 1);
                        }
                        arr_24 [i_1] [i_2] [i_1] = (((1 > 1) || (!var_7)));
                        arr_25 [1] [i_1] [i_2] = (((min(-1851926066, var_8)) >= 1));
                        var_20 = (((((-(0 || 1)))) ? ((max(var_6, 1))) : ((-((min(1, var_0)))))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_1] [i_2 - 1] [16] = (max((1497411745994642072 || 1), (1 - var_5)));
                        var_21 = (((~-1421200846) ? ((1 >> ((1 ? 1 : 1)))) : (-1421200847 * 1)));
                        arr_29 [i_1] = 1;
                    }
                }
            }
        }
    }
    var_22 = ((max(32767, ((var_1 ? 1 : -7)))) + ((((1347376533 + 14728) || 1921038241))));
    #pragma endscop
}
