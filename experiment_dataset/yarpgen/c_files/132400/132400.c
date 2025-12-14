/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 -= var_2;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(var_19, (((!(((((max((arr_2 [i_0]), (arr_0 [1])))) ? 33554431 : ((max((arr_2 [i_0]), (arr_2 [i_0]))))))))))));
        var_20 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) * (((arr_1 [i_0]) & (arr_1 [i_0])))));
        var_21 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_5 [7] = ((65535 ? 33554431 : 33554432));
        var_22 = (min(var_22, (((((((arr_2 [i_1]) | (arr_0 [10])))) ? (arr_1 [10]) : (arr_4 [i_1]))))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                arr_12 [i_1] = (((arr_1 [i_3]) ? (((arr_11 [i_1 - 1] [i_1] [i_1] [i_1]) ? (arr_3 [i_3]) : 33554431)) : (arr_9 [i_1 - 1] [i_2] [i_3 + 1])));
                var_23 = (arr_3 [i_1]);
                arr_13 [i_1] [i_2] [i_3] = ((-33554438 + (arr_0 [i_3])));
            }
            var_24 |= (((arr_10 [i_1] [i_1] [i_1] [i_1]) <= ((((181 < (arr_1 [16])))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_25 = (arr_2 [i_1 + 2]);
                        arr_21 [i_1] [i_2] [i_2] [i_2] [i_4] [i_5] = 0;
                        var_26 = (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1]);
                    }
                }
            }
            arr_22 [i_2] [i_2] = (arr_7 [i_1] [i_2] [i_2]);
        }
        var_27 = (min(var_27, (((((((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]) & (arr_19 [i_1] [i_1] [i_1] [i_1] [1] [i_1 - 1])))) ? 12 : (((arr_8 [i_1]) ? 175 : (arr_11 [i_1] [i_1] [i_1] [i_1]))))))));
    }
    #pragma endscop
}
