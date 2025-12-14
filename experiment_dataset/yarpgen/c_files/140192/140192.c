/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_3 ? var_9 : (min(var_9, ((var_5 ? var_9 : 16))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 ^= (((((((min(var_1, (arr_4 [6])))) ? (((var_16 ? (arr_1 [2]) : (arr_2 [i_0])))) : ((48 ? (arr_6 [10] [i_1]) : 0))))) || 1));
                    var_20 = (var_13 || var_12);
                }
            }
        }
        var_21 = (max(var_21, ((max(var_3, ((max((min((arr_8 [i_0] [i_0] [1] [i_0]), var_15)), (arr_1 [8])))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 = ((~((((arr_11 [i_3]) < var_7)))));
        var_23 = (4 >> 14);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_24 = (((-((0 ? var_10 : (arr_10 [i_4] [i_4]))))));
        var_25 = (((~(arr_13 [i_4]))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        arr_17 [i_5 + 1] [i_5] = (-2147483647 - 1);

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_20 [i_6] [6] = 8987294065721510736;
            var_26 = 8987294065721510736;
        }
        arr_21 [4] = 242;

        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            arr_24 [i_5] [10] = (242 - -6864);
            var_27 -= 6284403998581944424;
        }
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            arr_28 [i_5] [i_8] = (arr_25 [i_8] [i_8 + 1] [4]);
            var_28 = (((((~var_6) + 2147483647)) << (((((arr_23 [i_5] [i_5 - 2] [5]) + 129)) - 22))));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_29 -= (arr_4 [i_5]);
            var_30 -= (((arr_25 [i_5 - 2] [i_5 - 2] [i_5 - 2]) || (arr_4 [i_5])));
        }
    }
    var_31 = max(var_3, (((~var_15) - (min(var_9, 252)))));
    var_32 = (max(var_32, var_4));
    #pragma endscop
}
