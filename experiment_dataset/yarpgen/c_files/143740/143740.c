/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((2627741459 % ((max(var_3, var_9)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] &= max((arr_0 [4]), 2627741459);
            var_12 = ((~(max((1 >> 1), ((((arr_4 [i_1]) < var_10)))))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_13 = var_5;
            var_14 = -1;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_15 &= (min(var_1, (max((!2627741441), (max(var_5, 2627741441))))));
            arr_12 [0] [i_3] &= ((!((max(var_3, ((var_9 ? 2251799813652480 : var_9)))))));
            var_16 -= 1;
            var_17 = (~0);
            var_18 = (var_7 >= (((var_1 ? -1 : 1667225855))));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] = (((~(max(var_6, (arr_15 [i_0] [i_4]))))));
            var_19 = (((2627741459 & -0) ? (((((~(arr_0 [i_0])))) ? 237 : ((~(arr_3 [i_0]))))) : (~1072020594)));
            arr_17 [i_4] [i_4] = ((~(2627741458 * 9207097683139723024)));
        }
        var_20 *= (arr_11 [i_0] [1]);
        var_21 = ((((((var_1 + -5910) ? ((-7396572910718762001 ? (arr_9 [i_0]) : 45124)) : (arr_13 [8])))) ? (((max((arr_9 [i_0]), 0)))) : ((1667225853 ? 213 : -8436918307015562086))));
        var_22 = (((1 ? var_8 : (var_0 + 1))));
    }
    var_23 = (min(var_23, ((min((max(var_10, (var_6 / 104981518))), ((((((min(252, var_5)))) >= (max(-8642399938056771726, 65516))))))))));

    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_24 = var_9;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_25 = (arr_23 [i_7] [i_6 - 2] [i_6 - 2]);
                    var_26 = var_9;
                    var_27 = (max(var_27, var_4));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_28 = 1;
                        var_29 += ((((((arr_20 [i_9 - 1] [i_9 - 1] [i_9 - 2]) ? var_3 : 252))) ? -3356340692671375921 : ((9239646390569828591 ? (min((arr_30 [i_9] [i_5]), (arr_20 [i_10] [i_10] [i_10]))) : 1655715264432838996))));
                        var_30 = (min(var_30, ((max(var_10, (arr_30 [i_8] [i_8]))))));
                        var_31 = ((var_0 % (arr_5 [i_5 - 1])));
                    }
                    var_32 ^= (max((~8642399938056771726), 55275));
                    var_33 = (max(var_33, ((((arr_22 [i_5 - 1] [6] [i_9 - 2]) | ((max(65514, 1))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 12;i_11 += 1)
    {
        var_34 = (arr_4 [i_11]);
        var_35 += (var_7 ? (((arr_29 [10]) & var_8)) : 0);
        var_36 = ((var_7 ? (arr_14 [6] [i_11 - 3]) : 3596251286));
        var_37 = var_9;
    }
    #pragma endscop
}
