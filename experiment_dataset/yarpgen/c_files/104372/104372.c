/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = (max(var_21, ((max(var_1, -114)))));
    var_22 = (max((var_15 * var_18), var_19));
    var_23 = -var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_24 = ((9121764257580959328 ? 1 : 1040187392));
        var_25 = (max(var_9, (arr_1 [i_0] [i_0])));
        var_26 -= ((((max((max((arr_0 [i_0]), var_18)), (~-23134)))) ? var_19 : (max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
            {
                arr_10 [i_0] = ((9324979816128592287 * (arr_9 [i_0] [i_1])));
                var_27 *= ((((!(arr_3 [i_1]))) ? (arr_6 [i_0] [i_0] [i_2]) : var_13));
            }
            for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_1] [8] [2] = ((arr_5 [i_0]) ? (arr_8 [i_1] [i_1] [i_3] [i_0]) : ((65 >> (var_2 - 27))));
                arr_14 [9] [11] = ((12472 ? 9324979816128592307 : var_12));
                var_28 = (arr_7 [i_3] [i_3] [i_3]);
            }
            var_29 = ((-((var_18 ? 9324979816128592307 : (arr_6 [i_0] [i_0] [i_1])))));
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_30 = ((9324979816128592287 ? (((~(arr_15 [i_4])))) : (max((~9121764257580959328), ((max((arr_15 [i_4]), var_3)))))));
        var_31 = (arr_17 [i_4] [i_4]);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    {
                        var_32 *= ((((~((-23134 ? (arr_16 [i_7] [i_4]) : 6750995121435995566)))) | ((((arr_18 [i_7] [i_6] [i_4]) ? (((!(arr_17 [i_4] [i_4])))) : (((!(arr_16 [i_5] [1])))))))));
                        var_33 -= ((!((!((!(arr_18 [i_4] [i_5] [11])))))));
                    }
                }
            }
        }
        arr_25 [i_4] = ((((((arr_24 [i_4] [7]) ? (arr_24 [i_4] [i_4]) : (arr_24 [i_4] [i_4])))) ? 27776 : (arr_24 [i_4] [i_4])));
        var_34 = (((((-(arr_23 [i_4] [i_4] [i_4] [i_4])))) ^ (((((9324979816128592306 ? 9121764257580959326 : 880573392))) ? (arr_20 [i_4] [i_4] [i_4]) : var_12))));
    }
    #pragma endscop
}
