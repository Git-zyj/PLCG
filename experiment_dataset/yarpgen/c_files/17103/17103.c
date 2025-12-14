/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = 478035216;
        var_19 = ((((max((arr_0 [i_0]), -478035205))) ? -1182991363 : (arr_0 [i_0])));
        var_20 = var_10;
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 *= ((((((var_9 ? var_13 : (arr_4 [i_1])))) ? (((var_9 == (arr_1 [i_1])))) : var_1)));
        arr_5 [i_1] = ((!((((((var_10 ? var_17 : 1182991356))) ? (~var_17) : var_13)))));
        arr_6 [i_1] = ((~(((((arr_0 [i_1]) ? var_12 : 164)) - (min(var_12, (arr_4 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_22 *= (((((((min(-116, -478035206))) != 6))) % 34));
                    var_23 = var_5;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_24 |= (var_5 + 4838677662967633493);
                        arr_26 [i_2] [i_5] = (min(((((99 ? (arr_0 [i_7]) : var_4)) * var_2)), ((max((min((arr_18 [i_2] [i_2] [i_2]), var_17)), (var_10 + var_9))))));
                        var_25 = max((~var_8), ((-(arr_19 [i_2] [i_5] [i_6]))));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_26 = var_12;
                            var_27 = (((max((!var_13), (min(var_15, var_7)))) | 1182991333));
                        }
                        var_28 = var_4;
                        var_29 = (1 * 718545894);
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_30 -= ((var_6 + (!var_15)));
                        arr_34 [i_2] [i_2] [i_6] [i_10] = ((!(arr_17 [i_5] [i_2])));
                        var_31 = (min(var_31, 134217728));
                        var_32 = 14;
                    }
                    arr_35 [i_2] [i_5] [i_2] [i_2] |= 718545894;
                    arr_36 [i_2] [i_2] [i_6] = -2251662374731776;
                    arr_37 [i_2] [i_2] [i_5] [i_6] |= ((((min(var_0, var_0))) <= (max((arr_19 [4] [4] [i_6]), (max(var_16, var_6))))));
                }
            }
        }
        var_33 = (min((((!((min(-478035217, var_9)))))), ((((!(arr_20 [i_2] [15] [i_2]))) ? 0 : -1182991367))));
        var_34 -= (277076930199552 / 65514);
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
    {
        var_35 = (3576421401 ^ 884583796);
        var_36 = -36;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_37 = var_0;
                        var_38 = (min(var_38, ((((((((var_7 & (arr_16 [i_14] [i_12]))) >> (((~var_2) + 5190251472188568604))))) ? ((((max(var_7, var_9)) ^ var_5))) : (((65508 | var_4) ^ 478035221)))))));
                        var_39 = (((((-478035191 ? -3913053584166954387 : 18014398492704768))) ? ((var_11 ? var_5 : (arr_27 [i_12] [i_14] [i_14] [i_12]))) : (arr_48 [i_11] [i_12] [i_13] [i_14])));
                        var_40 = (arr_32 [14] [14] [i_13] [i_14] [i_11]);
                        var_41 = (max((max(var_4, (((var_13 + (arr_10 [16] [i_12])))))), ((((((var_13 ? var_7 : var_7))) ? ((var_2 ? 928052182 : var_17)) : (arr_48 [i_14] [i_13] [13] [i_11]))))));
                    }
                }
            }
        }
    }
    var_42 = var_10;
    #pragma endscop
}
