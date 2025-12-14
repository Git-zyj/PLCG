/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = ((((var_6 != (arr_4 [i_0 - 1] [i_1]))) ? ((~(arr_0 [i_0 - 2] [i_0 + 1]))) : 63088));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_14 = (max(var_14, 1810461981));
                        var_15 = ((((arr_5 [i_2] [i_2] [i_2] [i_2]) ? (var_10 / 83) : -var_2)));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_16 ^= (arr_0 [i_0] [i_4]);
                        var_17 = ((~(min(((max((arr_14 [i_1] [i_1] [i_1] [i_4] [i_1] [i_1]), var_12))), (arr_13 [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_4 - 1])))));
                        arr_16 [i_0 - 2] [i_2] [i_0 - 2] [i_0 - 2] [i_0 - 2] = (((192 <= 87) ? (min((((arr_6 [i_0] [i_1] [i_2]) / var_9)), -63065)) : (((-(~63088))))));
                        var_18 = (max(var_18, ((((((!((min((arr_13 [i_1] [4] [i_1] [i_1]), var_10)))))) | ((-(((!(arr_8 [i_4] [i_0] [i_1] [i_0])))))))))));
                        arr_17 [13] [i_2] [i_1] [13] = (((((!(arr_8 [i_0 - 3] [i_1] [i_2] [i_1])))) + (((arr_8 [i_0 - 1] [i_1] [i_1] [i_4]) + (arr_5 [i_0 - 3] [i_1] [i_1] [i_4 - 2])))));
                    }
                    arr_18 [i_2] [i_0] = (arr_7 [5] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_19 = ((((min(var_10, var_2))) ? var_6 : ((((var_12 ? -126 : 493078514)) | var_4))));
    var_20 = (min(724813915, ((var_6 ? 76 : 2147483639))));
    #pragma endscop
}
