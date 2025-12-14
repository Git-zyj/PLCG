/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (var_2 << (2686716017 - 2686716004));
        var_14 = ((2147483638 ? ((172 << (89715289 - 89715286))) : var_6));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_15 ^= var_2;
        var_16 = (min(-21557, ((4666127848825153927 ? -6941 : (arr_4 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_9 [13] = arr_4 [i_2];
        arr_10 [i_2] [i_2] = (max(((max(((var_10 ? (arr_8 [i_2]) : (arr_3 [i_2]))), var_13))), ((var_8 ? (21556 | 4) : (arr_4 [i_2])))));
        var_17 -= -20716;
        arr_11 [i_2] = ((!var_3) ? var_3 : (((var_12 ? 241367211033381782 : var_11))));
        var_18 *= ((!((min(var_8, (arr_6 [i_2]))))));
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_19 = (min(var_19, (((var_2 ? (arr_7 [i_3]) : var_11)))));
            var_20 = (max((arr_12 [i_3]), ((max((arr_15 [i_3]), (arr_15 [i_3]))))));
            arr_17 [i_3] [i_4] [i_4] = (((((var_8 ? -4668322482402835572 : var_12))) ? ((89 ? 6993805307343154399 : 203)) : ((((((var_5 ? var_2 : var_1))) ? ((var_4 ? var_1 : var_1)) : var_9)))));
            var_21 *= ((((max((arr_16 [i_3] [i_3] [i_3]), ((var_9 ? (arr_3 [i_4]) : -6941))))) ? (((var_2 ? (!var_6) : ((var_6 ? (arr_16 [i_3] [i_3] [i_3]) : var_10))))) : ((((min(var_13, (arr_14 [i_3] [i_3] [i_3])))) ? ((var_12 ? var_11 : var_7)) : ((((-27030 + 2147483647) << (var_2 - 1))))))));
            arr_18 [2] [2] = (min((max(var_11, var_12)), (((!(arr_4 [i_3]))))));
        }
        var_22 = ((-1 % ((((((arr_16 [i_3] [i_3] [i_3]) ? (arr_0 [i_3] [i_3]) : var_10))) ? (arr_4 [i_3]) : ((((arr_7 [i_3]) ? var_3 : (arr_16 [16] [i_3] [i_3]))))))));
        arr_19 [i_3] [i_3] &= (min(var_4, (~var_7)));
        arr_20 [i_3] = (((((arr_6 [i_3]) ? ((var_12 ? 81 : (arr_6 [i_3]))) : (((max((arr_15 [i_3]), var_5))))))) ? (arr_8 [i_3]) : (arr_5 [i_3] [i_3]));
        arr_21 [i_3] = (min(((-(((arr_16 [i_3] [i_3] [i_3]) ? var_9 : (arr_15 [i_3]))))), (var_2 != var_13)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_23 = (((((arr_3 [i_5]) ? var_8 : var_12)) >> (((!(arr_3 [i_5]))))));
        arr_26 [i_5] [11] = (!var_13);
        var_24 = var_9;
        var_25 = (max(var_25, (((arr_5 [i_5] [i_5]) > var_1))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_26 *= (((!var_10) ? -var_12 : ((var_1 ? var_11 : var_6))));
        var_27 = var_13;
        arr_31 [i_6] [i_6] = (((arr_30 [i_6]) ? (arr_30 [i_6]) : (arr_30 [i_6])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_35 [i_7] [i_7] &= (((!var_9) ^ var_12));
        arr_36 [i_7] = var_1;
        var_28 *= var_5;
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_29 *= ((14301240292148422786 ? ((-(arr_3 [i_9]))) : (((arr_7 [i_7]) ? var_10 : 1087645480))));
                    var_30 *= var_6;
                }
            }
        }
    }
    #pragma endscop
}
