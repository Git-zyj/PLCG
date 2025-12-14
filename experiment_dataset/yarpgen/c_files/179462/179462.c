/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = max(164977243, 12771243754011163602);
        arr_3 [i_0] = ((((((((-164977250 || (arr_1 [i_0])))) ^ (max((arr_1 [i_0]), (arr_0 [i_0])))))) ? var_8 : (((~(-164977250 % var_2))))));
        var_12 = ((9476037678062322297 ? -164977262 : 245));
        arr_4 [i_0] = (((max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((!(arr_1 [i_0])))) : (min(-164977223, 164977268)));
        arr_5 [i_0] [i_0] = (164977286 > 0);
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_1 - 2] [9] = (-(arr_14 [i_1 - 1]));
                        arr_16 [i_1 - 2] [i_2] [7] [i_3] [i_4] [i_4] = ((((arr_12 [i_2] [i_2] [i_3] [i_2]) + (arr_9 [i_1] [i_2] [i_4]))));
                        var_13 = (arr_9 [i_1 - 2] [i_1 + 1] [i_1 - 4]);
                        arr_17 [i_1] [i_2] [i_3] [i_1] |= ((!((((arr_10 [i_1] [5]) ? (arr_7 [i_3]) : (arr_14 [i_1]))))));
                    }
                    arr_18 [i_1] [i_1 + 1] [i_1] [i_1] = ((255 ? ((7083051641232996668 | (var_6 | 3096669759))) : (((~((max(0, (arr_13 [i_1] [1] [i_3] [i_3] [i_3] [i_3])))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_25 [i_3] [22] = ((arr_11 [i_2] [i_3] [i_6]) ? (var_0 > -8609822026456814065) : ((~((((arr_20 [i_1] [i_3] [i_6]) > 164977249))))));
                                var_14 = (arr_24 [i_2] [i_3] [i_5] [i_3]);
                            }
                        }
                    }
                }
            }
        }
        arr_26 [i_1] = (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]);
        arr_27 [i_1] = (min((((((3751822851 ? 0 : (arr_14 [i_1 - 2])))) ? var_11 : ((max(7, 105))))), (min(-9, -164977261))));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_15 += (arr_29 [i_7]);
        var_16 -= ((min(-1765785612, 0)));
        var_17 = (min(var_17, ((max(3, 0)))));
    }
    var_18 = (((~var_10) > -164977243));
    var_19 = (((((-10840 ? var_4 : 9877583235087793536)) ? 0 : 208)));
    #pragma endscop
}
