/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((((var_9 ^ 13754) ? (((var_7 ? -9256 : 23))) : -3696818680959618190))) ? var_9 : (((var_14 ? var_3 : var_18)))));
    var_20 += var_13;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(5312142796986072439, -23));

        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {
            var_21 = (((((59 & (max(53388, 242427264))))) ? ((-var_10 ? -1358547301 : (max(var_18, var_6)))) : (((arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) & (arr_4 [i_1 + 1] [i_1 + 1] [1])))));
            var_22 ^= (min(((var_0 ? 3696818680959618216 : (arr_4 [i_0] [i_0] [i_1 + 1]))), 58));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (arr_5 [i_0] [i_2] [1])));
            var_24 ^= ((((min(676363887, var_15))) ? (1 == -211890019) : (arr_0 [i_2 + 1])));
            var_25 = ((((max(126, (arr_3 [i_0])))) ? ((((arr_4 [i_2 + 1] [i_2 + 1] [i_2]) ? (arr_4 [i_2 + 1] [i_2 + 1] [i_2]) : (arr_5 [i_2 + 1] [i_2 + 1] [i_2])))) : (min((((757564287 >> (53379 - 53361)))), (max((arr_0 [i_0]), var_6))))));
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_26 = -65535;
            var_27 ^= ((3911707513541781702 ? ((((-3696818680959618167 ? (arr_9 [i_0] [i_3] [i_3]) : (arr_5 [i_0] [i_0] [i_3]))) << (12156 / var_3))) : (arr_9 [i_3] [i_3] [i_0])));
            var_28 = var_13;
            var_29 = (max(var_29, ((((max((((arr_10 [8]) ? -385 : (arr_7 [i_0]))), (((arr_7 [i_0]) ? var_14 : (arr_7 [i_3 + 1]))))) >> (((arr_10 [i_3]) / (53379 * var_4))))))));
        }
        var_30 = (max(-var_7, ((max((arr_4 [i_0] [i_0] [i_0]), (((arr_9 [i_0] [i_0] [i_0]) ? 4014208243 : -385)))))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_31 = (arr_4 [i_5] [i_4] [i_5]);
                    arr_16 [11] [i_5] [i_5] [5] = (((((arr_13 [3] [i_4 - 1] [i_4 + 2] [1]) ? (arr_14 [i_4 - 3] [i_4 + 1] [7]) : (arr_4 [i_4 - 1] [i_4 + 2] [i_0]))) << (((max(4014208243, (arr_8 [i_4 + 1] [i_4 + 2] [i_0]))) - 4014208217))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = (-2011166013 || (((12157 ? (arr_18 [i_6]) : var_4))));
        var_32 = ((-32613 ? var_10 : ((var_3 & (arr_18 [i_6])))));
        var_33 = (max(var_33, var_1));
    }
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        arr_22 [i_7 + 1] = (arr_17 [i_7] [i_7]);
        var_34 ^= ((((arr_18 [i_7 - 2]) != (arr_18 [i_7 + 2]))) ? ((((12408703761511187905 >= var_3) >> (13084363793100780015 <= var_1)))) : ((+((var_0 ? (arr_20 [i_7] [i_7]) : -19288)))));
    }
    #pragma endscop
}
