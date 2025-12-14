/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 += ((1 != (((((4057748752 ? -3399621927539899428 : 4057748752))) ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0]) | (arr_0 [13])))))));
        var_17 = (min(var_17, (((((arr_1 [i_0] [i_0]) ^ 5331663659905987454)) + (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((+(((((4946296714265434699 ? (arr_2 [i_0] [i_0]) : var_2))) ? (max(237218543, var_2)) : (min(var_0, 1))))))));
                    var_19 = (min(var_19, (arr_1 [i_1 + 2] [i_2 + 1])));
                    var_20 = (((-(arr_4 [i_1]))));
                    arr_7 [6] [i_1] = ((((var_10 || (arr_3 [i_1 + 1] [i_1]))) ? (4946296714265434699 > 5331663659905987456) : ((10595738421747930313 ? 1 : 31115))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_11 [i_3] = 1;
        var_21 = (((1 <= (arr_8 [i_3] [i_3]))) ? (min((arr_8 [i_3] [i_3]), (arr_5 [i_3]))) : ((((!(arr_8 [i_3] [i_3]))))));
        var_22 += (max(var_6, -var_4));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    var_23 ^= (arr_14 [i_3] [10] [10]);
                    var_24 = (((((max(var_6, (arr_15 [i_5 - 1] [i_5 - 1] [i_4]))))) - (max((arr_8 [2] [i_5 + 2]), 127))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_3] [i_3] [i_4] [i_5] [i_5] [i_6] [i_7] = ((((((13654326611133851583 ? 0 : 13654326611133851583)) < (var_9 & var_2))) ? (arr_21 [i_7] [i_4] [i_5 - 1] [6] [i_7] [i_5]) : (((((arr_13 [i_3] [i_7]) ? -5331663659905987445 : (arr_15 [i_3] [i_3] [i_6]))) % ((var_8 ? 5331663659905987445 : (arr_22 [i_3])))))));
                                var_25 += (arr_0 [i_3]);
                                var_26 = (~(arr_23 [i_5 + 2] [i_4] [1] [i_5] [i_3] [i_4]));
                                var_27 = (-(min(4102201579, 2199023255424)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_28 [i_8] = (1 >= -3399621927539899428);
        arr_29 [i_8] = -4162608337774307485;
        arr_30 [i_8] = ((((max((arr_19 [i_8] [i_8] [i_8] [i_8] [i_8]), 534336888)) + 2606465286)) != (1 & 1998157682));
    }
    var_28 = ((var_2 ? ((((69 && 255) || 55032))) : (!var_6)));
    #pragma endscop
}
