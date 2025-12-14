/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1 + 1] = ((-var_3 - (arr_1 [i_0])));
            var_20 = (((((arr_4 [i_0] [i_0]) < var_2)) ? ((8 ? var_12 : 14)) : (arr_1 [i_0])));
            arr_6 [0] &= (((arr_3 [i_0] [i_1 + 1] [i_0]) ? var_2 : (arr_4 [i_1 + 1] [i_1 + 1])));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [1] = ((var_6 | ((~(min(var_6, 238))))));
            var_21 = (max(var_21, ((min((~var_10), ((~(arr_8 [i_2 + 1]))))))));
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_22 += (arr_2 [i_0] [i_3 - 1]);

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_23 = (((((-(arr_20 [1] [i_3])))) ? (((((max(4, 0))) || (arr_9 [i_3 - 1] [i_5 - 2])))) : (arr_15 [22] [14] [i_0])));
                            var_24 = ((!(arr_9 [i_5 - 2] [i_5 - 2])));
                            var_25 = ((((var_17 ? ((1 ? 0 : 8)) : ((max((arr_20 [i_3 + 1] [i_4]), var_12))))) << ((-27 ? (((!(arr_17 [i_0] [i_4] [i_5] [22])))) : 236))));
                            var_26 = (max(var_26, 11));
                            var_27 *= ((~(~251)));
                        }
                    }
                }
                var_28 = (max(var_28, ((((min((arr_17 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]), (arr_17 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1])))) >= (((arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]) ? 207 : (arr_17 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])))))));
            }
            for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_29 += ((~(((!(arr_11 [i_3 - 1] [i_7]))))));
                arr_24 [i_0] [i_0] = ((--1) <= (((((arr_13 [i_0] [i_0] [18]) >> (5346642610884104266 - 5346642610884104243))) >> (((~1) + 28)))));
            }
            for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
            {
                arr_29 [i_0] [i_8] |= arr_27 [i_3 - 1] [i_8];

                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_30 = (min(var_30, (~215)));
                    arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((((!(arr_14 [i_0] [i_3] [i_8] [0])))) / ((max((arr_13 [1] [i_0] [11]), (arr_9 [i_3 + 1] [i_0])))))), (((!(arr_13 [i_0] [i_0] [i_0]))))));
                    arr_34 [i_0] = (arr_26 [i_9] [i_0] [i_0] [1]);
                }
                var_31 = (arr_20 [i_3 - 1] [i_3 + 1]);
            }
            var_32 += ((((min(231, 1))) && (arr_0 [20])));
            arr_35 [i_0] = (i_0 % 2 == 0) ? (((((((-(arr_27 [i_3 + 1] [i_0]))) + 2147483647)) << (((((((arr_0 [i_0]) | (arr_14 [i_0] [i_0] [i_0] [i_3]))))) - 63))))) : (((((((-(arr_27 [i_3 + 1] [i_0]))) + 2147483647)) << (((((((((arr_0 [i_0]) | (arr_14 [i_0] [i_0] [i_0] [i_3]))))) - 63)) - 128)))));
            arr_36 [i_0] [i_3 + 1] = ((((-var_2 % (arr_27 [i_0] [i_0]))) * (((arr_32 [i_0] [1] [i_3] [i_3] [5] [i_3 + 1]) >> (-var_18 + 146)))));
        }
        var_33 ^= arr_19 [i_0] [i_0] [i_0] [i_0];
        var_34 = (((((((min((arr_4 [1] [i_0]), 4))) ? ((((arr_3 [i_0] [i_0] [i_0]) == (arr_16 [i_0] [i_0] [i_0] [i_0])))) : ((((arr_31 [i_0] [i_0] [i_0] [1]) != (arr_30 [i_0] [i_0] [i_0] [1] [i_0]))))))) ? (arr_11 [3] [i_0]) : (arr_11 [i_0] [i_0])));
        var_35 = ((~(((arr_14 [i_0] [i_0] [i_0] [i_0]) ^ (arr_14 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_36 += -8;
    var_37 = (-(min(-var_8, (min(1, 0)))));
    #pragma endscop
}
