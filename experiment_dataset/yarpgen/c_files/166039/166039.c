/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_18 = ((!(((0 ? (arr_1 [i_0 + 1]) : (-2147483647 - 1))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 *= ((!(((-5546367491732060789 ? 1 : -5546367491732060789)))));
                                var_20 = (arr_8 [i_0] [i_3]);
                                var_21 = (((arr_4 [i_0]) < var_9));
                            }
                        }
                    }
                    var_22 = (arr_0 [i_0]);
                    arr_11 [i_0] [i_1] [18] [i_1] &= var_8;
                    var_23 = (max(var_23, (((var_7 ? (((!(arr_8 [i_2] [i_2])))) : 65535)))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_24 = (((((((max((arr_8 [i_5] [i_5]), (arr_3 [i_5] [i_5])))) ? (arr_7 [i_5] [i_5] [i_5] [6]) : (var_7 > var_11)))) ? (((((max(var_15, (arr_12 [i_5])))) ? ((max(var_16, 244))) : (((arr_6 [i_5] [i_5] [i_5]) ? (arr_10 [i_5]) : 1816945317))))) : (min((max(var_4, var_9)), (arr_5 [i_5] [i_5] [24])))));
        var_25 = (max(var_25, ((min((((arr_3 [i_5] [i_5]) >> (((arr_1 [i_5]) - 10611983782320529698)))), var_12)))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_26 = (max(((((((arr_9 [i_6] [i_6] [i_6] [i_6]) ? -5546367491732060789 : var_4))) ? var_6 : (arr_12 [i_6]))), var_6));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_27 = ((var_12 ? (!var_14) : (!var_3)));
                                arr_24 [i_6] [i_7] = (!2984604876789882749);
                                var_28 = (((((var_2 * var_10) ? ((((var_10 && (arr_8 [i_9] [6]))))) : ((var_5 ? var_5 : var_16)))) / (((var_16 ? var_4 : (arr_13 [i_9]))))));
                            }
                        }
                    }
                    var_29 = (((((1 ? (min(10038824568619602785, var_4)) : 0))) ? (max(1073739776, -21963)) : (!12)));

                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_27 [i_6] [i_6] = ((!((((arr_12 [i_6]) ? (var_2 == -1) : (max(-1073739792, 110)))))));
                        var_30 = (max(var_30, var_8));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        arr_32 [i_12] = ((!(arr_4 [2])));
        var_31 |= (((((~((min(var_1, var_11)))))) ? (((!(arr_3 [10] [10])))) : (max((!var_3), (min(var_13, (arr_8 [10] [i_12])))))));
    }
    var_32 = (((max(var_7, var_1)) << (((min(var_6, var_11)) + 8349144190976190569))));
    #pragma endscop
}
