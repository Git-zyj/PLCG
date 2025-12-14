/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 -= ((-1240024182 + 2147483647) >> var_1);
        var_17 = ((0 ? (min((~var_13), ((max(1240024181, -1240024182))))) : ((var_6 ? (((max(var_12, var_4)))) : (arr_0 [i_0] [6])))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((-(((arr_0 [i_1 - 1] [i_1 - 2]) ^ (arr_0 [i_1 - 1] [i_1 - 2]))))))));
        arr_7 [i_1] = -1240024185;
        var_19 += ((((min((~var_4), (var_5 && var_13)))) ? ((var_11 ? var_0 : ((var_2 ? (-127 - 1) : var_10)))) : ((((arr_6 [i_1 + 2]) ^ (arr_6 [i_1 + 1]))))));
        arr_8 [i_1 - 2] = ((-(((!(arr_2 [i_1 + 2]))))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_20 -= ((max((var_14 ^ var_10), ((((arr_5 [i_1]) ? var_8 : var_11))))));
            var_21 -= ((((var_4 << (var_12 - 170)))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_22 |= (max(var_2, var_7));
            var_23 = (min(var_23, (!var_8)));
            var_24 = (~(((((var_13 ? var_12 : var_9))) ? (((arr_2 [i_1]) ? var_12 : var_15)) : 4294967281)));
        }
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_25 = ((((max(var_0, var_7))) ? var_13 : (((((49 ? var_1 : (arr_14 [i_4])))) ? var_8 : var_13))));
        var_26 ^= (max(((-(min(67108863, var_9)))), -1073537785971129432));
        arr_16 [i_4] [i_4] = -var_6;

        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_27 = ((((((-(((arr_10 [4] [i_5]) ? (arr_15 [i_7]) : -21)))) + 2147483647)) << ((0 ? var_0 : (((!(arr_4 [i_5]))))))));
                        arr_27 [i_4] [i_4] = (arr_10 [i_4] [i_4]);
                        var_28 ^= var_14;
                    }
                }
            }
            var_29 ^= ((~(min(((var_2 ? var_14 : var_14)), var_12))));

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_30 ^= var_9;
                var_31 += (((((max((arr_19 [i_4 + 1] [i_4 - 1] [i_5]), 45)))) % ((var_12 ? var_15 : var_0))));
                var_32 -= (((((var_7 ? (var_13 >= var_7) : (arr_29 [i_4] [i_4] [1])))) ? 50 : var_7));
                var_33 -= (~var_4);
                var_34 = var_6;
            }
            var_35 = max(((var_6 << (arr_14 [i_4 - 2]))), (arr_24 [i_5] [i_4] [i_4] [2]));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_36 *= ((-((((((arr_11 [1]) ^ var_1))) ? (~140) : ((1 ? var_0 : (arr_12 [i_4])))))));
            var_37 -= ((((((((arr_20 [2] [i_9] [4]) + 2147483647)) << (((((arr_22 [i_4 + 2] [i_9] [i_4]) + 474200808)) - 22))))) ? var_3 : var_0));
        }
        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            var_38 = (min((max((arr_15 [i_4 + 1]), ((var_14 ? var_2 : var_15)))), ((((arr_0 [i_10] [i_4]) ? (max(var_15, (arr_2 [i_4]))) : ((max(var_10, var_14))))))));
            arr_38 [i_4] [3] [i_4] = ((~((((min((arr_15 [i_4]), var_7))) >> (var_9 + 1225683182864304765)))));
        }
    }
    var_39 = var_13;
    var_40 = (min(var_40, ((((var_6 || var_7) ^ ((((var_15 ? var_13 : var_13)) << (var_13 - 5418328443055028970))))))));
    var_41 = (min(var_41, var_3));
    #pragma endscop
}
