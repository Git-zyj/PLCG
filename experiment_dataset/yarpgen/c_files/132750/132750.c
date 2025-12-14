/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [2] = ((!(arr_1 [10] [i_0 + 1])));
        arr_3 [i_0] |= (((arr_1 [i_0 - 2] [i_0]) > var_13));
        var_14 = (max(var_14, (((((((arr_1 [i_0] [i_0]) ? 0 : 6194195175174244034))) ? (arr_0 [i_0] [i_0]) : (((arr_0 [i_0 - 3] [i_0 - 3]) ? 126 : -2099473691)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (((~105) ? -20314 : (arr_6 [i_1] [i_1] [i_0 - 1])));
                    var_15 |= (arr_8 [i_0] [i_0] [5]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_14 [i_3] = (min((arr_11 [i_3]), (((arr_11 [i_3]) - var_6))));
        var_16 -= (((((arr_11 [i_3]) | (arr_13 [i_3]))) << (((arr_12 [5]) + 6683787088210817812))));
        arr_15 [i_3] [i_3] = ((((((!(arr_11 [6]))) ? var_7 : 4503599627370495)) < (max((((!(arr_13 [i_3])))), (max(18442240474082181118, (arr_11 [i_3])))))));
    }

    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_17 = (((((var_4 / (arr_9 [i_4 - 1] [i_4 + 1] [7] [i_4 - 1])))) ? (((arr_9 [i_4 - 1] [i_4 + 1] [i_4] [10]) / (arr_9 [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4]))) : 6727595819482096428));
        arr_19 [i_4] [i_4 - 1] = (((arr_8 [i_4 + 1] [i_4 + 1] [i_4 + 1]) + (((max((arr_18 [i_4]), (arr_17 [i_4] [i_4]))) + (arr_8 [i_4] [i_4] [i_4 - 1])))));
        var_18 += ((((arr_0 [i_4 - 2] [i_4 - 2]) < var_9)) && 18446744073709551608);
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_19 = (arr_21 [i_5 - 2]);
        arr_23 [i_5] [4] = (max(((min((arr_21 [i_5 - 2]), (arr_21 [i_5 - 2])))), 5224));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_20 *= 2099473666;
                    var_21 = ((1 == (arr_20 [i_8] [i_7 + 1])));
                    var_22 = ((-((45671 ? (arr_17 [i_6] [i_6]) : (arr_9 [1] [i_7] [i_8] [2])))));
                }
            }
        }
        var_23 = (((arr_16 [1]) ? var_12 : -1023236757));
        arr_32 [i_6 - 2] [i_6 - 2] &= ((-(arr_22 [1])));
        var_24 = ((-(arr_27 [i_6])));
    }
    var_25 = (min(0, 1023236728));
    #pragma endscop
}
