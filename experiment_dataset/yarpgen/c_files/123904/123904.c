/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 = var_13;
                        arr_9 [i_0] [i_0] [10] [i_1] [i_2] [i_3] = (min(-17, (((-var_14 >= (min(var_1, var_2)))))));
                        arr_10 [i_3] [i_0] [i_0] [7] = (arr_3 [1]);
                        arr_11 [2] [i_1] [20] [20] [i_0] = (((arr_4 [i_0] [11] [i_0]) ? ((var_8 ? 56181 : var_1)) : ((-(((arr_2 [i_0] [i_0]) >> (56181 - 56153)))))));
                    }
                }
            }
        }
        var_18 = (max((((arr_1 [i_0] [i_0]) ? ((~(arr_2 [i_0] [i_0]))) : (min(8191, -2110984706)))), var_3));
        var_19 = ((~(min((arr_1 [20] [i_0]), (arr_3 [i_0])))));
        var_20 = (((max(var_0, (min(var_13, (arr_4 [7] [i_0] [i_0])))))));
        var_21 = (min((arr_0 [i_0] [i_0]), (!56202)));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_22 = max((arr_1 [i_4] [i_5]), (arr_1 [i_4] [i_4]));
            var_23 += (arr_1 [21] [i_4]);
            var_24 = (((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? ((var_6 ? (max(-113, 18)) : (((max(var_7, var_8)))))) : (((-126 % (arr_7 [i_4] [i_4] [i_4]))))));
            var_25 = 8;
            arr_18 [4] [i_5] [i_4] = min(var_11, (min(((((arr_4 [i_4] [i_4] [i_5]) != 30))), (min(var_14, (arr_1 [i_4] [i_4]))))));
        }
        var_26 ^= (min(503316480, (arr_3 [i_4])));
    }
    #pragma endscop
}
