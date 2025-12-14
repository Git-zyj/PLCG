/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (min(var_19, (((((((arr_0 [i_0]) ? ((max(42192, 27))) : ((max(252, (arr_1 [2]))))))) ? ((max(-64, (937545122733636278 && 16494692679749254949)))) : -3)))));
        arr_2 [i_0] [i_0] = (~var_9);
        var_20 = min(((var_6 ? (arr_1 [i_0]) : (arr_1 [i_0]))), ((~(arr_1 [i_0]))));
        arr_3 [i_0] = ((-var_15 | ((((((arr_0 [i_0]) ? var_10 : (arr_0 [i_0])))) ? ((max(43, 255))) : ((var_3 ^ (arr_1 [i_0])))))));
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_21 = (min(var_21, (1 & 0)));
            var_22 = (max(-21343, (max(var_6, (((var_0 ? 3 : (arr_6 [2]))))))));
        }
        var_23 = ((((((var_6 ? var_15 : 29)))) > (((arr_6 [i_1]) % -9223372036854775807))));
        var_24 += (min(((-(arr_6 [i_1]))), (arr_6 [i_1])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] = (arr_14 [i_3]);

        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_25 = (arr_16 [12] [12]);
            var_26 = ((~(max((2427 | var_4), 4743500297333763889))));
            var_27 = (((((arr_17 [i_3] [i_4] [i_4]) && (arr_17 [i_3] [i_3] [i_4])))) + ((128 ? 21442 : 122)));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_20 [i_3] [i_3] = ((((-26992 + 2147483647) << (((arr_16 [i_3] [i_5]) - 154)))));
            arr_21 [i_3] [i_5] = (max(2044657291, ((var_7 ? ((var_17 ? (arr_19 [i_3] [i_5]) : (arr_13 [i_3]))) : ((max(197, var_3)))))));
            var_28 = ((-(max((var_1 & 3661033766510693643), (33554431 | 38)))));
            arr_22 [i_5] = var_8;

            for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_29 += ((+(((arr_18 [i_6 + 1] [i_6 - 2] [i_6 + 1]) ? ((207 << (252 - 238))) : 62))));
                            arr_30 [i_6] = ((~(min(((var_3 << (127 - 111))), ((max(2198, 17776)))))));
                        }
                    }
                }
                var_30 = -13851;
            }
            for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
            {
                var_31 += ((~(arr_13 [i_9])));
                var_32 = max(((-31889 ? 16 : var_15)), var_4);
            }
            for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
            {
                var_33 -= (max((-16 | 9033461933876404065), ((max(((!(arr_34 [i_3] [i_3] [i_3]))), 2147483646)))));
                var_34 = (max(var_34, ((max((0 ^ 0), 63856)))));
                var_35 = (((((var_6 % (arr_36 [i_10 + 1] [16] [i_10] [i_3])))) ? ((-((var_4 ? var_14 : (arr_23 [i_5] [i_3]))))) : (((((1 >= (arr_25 [10] [i_5] [i_5] [i_5])))) >> (125 - 104)))));
            }
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_36 = (arr_33 [i_3] [i_11] [13]);
            arr_40 [i_3] = var_15;
            var_37 = ((max((arr_14 [i_11]), var_2)));
        }
        arr_41 [i_3] [i_3] = (max((((arr_33 [i_3] [6] [5]) ? ((((151 != (arr_39 [i_3] [i_3]))))) : (max(3706096264, -82)))), (((+(((arr_29 [i_3]) << (arr_37 [i_3] [i_3]))))))));
        var_38 = (max(((((55 / var_10) && ((((arr_23 [i_3] [i_3]) ? var_8 : var_16)))))), ((((63 ? 39 : -8)) ^ (65535 | 107)))));
    }
    var_39 = ((min(var_10, var_3)));
    #pragma endscop
}
