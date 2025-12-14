/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (min((((8403409170589040491 & var_10) + (~-8403409170589040488))), var_15));
        arr_4 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (min((arr_1 [i_0]), 8403409170589040493)) : -1880302916));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_9 [1] [6] [i_1] = 217;
            var_20 = ((-(min(-8403409170589040491, (217 - var_13)))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_21 = (((-2944444128688579628 + 9223372036854775807) << (((arr_6 [12]) - 52966))));
            var_22 += (!138);
            var_23 += ((((((var_6 == (arr_1 [i_1]))))) * (arr_1 [i_1])));
            var_24 = (min(-1073973048, (arr_10 [i_3] [i_3])));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_25 *= (min((!32256), ((7995 || (~-1)))));
                var_26 -= (((!200) ? (((arr_11 [i_1] [i_1]) ? var_2 : -1880302916)) : (arr_2 [i_1] [i_5])));
            }
            arr_16 [i_4] [i_1] [i_4] = (((arr_14 [i_1] [i_1] [i_1]) ? ((((17450 > (((var_10 || (arr_11 [i_1] [i_1])))))))) : ((var_18 ? 215 : 1))));
            var_27 = (((arr_7 [i_1] [i_4]) | (arr_14 [i_1] [i_1] [i_1])));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_20 [i_1] [i_1] [i_1] = var_8;
            arr_21 [i_1] = (min((~var_8), (!-7012275492372648440)));
            arr_22 [i_1] [i_1] [i_6] = (min(1, var_0));
            arr_23 [i_1] [i_6] [7] |= 2944444128688579627;
        }
        arr_24 [5] = ((16919875190691457501 ? (min((arr_15 [i_1]), ((87 ? -1880302916 : 1073973020)))) : -30706));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_28 ^= ((min(((min(1, (arr_2 [i_7] [i_7]))), var_2))));
        var_29 = (max((min(30706, var_19)), (((-30706 > (arr_17 [i_7] [i_7] [i_7]))))));
        var_30 = -642187182;
        var_31 = (((((0 - (arr_27 [i_7])))) || ((var_2 != (((var_4 ? -72 : var_18)))))));
        arr_29 [i_7] [i_7] = (0 <= 82);
    }
    var_32 = -72;
    var_33 -= ((-(min(1, var_17))));
    #pragma endscop
}
