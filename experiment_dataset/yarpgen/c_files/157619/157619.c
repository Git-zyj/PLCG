/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 &= (max(var_1, ((((((-127 - 1) + 2147483647)) >> (((arr_0 [i_0]) + 7224)))))));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_11 += ((max(((var_6 - (arr_0 [i_0]))), ((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0] [6]) : var_9))))));
            arr_5 [i_0] [10] [i_1 + 1] = ((!((min(((112 >> (var_6 - 390183943))), ((max((arr_2 [i_0] [i_0] [i_1]), 1))))))));
            arr_6 [0] [i_1] = 112;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_13 [i_2] [1] [i_2] [i_3] = min(((((!var_2) && ((((arr_2 [i_3 + 2] [i_1] [i_0]) << (((arr_9 [i_0]) - 17201225664733072585)))))))), (max((arr_10 [i_0] [i_0] [i_1] [i_2] [i_3 + 1]), var_2)));
                        var_12 = ((-(min((arr_1 [i_2] [i_3]), (min(var_3, var_8))))));
                        var_13 = (max((min((arr_9 [i_3 + 2]), (arr_9 [i_3 - 1]))), (arr_9 [i_0])));
                    }
                }
            }
            arr_14 [21] [21] [i_1 + 2] = (arr_12 [i_1 + 2] [i_1] [i_0] [i_0]);
        }
        var_14 = (min(var_14, ((max(-var_4, 1)))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_15 = -15405;
        var_16 = ((0 | ((((arr_2 [i_4] [i_4] [i_4]) >= var_4)))));
        var_17 &= ((((arr_12 [i_4 + 1] [i_4] [i_4] [i_4]) ? (arr_4 [i_4] [i_4] [18]) : 310437030)) >> (var_6 < 1));

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_18 = ((1 ? (arr_2 [i_4] [i_4] [i_4]) : var_4));
            var_19 *= ((1 < (((arr_7 [i_5] [3] [i_5]) * -31228))));
            var_20 = var_3;
            var_21 = (min(var_21, (!var_9)));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_22 [i_6] = 1;
            var_22 += -872113759;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_25 [i_4] [11] [i_4] = ((((4 ? (arr_7 [i_4 + 1] [i_4] [1]) : (arr_12 [i_4] [i_4] [i_4] [i_4]))) * (arr_11 [i_4 - 1])));
            var_23 = ((var_2 & ((((!(arr_12 [i_7] [i_7] [i_7] [i_7])))))));
        }
        arr_26 [i_4] [i_4] = (arr_2 [i_4] [i_4] [i_4]);
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 20;i_8 += 1)
    {
        arr_31 [i_8] = (var_3 == -var_9);
        arr_32 [i_8] = ((!(arr_30 [i_8 + 1])));
        var_24 += (((((arr_27 [i_8 + 2]) ? 1569636107 : 1275760903746089223)) | (~var_8)));
    }
    var_25 = -8656744704841922457;
    var_26 &= (max((max((2734 | 253), ((var_5 >> (27425 - 27390))))), (min((var_5 & var_2), (((13738179565166316711 ? var_6 : 53)))))));
    var_27 = 27425;
    #pragma endscop
}
