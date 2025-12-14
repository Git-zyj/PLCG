/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [18] [i_1] [i_1] [i_1] = (max((~var_0), -148));
                    arr_8 [i_1] [i_1] [i_2 - 3] = 108;
                }
            }
        }
    }
    var_13 = 12017;
    var_14 = 92;

    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_15 = var_2;
        arr_11 [i_3] [i_3] = ((-(((!(((636644808 ? 30385 : 5696138780278203894))))))));
        arr_12 [i_3] = ((var_2 ? -133 : (((((arr_3 [i_3] [i_3]) % 133)) % (((max(28593, var_2))))))));
        arr_13 [i_3] = ((~(min((arr_6 [i_3] [i_3] [i_3] [i_3]), var_9))));
        arr_14 [i_3] = 28593;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_16 = 156;
        arr_18 [i_4] [i_4] = ((~((((max(-28593, 94))) >> (28593 - 28573)))));
        arr_19 [i_4] = 28588;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_17 = ((((~((28593 ? var_6 : 116)))) > (((((var_1 ? var_2 : 144))) ? (var_7 != 2608686280) : ((max(148, -95)))))));
                                var_18 = (((((!(arr_6 [i_4] [i_4] [i_4] [i_4])))) & 122));
                            }
                        }
                    }
                    var_19 = ((-((1186245582 ? 68 : 508))));
                    arr_30 [i_4] [i_5] [i_5] = (~2966110892);
                    var_20 = (max((~245), ((-((min(var_6, var_10)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_21 = var_11;
        arr_33 [i_9] [i_9] = ((var_10 ? ((((arr_31 [i_9]) == 140))) : (0 && 2966110892)));
        arr_34 [i_9] [i_9] = (((arr_32 [i_9]) ? 100 : -1));
        arr_35 [i_9] = ((((~(arr_32 [i_9])))) ? 1 : (arr_32 [i_9]));
    }
    #pragma endscop
}
