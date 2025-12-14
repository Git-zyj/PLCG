/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_18 = (((arr_3 [i_1]) < (((var_8 && ((min(var_0, (arr_5 [i_1])))))))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_19 = (max((((32767 ? (arr_14 [13] [i_2] [i_2 + 2]) : (arr_13 [i_1] [i_4] [i_4] [i_4] [i_3] [i_1])))), ((-var_17 ? (min(32764, 9191479992213630480)) : (32767 + var_4)))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] = (arr_13 [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1] [i_3] [i_1]);
                            arr_16 [i_1] [i_1] [i_3] [i_4] = (max((-2147483647 - 1), -86));
                            arr_17 [i_0] [i_1] [i_1] [i_3] [i_1] = arr_3 [i_1];
                            var_20 = (((((min((arr_8 [i_2] [i_1] [i_2 - 3]), var_11))) ? (((arr_12 [i_1] [i_0]) ? var_14 : (arr_12 [i_0] [14]))) : -1)) ^ -var_16);
                        }
                    }
                }
            }
            var_21 = (min(var_21, ((((arr_12 [i_1 - 2] [i_1 - 2]) ? (((arr_12 [i_1 - 3] [3]) ? (arr_12 [i_1 - 3] [i_1 + 1]) : (arr_12 [i_1 - 1] [i_1]))) : ((-(arr_12 [i_1 - 2] [i_1 - 1]))))))));
            var_22 += (((~(arr_10 [i_0] [i_0] [i_0] [i_1]))));
        }
        var_23 = ((((max((((arr_5 [8]) ? -25 : (arr_1 [i_0]))), ((-53 ? 4000833646 : -7951979301259999585))))) ? ((var_12 ? (arr_12 [i_0] [i_0]) : (arr_12 [i_0] [i_0]))) : ((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_14 [1] [i_0] [i_0]) : var_7))) ? ((var_5 ? (arr_9 [i_0] [i_0] [12] [i_0] [i_0]) : 7976)) : ((4294967295 ? (arr_4 [0] [0] [0]) : 105))))));
        var_24 ^= (((((-(arr_10 [i_0] [i_0] [i_0] [i_0])))) && ((((arr_10 [i_0] [i_0] [i_0] [i_0]) / (arr_10 [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_25 = (max(var_25, ((((arr_19 [i_5 - 2] [i_5 - 1]) & (arr_19 [i_5 - 2] [i_5 - 1]))))));
        var_26 = ((((var_7 ? var_10 : (arr_18 [i_5]))) * var_2));
    }
    var_27 = (((4294967286 - (127 + -24))));
    var_28 = var_9;
    var_29 ^= var_7;
    #pragma endscop
}
