/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (87 ? var_9 : ((var_7 ? (~var_9) : 231381833)));
    var_13 = (123 | 1461619271);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = var_4;
        var_15 = ((~(((arr_0 [i_0]) + (var_8 > var_8)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_16 = (max((max(var_11, var_9)), 124));
                            var_17 = (max(var_17, (min((!var_4), -1916309334))));
                            var_18 = (((arr_11 [i_1] [i_2]) ? (((max(15, 8820)))) : (min((arr_9 [i_1] [i_4] [17]), (arr_13 [i_4 - 1] [i_4 - 2] [i_1] [i_1])))));
                        }
                        var_19 = var_11;
                        var_20 -= (min(((~((min((arr_7 [i_2] [i_1]), 128))))), ((max(var_3, 123)))));
                    }
                }
            }
            var_21 = max((!8820), (((arr_13 [i_1] [i_2] [i_2] [i_2]) << (((max(61262, (arr_16 [0] [i_2] [0] [i_1] [22]))) - 3592567935358846674)))));
            var_22 = ((((max(-15, ((var_7 ? var_6 : 16))))) || ((((max((arr_16 [i_1] [i_1] [i_1] [i_1] [1]), var_6)) << (-197459925 + 197459984))))));
        }
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            var_23 = 24576;
            arr_22 [i_1] [i_6] [i_6] = (max((max(56716, -125)), (1664978875 > 123)));
            var_24 = 139;
        }
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            var_25 = ((var_7 ? (arr_18 [i_1] [i_1] [i_1]) : ((~((var_0 ? (arr_20 [i_7 - 2]) : 511749263))))));
            var_26 = ((((max((arr_24 [20]), (arr_23 [i_7] [i_7])))) ? (min((arr_21 [i_1]), (min(114, (arr_14 [i_1] [i_7]))))) : (max((max((arr_3 [i_7]), 24576)), var_4))));
            var_27 += ((-((var_0 ? (arr_17 [i_7 - 2] [i_7] [i_7 - 3] [i_7 + 1] [i_7 + 1]) : (arr_9 [i_7 - 1] [i_7 + 1] [i_7 + 2])))));
        }
        var_28 *= (((((((var_10 << (112 - 97)))) / (min(var_4, 2294756160)))) & 7614));
        var_29 = ((min((arr_21 [i_1]), (arr_12 [i_1]))) >> (arr_4 [i_1]));
        var_30 = 125;
    }
    for (int i_8 = 4; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_31 |= -69089082;
        var_32 -= (-((((max(57938, (arr_9 [i_8 - 4] [i_8] [i_8])))) ? (((arr_6 [i_8]) ? (arr_2 [0]) : var_11)) : var_11)));

        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            var_33 = (min(var_33, 58507));
            var_34 = (arr_13 [i_8] [i_8 + 3] [i_8] [i_8]);
        }
    }
    for (int i_10 = 4; i_10 < 12;i_10 += 1) /* same iter space */
    {
        var_35 = (max((min(-5, ((((arr_15 [i_10] [i_10] [i_10] [16] [i_10 - 4]) == var_0))))), (arr_9 [i_10 - 1] [2] [i_10])));
        arr_32 [i_10] = (max((((((2294756160 ? var_4 : 56454))) ? (69089082 ^ 120) : (arr_27 [i_10]))), (3584 > 11309147755932386896)));
    }
    var_36 = var_4;
    #pragma endscop
}
