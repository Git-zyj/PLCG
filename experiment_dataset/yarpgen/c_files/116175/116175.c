/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((max(-32584, 12)))) & (min(var_0, var_7)))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (min((((arr_0 [i_0]) ? (((min(var_8, (arr_0 [i_0]))))) : (-7005697693428409007 % -8388608))), -364888411));
        var_14 = (min(var_14, ((max((arr_0 [i_0 + 2]), ((364888396 / ((-(arr_0 [i_0 - 2]))))))))));
        var_15 = (min(var_15, ((((((arr_1 [i_0 - 1]) % (arr_1 [i_0 + 2]))) << (((((arr_2 [i_0 + 3] [i_0 - 1]) / (arr_1 [i_0 + 3]))) - 1298942668)))))));
        arr_4 [i_0 + 3] = 3459;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 = ((-(!27)));
        arr_8 [i_1] &= (((((arr_6 [i_1] [i_1]) <= -8388606))));
        var_17 -= max((((-8388585 < 65529) ? ((28 ? (arr_5 [i_1]) : 3976173871121725434)) : (((1 ? 103 : 29116))))), (((((arr_5 [i_1]) | (arr_7 [i_1] [i_1]))))));
        var_18 = ((-33 || (((var_0 % ((-364888417 ? 121 : 36378)))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_19 = (max(var_19, ((((((((((arr_7 [i_3 + 1] [i_5]) ? (arr_2 [i_3] [i_4]) : (arr_2 [i_4] [i_2])))) ? ((var_1 | (arr_18 [i_2] [i_3] [i_4] [i_5]))) : (max(-90, var_1))))) ? (arr_18 [i_2] [i_3] [i_4] [i_5]) : (arr_16 [i_4]))))));
                        arr_20 [i_5] [i_4] [i_5] [i_5] [i_2] [i_2] |= ((((min(((92 << (-89 + 92))), -75))) ? (((((var_4 ? (arr_14 [i_3 - 3] [i_4] [i_5]) : (arr_14 [i_2] [i_3 + 1] [i_5])))) / ((var_4 ? 15133 : (arr_16 [i_2]))))) : ((((arr_14 [i_2] [i_3 - 2] [i_4]) & (arr_14 [i_3] [i_4] [i_5]))))));

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_4] = ((min((arr_18 [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3 - 1]), (arr_18 [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 - 2]))));
                            var_20 = (-54 & 92);
                            var_21 = ((8388612 ? 3 : -35));
                            arr_24 [i_4] [i_3 - 1] [i_4] [i_5] [i_6] [i_4] = (arr_10 [i_2] [i_3 - 3]);
                        }
                    }
                }
            }
        }
        var_22 |= (max((max(((max((arr_19 [i_2] [i_2] [i_2]), var_5))), (((arr_14 [i_2] [i_2] [i_2]) & (arr_21 [i_2] [14]))))), ((max((arr_15 [i_2] [i_2]), -117)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_23 = 339;
        var_24 += (-8388626 % -29);
    }
    #pragma endscop
}
