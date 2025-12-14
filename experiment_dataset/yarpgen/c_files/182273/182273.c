/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((2548543615 ? var_12 : var_7))) ? ((((!var_9) << (((min(3221225472, var_12)) - 19))))) : (min((56765 >= 3221225472), var_6))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((0 ? (min(-1651748527, (arr_3 [i_0] [5]))) : -1651748527));
                var_14 ^= (((((22523 ? (min((arr_2 [i_0 + 1] [i_0 + 1]), var_10)) : 1))) ? (!var_11) : (min(252, (arr_1 [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_15 += (arr_0 [8]);

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_16 = (max(var_16, ((((arr_11 [i_2] [i_2]) >> (((arr_9 [i_0] [i_0]) + 81)))))));
                                arr_15 [i_0] [i_0] [9] [i_0] [i_0] = 4294967295;
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [2] |= 3221225455;
                                arr_20 [2] [i_0] [i_2] [i_3 - 2] [i_3] [i_3 - 1] [0] = ((+(((~504) ? (arr_18 [i_0 - 2]) : (arr_18 [7])))));
                                arr_21 [1] [i_0] [i_2] [i_3 + 1] = (min(((22 >> (var_10 > 4294967295))), 63));
                                var_17 = (((((arr_3 [i_0 + 2] [i_0 + 2]) ? (arr_3 [i_0 - 1] [i_0 + 2]) : 0)) / ((1073741823 ? (var_1 / 1) : (var_3 / var_4)))));
                                var_18 = (min(var_18, (((((var_9 + (arr_17 [i_3 + 3] [i_0] [0] [i_3 + 3] [i_0] [i_0 + 2]))) - (arr_17 [i_3 - 2] [i_1] [i_2] [2] [i_5] [i_0 - 2]))))));
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                            {
                                var_19 -= ((((min((arr_12 [i_6] [4] [i_6] [i_2] [i_3 + 2] [4] [i_2]), 21351))) ? 15026 : ((((max(10843, var_5))) ? (max((arr_5 [i_0] [i_1] [4]), (arr_1 [i_2]))) : (arr_16 [0] [i_1] [1] [i_1] [i_1] [2] [i_1])))));
                                var_20 *= var_0;
                                var_21 = (max(((((9170161827507787460 ? 1763891053 : 1073741836)) % 17374)), (arr_0 [i_0])));
                                var_22 = ((((min(((228 ? (arr_3 [i_3 - 2] [i_3 - 2]) : 9530827881155362485)), (95 || 3221225459)))) ? ((((3221225459 && (((arr_12 [i_0] [i_0] [i_1] [6] [i_3 - 2] [i_0] [i_6]) || 1481704181)))))) : (((!0) ? (((1073741864 ? -25700 : (arr_4 [i_0] [i_2])))) : (min(3951235468324957745, -56))))));
                                arr_24 [i_0 - 2] [i_0] [0] [i_6] = 100;
                            }
                            var_23 = (arr_22 [i_0] [i_1] [5] [i_1]);
                            arr_25 [i_0] [i_0] [i_0] [i_3 - 3] [i_0] = ((-(arr_22 [i_0 - 1] [i_3 + 1] [i_3 - 1] [i_0 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
