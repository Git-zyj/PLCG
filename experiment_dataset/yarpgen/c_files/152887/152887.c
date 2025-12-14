/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (207 > 12953);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (683206127 == 96);
                    arr_11 [i_0] [i_0] [i_1] [i_2] = (((arr_1 [i_0]) != (~52583)));
                    arr_12 [i_0] [i_0] [i_0] [14] |= (((((arr_2 [18]) | (arr_0 [i_2]))) - (((arr_7 [i_1]) ? (arr_6 [12] [14]) : (arr_2 [4])))));
                }
            }
        }
        arr_13 [i_0] [0] = ((arr_1 [i_0]) == (~12962));
        arr_14 [i_0] [11] = 1;
        arr_15 [i_0] [14] = (arr_6 [i_0] [8]);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_19 [8] [8] &= ((((max((arr_16 [i_3]), ((((arr_16 [i_3]) < 1)))))) % (((arr_18 [i_3]) | (arr_18 [i_3])))));
        arr_20 [i_3] = (max(((-(max(-6565944159487600216, 18136)))), ((min((arr_17 [i_3]), (arr_17 [i_3]))))));
        arr_21 [6] [6] = ((((((arr_16 [i_3]) != ((((!(arr_17 [i_3])))))))) >> (((max((0 | 3), (arr_16 [i_3]))) - 177))));
        arr_22 [4] = ((((arr_16 [i_3]) ? (((!(arr_16 [i_3])))) : (52559 ^ 0))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_26 [20] = (((((~12985) | (~12977))) ^ (arr_23 [i_4] [i_4])));
        arr_27 [i_4] = (((((!((((arr_18 [i_4]) ? (arr_17 [i_4]) : (arr_24 [i_4]))))))) - (((154 && ((((arr_18 [i_4]) ^ (arr_17 [i_4])))))))));
        arr_28 [i_4] = (((arr_18 [i_4]) >> (12992 != 52559)));

        /* vectorizable */
        for (int i_5 = 4; i_5 < 23;i_5 += 1)
        {
            arr_32 [i_4] [i_4] = (arr_23 [i_4] [i_5]);
            arr_33 [9] [3] [i_4] = (((((arr_24 [i_5]) | 39746)) != (arr_17 [i_4])));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_40 [i_7] = ((~(max(12582971925854876219, 47399))));
                    arr_41 [i_7] [10] [10] = (max((30 <= 16769024), (max(11180520, 2817972095944805343))));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_44 [i_8] [i_6] = (arr_16 [0]);
                        arr_45 [i_8] = (max(((((((arr_31 [i_6]) ? (arr_38 [i_8]) : 18136)) <= (arr_38 [i_4])))), (arr_37 [18] [i_8])));
                    }
                    arr_46 [i_4] [i_6] [i_7] [1] = (arr_35 [i_4] [i_6] [i_7]);
                    arr_47 [i_4] [i_7] = (arr_23 [i_4] [i_6]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_53 [i_9] = (max((arr_51 [i_9 + 1]), 1));
                arr_54 [i_9] [i_9] = (arr_2 [18]);
                arr_55 [i_9 + 3] [i_10] = (!1);
                arr_56 [i_9] [i_10] = ((-(12977 / 15728640)));
            }
        }
    }
    var_14 = 1157933102;
    var_15 = (((var_1 || var_11) != (6653211350907918271 || 18151)));
    var_16 = (max(var_3, ((1 ? 221216432 : 30973))));
    #pragma endscop
}
