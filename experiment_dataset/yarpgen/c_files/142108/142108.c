/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = var_4;
        arr_4 [i_0] &= (max((((arr_0 [i_0]) & (arr_2 [i_0] [i_0]))), (arr_2 [i_0] [1])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                {
                    var_15 = (min((((55077 ? (arr_1 [i_3 - 1] [i_3]) : (arr_1 [i_3 + 2] [i_3 + 2])))), (min((arr_1 [i_3 - 2] [i_3 - 2]), var_7))));

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_16 += (((arr_6 [i_3] [i_4]) ? var_5 : ((-((32508 >> (var_1 - 14830)))))));
                        var_17 = (max((arr_0 [i_3]), ((((arr_8 [i_1]) ? 32508 : (arr_9 [i_1] [i_3 + 1] [i_1]))))));
                    }
                    arr_15 [i_1] = (((~-499518850) ? (!-96) : (max((arr_13 [i_3 + 2] [i_3 - 1] [i_3 - 1]), -887904746))));
                    var_18 = (((((105 & (~var_9)))) ? (((212 ^ var_9) ? (arr_13 [i_2] [i_3 + 1] [i_3 - 2]) : ((max(10458, 127))))) : (((min(-32523, -150945512))))));
                }
            }
        }
        arr_16 [i_1] = (min((min((arr_0 [i_1]), (arr_2 [i_1] [i_1]))), ((min(((141 ? 945481585 : -1897270622)), ((-1219784819 ? 1219784840 : (arr_12 [i_1] [7]))))))));
        var_19 = ((((!(arr_13 [i_1] [i_1] [i_1])))));
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_20 -= ((+((((arr_17 [i_5]) == 1)))));
        var_21 = (((!1) ? (max((max((arr_18 [i_5]), (arr_2 [i_5] [i_5]))), 8779366043548425595)) : (arr_1 [i_5] [i_5])));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_22 = ((((((var_14 ? var_9 : var_13)))) ? ((((((-(arr_14 [i_6] [4] [i_6] [i_6] [i_6] [i_6])))) ? (!191) : (!1)))) : ((-195784708 ? (arr_5 [i_6] [i_6]) : ((min(var_6, 127)))))));

        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            var_23 = 55077;
            var_24 = (min(((-(33 - -8518316604016319205))), ((max(33412, (arr_11 [12] [i_7] [i_6]))))));
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 7;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_25 = var_14;
                            var_26 = (max(var_26, (max((min(var_10, (arr_28 [i_6] [i_6]))), (min(-1682355420, 499518837))))));
                            var_27 ^= (((((-(min(140, var_7))))) ? (((!((max(2536, (arr_10 [i_10]))))))) : var_10));
                        }
                    }
                }
            }
            arr_36 [i_6] [i_8] |= 736926692;
            arr_37 [i_6] [i_8] = (arr_18 [i_8]);
            arr_38 [i_8] [1] = (arr_35 [i_6] [1] [i_8] [4] [i_8] [i_8]);
            var_28 ^= (((max(1871830353, 2391579744)) * (((-(arr_24 [i_6] [0]))))));
        }
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
    {
        var_29 = 16948;
        var_30 *= 8;
        arr_41 [i_12] = ((((((arr_0 [i_12]) ? (arr_25 [i_12]) : (arr_0 [i_12])))) ? ((((((arr_27 [i_12]) >= 345752071)) ? ((((arr_39 [9]) == 1807454652))) : (((arr_19 [i_12]) ? 20526 : (arr_17 [i_12])))))) : (((arr_31 [i_12] [i_12] [i_12] [i_12] [i_12]) ? ((min(var_10, (arr_27 [5])))) : (var_7 + var_10)))));
        var_31 *= ((!(((max((arr_31 [i_12] [i_12] [i_12] [0] [i_12]), (arr_1 [i_12] [i_12])))))));
        var_32 = (min(var_32, ((max(var_12, (((((var_5 ? var_7 : (arr_10 [3]))) == 4936800581272101551))))))));
    }
    var_33 = ((var_6 ^ (((max((min(1828, var_12)), (!205)))))));
    #pragma endscop
}
