/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (max((arr_1 [i_0] [i_0]), (min(((var_1 + (arr_1 [7] [i_0]))), ((max(var_0, var_9)))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = ((((max((max(1, var_8)), ((((arr_3 [i_0]) > var_6)))))) ? (((-54 ? ((min(0, var_9))) : (65 != 2147483633)))) : (max(((((arr_2 [i_0]) ? var_7 : -1))), ((-54 ? 31617 : 6974534433225955954))))));
            var_13 ^= (min(((~((min(var_7, (arr_2 [i_0])))))), (((!((min(var_6, var_9))))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_6 [6] [6] [i_2] |= 119;
                var_14 &= ((((!(arr_2 [i_1]))) ? 1 : ((((((max(var_3, var_0))) < var_8))))));
            }
        }
        var_15 &= var_4;
        var_16 &= (((((((~(arr_1 [i_0] [1])))) ? (~2642677660237520828) : var_8)) <= var_0));
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        arr_9 [i_3] = (((((+((var_8 ? (arr_0 [1]) : var_3))))) ? (((1 ? var_5 : (arr_0 [20])))) : (((~(arr_3 [i_3 + 2]))))));

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_15 [i_5] [i_5] [i_4] [i_3] |= ((!(arr_0 [i_5])));

                for (int i_6 = 4; i_6 < 14;i_6 += 1)
                {
                    arr_18 [i_3] [9] = (((arr_3 [i_3 + 1]) ? var_1 : (((-87 > (arr_10 [i_3] [i_3] [i_3]))))));
                    arr_19 [i_3] [i_4] [1] [i_6] |= (((((var_7 ? var_4 : -66))) ? -111 : (((arr_12 [i_3] [i_4]) / 7602))));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_17 |= 1;
                    var_18 |= 11286400284669244421;

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_19 = ((~(arr_11 [i_8 - 1] [i_4])));
                        var_20 = (-var_7 ? (arr_12 [i_3 + 2] [i_8 - 1]) : (((((arr_4 [i_4] [i_4] [i_4]) >= var_3)))));
                        arr_24 [i_3] [i_3 + 1] [i_4] [i_5] [i_7] [i_8] [i_7] = ((24988 || var_8) ? (arr_1 [i_3] [i_5]) : (arr_20 [i_3] [i_3] [i_5] [i_7] [i_8] [i_5]));
                        var_21 = (((52 != var_9) && ((((arr_16 [i_3] [i_4] [i_5] [6] [i_5] [6]) ? 19330 : -86)))));
                    }
                    var_22 = ((arr_3 [i_3 + 2]) ? (arr_21 [i_3] [i_3] [i_5]) : (arr_23 [i_3]));
                }
            }
            var_23 = (max(var_23, var_5));
            arr_25 [i_3] &= (arr_13 [i_4] [i_3]);
        }
        arr_26 [i_3] [i_3] = arr_4 [i_3] [i_3] [i_3];
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_24 = (min(var_24, (!127)));
        var_25 -= (((((arr_28 [i_9] [i_9]) == (((min(var_1, var_3)))))) ? (!var_3) : (max(var_6, (((var_5 ? 0 : var_3)))))));
    }
    var_26 = ((((var_5 ? 120 : 1)) % ((125 ? 12685 : 52))));
    var_27 = (min(((max((var_5 - var_1), 57))), ((var_3 ? (min(var_10, var_8)) : (((min(var_7, var_5))))))));
    var_28 = (((!var_7) <= var_1));
    #pragma endscop
}
