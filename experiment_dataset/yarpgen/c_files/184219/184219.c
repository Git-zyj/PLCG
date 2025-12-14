/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (min(((((min(var_19, var_16))) / (-1404328376620413122 ^ -1404328376620413133))), (((32759 ? (~var_10) : var_13)))));
    var_21 = ((var_3 ? (min((70 / var_6), ((min(var_18, 21765))))) : (((var_15 ? -1 : var_4)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_22 = (!((min((min((arr_4 [i_0 - 1]), var_15)), (arr_6 [i_0])))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [18] [i_0] [12] &= min((min(3871139192, var_15)), (((-(arr_4 [i_0])))));
                            var_23 = (min(var_23, ((min(((((arr_1 [14]) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 - 1])))), ((~(arr_4 [i_0 - 1]))))))));
                            var_24 = (max(var_24, 40941));
                            var_25 = ((30306 - (arr_11 [14] [i_3] [i_2] [i_0 - 2])));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_26 = 35215;
                            var_27 += ((((var_6 ? (arr_16 [i_1 - 1] [i_0 + 1] [i_0 + 1]) : (min(var_17, var_9)))) >= (((((min(1, var_8)) <= (arr_21 [12] [4] [4] [i_5] [8] [i_5])))))));
                        }
                    }
                }
                var_28 = ((-((min((arr_10 [i_0] [i_0 - 2] [i_1 + 2] [i_1 + 2] [13]), (arr_2 [i_0 + 1] [i_0 - 2]))))));
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                var_29 |= ((var_6 ? (arr_14 [i_0]) : 0));
                arr_25 [i_0] [14] [i_8] [i_0] = (arr_1 [i_0]);
            }
            arr_26 [12] [12] [i_1] |= ((((min((arr_1 [8]), (arr_1 [18])))) != 35234));
            var_30 = (arr_22 [1] [i_1 + 2] [i_0] [i_0 - 1] [i_0] [i_0 - 1]);
            var_31 *= (min(1, 20));
            var_32 *= ((((min((arr_11 [i_0 - 1] [i_0] [i_0 - 2] [i_0]), 1198512521))) ? (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) : (((arr_11 [i_0 - 2] [i_0] [10] [3]) * var_6))));
        }
        arr_27 [16] [i_0] |= (arr_20 [10] [18] [8] [i_0 + 1] [i_0 - 1]);
        arr_28 [i_0] = ((-(((~0) ? 1606966875 : (((arr_6 [i_0]) ? (arr_17 [i_0] [i_0] [i_0 + 1] [i_0]) : 1404328376620413109))))));
        arr_29 [i_0] = ((!((((arr_17 [i_0 + 1] [i_0] [i_0] [i_0]) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (arr_17 [i_0 - 1] [1] [1] [i_0]))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                {
                    arr_35 [i_0] [i_10] = ((((min((min(1, var_5)), 25595))) ? (((arr_18 [i_0] [4] [i_0 + 1]) * ((29058 ? -1404328376620413105 : 0)))) : (((min(var_18, (((var_14 <= (arr_4 [i_10 + 1]))))))))));
                    arr_36 [i_0] [i_9] [1] = (min(((((~var_18) ^ (-32745 - var_4)))), ((((min(1, (arr_8 [i_0] [1] [4])))) ? (arr_24 [i_10 + 1] [i_10 + 1] [1]) : (arr_1 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
