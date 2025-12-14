/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_2));
    var_12 -= (-32767 - 1);
    var_13 = 32767;
    var_14 ^= ((((var_3 ? var_5 : var_4)) < -var_8));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_15 = (arr_0 [i_0 - 2]);
        arr_3 [i_0 - 2] [2] = ((((~(arr_1 [i_0 - 1]))) | ((max((arr_0 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_6 [11] = (arr_4 [i_1]);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = ((((min(16162, (25227 - 32767)))) ? ((((1 || (-32767 - 1))) ? 32767 : 32767)) : ((8338962803275417525 ? 20461 : 27767))));
            var_17 = (arr_5 [i_1 - 3]);
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_18 = (max(var_18, (((-40309 ? ((((arr_8 [i_3 + 1] [12]) < (arr_4 [i_1])))) : ((min((arr_4 [3]), (min((arr_9 [15]), var_1))))))))));
            arr_11 [i_1 - 2] [i_3] = (((arr_8 [i_1 - 2] [i_3 + 1]) ? (arr_8 [i_1 - 2] [i_3 + 1]) : 0));
        }

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_19 = (min((max(11729699060891652466, 1)), ((max((arr_19 [i_1 + 1] [i_7 + 1] [i_5] [9] [i_7] [2]), (arr_10 [i_7 + 1] [i_7 - 1]))))));
                            var_20 = ((((max(32767, 37267))) == 37267));
                            var_21 = ((arr_17 [i_1 - 2]) - (((65514 ? (arr_21 [i_7] [i_7] [i_5] [i_7] [i_1]) : (arr_21 [i_1] [i_7] [i_5] [i_7] [i_1])))));
                        }
                    }
                }
                var_22 = (min(var_22, 24226));
            }
            arr_22 [8] = ((arr_17 [i_1 - 1]) ? (arr_17 [i_1 - 1]) : (((((arr_17 [i_1 - 1]) <= (arr_17 [i_1 - 1]))))));
            var_23 ^= ((((arr_18 [1] [i_1 - 1] [i_1 + 1] [i_1]) <= (arr_18 [i_1] [i_1 - 2] [i_1 - 2] [i_1]))));
            var_24 += (4057 / 37267);
        }
    }
    #pragma endscop
}
