/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((min((arr_1 [i_0] [i_0]), var_9))), (max((arr_0 [i_0]), 172))))) ? (((arr_0 [i_0]) ? var_0 : (~20))) : ((min((arr_1 [i_0] [i_0]), 1403)))));
        var_15 += ((((min((arr_1 [0] [0]), (arr_1 [2] [i_0])))) != (var_8 != 16)));
        var_16 = 103;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                var_17 *= (arr_7 [i_1] [i_1 + 1]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_18 += -32759;
                            arr_14 [i_1] [i_2] [i_3] [i_1] [i_1] = (-571071237 >= 1308583435);
                        }
                    }
                }
            }
            arr_15 [6] = ((-127 - 1) && (arr_0 [4]));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_26 [i_1] [i_1] = (((arr_9 [i_1 - 1] [i_1 - 1] [i_7 - 1] [i_9 - 1]) == 24185));
                            var_19 *= (((((arr_25 [i_1 - 1] [i_6] [i_1 - 1] [i_1 - 1] [i_9 + 2] [i_9]) < var_8)) || (((-1400 | (arr_16 [i_1]))))));
                            var_20 = (arr_23 [i_9 + 1]);
                        }
                    }
                }
                var_21 ^= (((arr_5 [i_1 - 1]) && (arr_5 [i_6])));
            }
            var_22 = (max(var_22, ((((arr_1 [2] [i_6]) ? (arr_1 [12] [i_6]) : (arr_1 [2] [i_6]))))));
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
        {
            var_23 = ((var_11 * (arr_6 [i_1 - 1] [i_1 - 1] [i_1])));
            arr_31 [0] [i_10] [i_10] = (arr_20 [i_1 - 2]);
            var_24 = (arr_23 [14]);
        }
        var_25 ^= (!32767);
        var_26 = var_10;
        arr_32 [i_1] = (((arr_5 [i_1 - 2]) || 406141978757781418));
    }
    var_27 = (((~var_4) < var_11));
    var_28 *= (var_0 % var_2);
    var_29 = var_8;
    var_30 = ((var_7 * ((((var_10 ? var_12 : var_2)) % var_0))));
    #pragma endscop
}
