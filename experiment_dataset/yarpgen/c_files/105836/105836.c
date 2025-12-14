/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((!var_6) ? ((var_0 ? var_7 : var_2)) : ((3167245637 ? var_5 : var_9))))) ? var_6 : (((7646559961353012275 % var_7) * (~var_4)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 |= (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
            {
                var_13 += (((((33431 ? ((-59037422 ? var_4 : (arr_3 [i_0]))) : (min(var_10, (arr_4 [3])))))) + ((((var_1 ? (arr_4 [i_0]) : (arr_2 [9] [i_1]))) + (max((arr_4 [i_2 + 2]), (arr_2 [i_1] [i_2])))))));
                var_14 = (((arr_0 [i_0]) ? (arr_4 [i_2 - 1]) : (((arr_1 [4]) << (33431 - 33375)))));
                var_15 |= (((var_6 + var_6) & ((((min(-1496314279, (arr_4 [i_0]))))))));
            }
            for (int i_3 = 2; i_3 < 8;i_3 += 1) /* same iter space */
            {
                var_16 = (max((min(var_2, (arr_5 [i_3] [i_3 + 2] [i_1]))), -33432));
                var_17 = ((~(9933 || 32766)));
            }
            for (int i_4 = 2; i_4 < 8;i_4 += 1) /* same iter space */
            {
                var_18 += ((~(((arr_5 [i_4 - 2] [i_1] [i_1]) * -22661))));
                var_19 += ((((max((arr_4 [i_4 - 1]), (var_8 + 28846)))) ? ((((arr_3 [i_4 + 3]) >= (arr_1 [i_4 + 1])))) : (min(var_1, ((min(var_0, var_7)))))));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_20 = (max(((max((arr_4 [i_0]), 55589))), (max((arr_3 [i_0]), (arr_10 [i_0] [i_1] [i_1] [i_1])))));

                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    arr_16 [i_0] [i_0] [3] [i_0] = ((~(((732387055 | 1) ? ((max(42823, (arr_4 [i_0])))) : (max(32101, (arr_10 [i_0] [i_1] [4] [i_6 + 1])))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((((((arr_4 [8]) ? 42177 : (arr_4 [i_6])))) ? (((arr_12 [i_6 - 2]) ? var_1 : 4294967295)) : ((((arr_12 [i_0]) ? (arr_12 [7]) : (arr_12 [i_5]))))));
                }
                var_21 = (min(var_21, ((max(((((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [1]) : (arr_13 [i_0] [i_0] [i_1] [i_1] [i_5] [8])))) ? -var_6 : (((var_5 ? var_9 : (arr_3 [i_5])))))), ((((((arr_2 [i_0] [i_0]) ? (arr_2 [1] [1]) : 65535)) != (((1 ? var_0 : var_0)))))))))));
                var_22 |= ((-((((min((arr_14 [i_5] [i_5] [i_1] [i_1] [i_1] [i_0]), (arr_8 [i_0] [i_5])))) ? ((1 ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (arr_12 [i_0])))));
                var_23 = var_8;
            }
            var_24 |= ((((((max((arr_9 [1] [3] [i_1] [6]), 16903450410035123033))) ? (((var_7 << (((arr_1 [i_1]) - 15421796092873049921))))) : (max((arr_1 [i_0]), var_7)))) >> ((((((((arr_3 [i_0]) ? var_6 : (arr_3 [i_0])))) ? 22318 : ((39870 ? var_4 : var_4)))) - 22277))));
            var_25 += (!var_0);
            var_26 += (max(((((1 ? var_1 : var_0)))), ((-59773667 ? (arr_4 [i_1]) : (arr_4 [i_1])))));
            var_27 &= (min(((((((arr_15 [i_0] [i_1] [i_1] [5]) >= 26057)) ? (((min((arr_9 [i_1] [6] [i_1] [6]), var_7)))) : (max((arr_15 [i_0] [i_0] [i_1] [i_1]), -1392426157906788032))))), ((((((arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0]) ? (arr_14 [10] [8] [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_1] [i_1] [i_1])))) ? (((arr_2 [6] [i_1]) ? 10160818324888617640 : (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) : (arr_8 [i_0] [i_1])))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {

            /* vectorizable */
            for (int i_8 = 4; i_8 < 8;i_8 += 1)
            {
                var_28 = ((~(arr_7 [i_8 - 3] [i_8 - 4] [i_8 + 3] [i_8 - 1])));
                var_29 = ((((((arr_14 [i_0] [i_0] [i_0] [7] [i_0] [i_0]) - 1))) ? ((11879096687035844205 ? var_3 : var_5)) : (arr_12 [i_8 + 2])));
            }
            var_30 |= (((((((((arr_13 [8] [i_0] [i_0] [i_0] [i_0] [i_7]) ^ -1))) ? ((max(var_1, (arr_12 [i_0])))) : ((~(arr_18 [i_0] [i_0] [i_7])))))) >= (min((-4226 / 18446744073709551615), (arr_4 [i_0])))));
            var_31 = (max(((var_3 ? (arr_21 [i_0] [i_0] [i_0]) : 6567647386673707399)), ((max((arr_18 [i_0] [i_7] [i_0]), (arr_12 [i_7]))))));
        }
    }
    #pragma endscop
}
