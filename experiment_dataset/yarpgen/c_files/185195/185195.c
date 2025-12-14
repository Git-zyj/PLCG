/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] [8] = (arr_1 [i_0]);
        arr_5 [i_0] [i_0] = (-((6585880075297273202 ? (arr_0 [i_0]) : 18260909437881642716)));
        arr_6 [i_0] = (-94 | 16523872909233016058);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 = (!78);

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_21 = (arr_15 [i_1] [i_1] [i_1]);
                        var_22 = ((1922871164476535557 ? 76 : 1527934152));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_20 [i_2] [i_2] [i_1] [i_5] = ((-((((max(32440, (arr_9 [i_2] [i_1])))) ? var_4 : var_16))));
                            arr_21 [i_1] [i_2] [i_3] [i_1] [i_5] = (min((((((min(38568, 202)))) > ((var_13 ? var_3 : (arr_9 [i_1] [i_1]))))), (((((121 ? var_5 : 247))) < ((1922871164476535558 ? var_2 : var_14))))));
                            arr_22 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] [i_5] = 16523872909233016058;
                            arr_23 [i_1] [i_2] [i_2] [i_1] [i_1] [i_5] = (max((arr_12 [21] [21] [i_1] [2]), (var_10 <= 127)));
                            arr_24 [i_1] [i_1] = (arr_14 [i_1] [i_2] [i_2] [i_3] [i_4] [i_5]);
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_27 [i_1] [i_1] [i_3] [i_4] [i_6] [i_6] = (arr_7 [i_1]);
                            var_23 = (min((16523872909233016058 > 16523872909233016058), var_2));
                            arr_28 [i_1] = (min(683728447, (var_5 < -7625848582773244935)));
                            arr_29 [i_1] = (arr_18 [i_1] [i_2]);
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = -41895699757998589;
                            arr_34 [i_7] [i_1] [i_3] [i_1] [i_1] = ((var_12 ? 576460752303422464 : 3));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                        {
                            arr_38 [i_1] [i_2] [i_3] [i_2] [i_1] = 16523872909233016058;
                            arr_39 [i_4] [i_1] [i_1] [i_2] = ((((((var_1 && ((max(1048575, 1922871164476535558))))))) <= 10590922597436246188));
                        }
                    }
                }
            }
            var_24 = (var_17 == 1922871164476535558);
        }
        arr_40 [i_1] = ((((min(((16523872909233016058 && (arr_32 [i_1] [i_1] [i_1]))), (((arr_10 [i_1] [i_1] [i_1]) && var_7))))) ^ 5026));
    }
    #pragma endscop
}
