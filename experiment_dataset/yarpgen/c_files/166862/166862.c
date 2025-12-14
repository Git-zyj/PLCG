/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -2147483640;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_1] [i_1] |= (((arr_1 [i_1] [8]) ? ((-1812483202 ? (max(var_0, var_1)) : (((89511056 / (arr_1 [i_1] [0])))))) : (((((~(arr_6 [i_0])))) ? (7923998883848383414 - 10522745189861168202) : (-2147483647 - 1)))));
            var_14 = (max(0, (((arr_4 [i_0]) << (7923998883848383414 - 7923998883848383372)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_1 - 1] [i_1] = ((62588 ? ((1 ? (max((arr_9 [i_0] [i_0] [i_0]), 7393524189165513874)) : (arr_3 [i_0]))) : (((arr_12 [i_0] [i_0] [i_0 + 1] [i_1 - 1] [i_2] [i_0]) ? var_8 : 10522745189861168201))));
                        var_15 = 8756948977362745490;
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_16 -= 0;
            var_17 += 1;
            var_18 &= (~((~(~1))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_19 ^= arr_11 [20];
            arr_22 [i_0] [i_0] = 21587;
            arr_23 [1] [i_0] = var_10;
        }
        var_20 = ((((1 ? 1713926220 : (max((arr_20 [i_0] [i_0 - 1]), 7393524189165513874))))) && 1);
    }
    var_21 = ((((((var_2 * 7923998883848383414) >> 1))) ? 914273902 : var_7));
    #pragma endscop
}
