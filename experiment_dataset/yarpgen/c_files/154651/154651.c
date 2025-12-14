/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 += (max(((min((arr_1 [i_0 + 2] [i_0 - 2]), (arr_1 [i_0 + 2] [i_0 - 2])))), ((var_4 ? 283528985467091366 : (arr_1 [i_0 + 2] [i_0 - 2])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (((max((max(127, var_11)), var_5))) ? (((((min(var_10, (arr_2 [i_1] [i_0] [i_1])))) ? ((var_7 << (248 - 234))) : (arr_0 [i_0] [i_0 + 3])))) : (arr_3 [i_0] [i_1]));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                arr_7 [i_0] [i_2] [i_0] = ((-12521 ? (arr_3 [i_0] [i_2 - 1]) : ((var_11 ? var_11 : var_6))));
                arr_8 [i_0] [i_0] = (((arr_2 [i_2] [i_0] [i_0]) % (arr_2 [i_0] [i_0] [i_2])));
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_11 [i_0] [i_0] = ((min(127, -112)));
                var_13 = (((((~(110 >> var_2)))) >= (((var_7 + 188) ? (min(var_11, (arr_2 [i_0] [i_0] [i_3]))) : (((max(1, (arr_9 [2] [i_3])))))))));
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_14 = var_2;
                            var_15 = (((((arr_0 [i_0] [i_0]) ? (arr_12 [i_6] [i_5] [i_4] [i_0 + 2]) : ((((arr_15 [i_1]) < 0))))) >= ((((max((arr_5 [i_0] [i_0]), var_7))) ^ -7468418087917628794))));
                            arr_21 [i_0] [i_0] [i_4] [i_6] [i_0] [i_0] = ((!((max(3631451632606770172, (11 * 127))))));
                        }
                    }
                }
            }
            var_16 = ((0 >= ((~(0 == -17128)))));
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_17 = (((arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]) >= (-1930841344 & 45)));
        var_18 = (((((((arr_20 [i_7] [i_7] [i_7]) ^ (arr_17 [i_7] [i_7])))) ? 17970053757466468563 : ((45 ? var_7 : var_11)))));
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_36 [i_7] [14] [i_9] [i_11] [i_11] |= (min((!var_0), var_4));
                                var_19 |= ((((((arr_15 [i_8 + 1]) >= (arr_3 [i_11] [i_11])))) & (((!(arr_3 [i_7] [i_7]))))));
                                arr_37 [i_7] [i_8] [i_7] [i_7] = 25647;
                                arr_38 [1] [i_8] [13] = (!0);
                                var_20 = (max(-4896665880993865317, 5036225331361284020));
                            }
                        }
                    }
                    arr_39 [i_7] [i_8] [i_9] [i_9] = max(((((arr_30 [i_8 + 1] [3]) & (arr_35 [i_8 + 1] [i_8 - 2] [i_9])))), (max((~-8439), ((var_0 ? 535344536778885498 : (arr_18 [i_7] [17] [14] [i_7] [i_7]))))));
                }
            }
        }
    }
    var_21 = (((((max(23, var_4)) > var_2)) ? var_7 : (~var_8)));
    var_22 = ((var_2 >> (var_6 - 186)));
    var_23 = (((((min(-80, -80)))) < (min(var_7, var_4))));
    var_24 = var_11;
    #pragma endscop
}
