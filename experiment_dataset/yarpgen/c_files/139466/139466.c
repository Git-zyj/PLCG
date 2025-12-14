/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = -0;
        arr_3 [i_0] [i_0] = ((!((((min((arr_1 [5]), (arr_0 [i_0]))) - (((~(arr_0 [i_0])))))))));
        var_10 = (max(var_10, var_2));
        var_11 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_9 [14] [i_2] [i_2] = (((arr_6 [i_1] [i_2]) ? ((((max(10787634822803965784, 14640)) >= (((max(-1, 57017))))))) : (((arr_4 [i_2]) << ((((~(arr_5 [i_2]))) + 139))))));
            var_12 = (max(var_12, (((+(((((arr_7 [i_1]) <= var_0)) ? 0 : (arr_8 [i_1] [i_2] [9]))))))));
            var_13 = (min(var_13, (((var_2 || (((-(arr_6 [i_1] [i_1])))))))));
            var_14 += ((-(((arr_6 [i_1] [i_1]) << (((arr_5 [15]) - 109))))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_15 -= (((((8518 >> (219 - 202)))) || 170));

            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                var_16 = (max(var_16, (~-var_7)));
                var_17 = (arr_7 [i_1]);
                var_18 = ((((((-(arr_4 [i_1]))) + 2147483647)) >> (max(((~(arr_11 [i_3] [i_1]))), var_6))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_19 [i_4 + 1] = (((min(((min(0, (arr_13 [i_5] [i_5] [i_5] [8])))), (((arr_5 [i_4]) << var_7)))) | ((~(arr_15 [i_1] [i_1] [i_6])))));
                            var_19 ^= -67108860;
                            var_20 = (max((((arr_18 [i_6] [i_5 - 1] [i_5 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) ? var_4 : (arr_18 [2] [i_6] [i_5 - 1] [i_5] [i_4 + 3] [i_4 - 2]))), (((!(arr_15 [11] [i_4 - 2] [i_4 - 2]))))));
                        }
                    }
                }
            }
        }
        var_21 ^= (((max(((var_1 << (((arr_17 [13] [i_1]) - 175)))), ((var_8 ? (arr_6 [1] [1]) : 85)))) == (((!((max(1, (arr_7 [i_1])))))))));
        var_22 = (max(var_22, ((min((max(((((arr_18 [i_1] [1] [10] [i_1] [i_1] [i_1]) != (arr_15 [i_1] [i_1] [i_1])))), (((arr_7 [i_1]) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_13 [i_1] [i_1] [i_1] [14]))))), ((-((((arr_17 [i_1] [i_1]) > (arr_17 [i_1] [i_1])))))))))));
    }
    var_23 -= var_1;
    #pragma endscop
}
