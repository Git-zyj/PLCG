/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] &= (arr_4 [i_0] [i_1] [i_0]);
                arr_6 [i_0] [i_1] = (min(var_0, -14442));

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_0] [i_0] = min((((4 ? ((min(23091, (arr_7 [i_0] [i_0] [i_1] [i_1])))) : (max((-9223372036854775807 - 1), 1))))), ((var_10 + (92910992 - 4552830280615717916))));
                    var_11 = ((min(9136366646366347288, (min(var_10, 562949953388544)))) * ((max(((-1718605408317454323 ? 1 : 25290)), (arr_2 [i_1] [i_1])))));
                    arr_11 [i_2] |= ((((max((arr_1 [i_0]), 1))) ? 162 : 94));
                    arr_12 [i_0] [i_0] [i_2 + 1] = ((((min(((max(94, 1))), 3828474364))) ? (arr_1 [i_2 - 1]) : 1));
                    var_12 = (max(var_12, (((27853 ? (max((max(4294967295, 8840755559613636189)), ((min(-1969248012, 4294967295))))) : 4294967295)))));
                }
                for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_13 = (min(var_13, (((((((((arr_8 [4] [i_0] [i_0] [i_3]) ? 562949953388546 : (arr_2 [i_1] [i_1]))) & ((min((arr_7 [i_0] [i_1] [i_1] [i_3]), 0)))))) ? (arr_3 [i_3] [i_3 - 1] [i_3]) : (min((((arr_9 [i_3] [i_1] [i_0]) ? 1609834016 : -22680)), ((((arr_2 [i_1] [i_0]) > 207))))))))));
                    arr_15 [i_1] [i_1] [i_1] = (min((((65472 >> (arr_8 [i_0] [8] [i_1] [i_3])))), (min(((min(32749, 1938870364))), (arr_4 [i_0] [1] [i_0])))));
                    var_14 = 25977;
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    var_15 = (max(var_15, (((143 ? ((49 ? (arr_8 [i_0] [i_0] [i_0] [3]) : 2531329285)) : ((((arr_7 [i_0] [i_0] [i_1] [i_1]) ? 93 : var_2))))))));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_5] [i_5] &= -12839394305828385273;
                        var_16 = arr_17 [i_0] [i_5];
                        var_17 &= (1248130779 == 1663202763396886608);
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_18 = var_1;
                        var_19 = (max(var_19, (((((((arr_8 [i_4] [i_4] [i_4 - 2] [i_4 - 1]) ? var_2 : -511976577))) ? ((-20260 ? var_2 : var_1)) : (((arr_17 [i_1] [i_0]) ? 511976576 : (arr_8 [1] [1] [i_1] [i_6]))))))));
                    }
                }
                var_20 = max((min(25978, 0)), (arr_18 [i_1] [i_0] [i_1] [i_0]));
            }
        }
    }
    var_21 &= (min(((((min(58035, 2773974766))) ? var_10 : 112)), ((((var_7 ? 7172567369115828483 : -511976577))))));
    var_22 -= var_7;
    var_23 = ((((((max(var_8, -27))) ? (-2096864013147992435 - var_10) : var_4))) ? (~3217834676) : 511976576);
    var_24 = (((max(var_4, var_1))) ? ((562949953388546 ? ((-511976576 ? 1 : 1)) : var_3)) : (max(((max(1, 167))), ((var_8 ? var_2 : var_9)))));
    #pragma endscop
}
