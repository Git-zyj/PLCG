/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [4] [i_0] [i_2] = ((~((~((max(2146, 47787)))))));
                        var_12 = (!(arr_10 [i_0] [i_1] [i_2] [4] [i_1] [i_0 - 2]));
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        arr_15 [i_0] [i_2] = (((arr_0 [i_0]) ? (arr_14 [i_0] [i_0 + 3] [12] [3]) : (arr_0 [9])));
                        arr_16 [i_0] [i_0 - 1] [5] [14] [i_0 - 2] [i_0] = min(((-8331404601078675663 ? ((max(2147483647, 1))) : -835778908894416102)), (((~(arr_14 [i_1] [i_1] [i_1] [i_4 + 1])))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_13 = (((arr_2 [i_0 - 3]) + (arr_3 [i_1] [i_2] [16])));
                        var_14 = (min(835778908894416107, (((((arr_8 [i_0] [17] [i_0]) + -4075361828442544047)) + 6597069766656))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_15 = (min(var_15, (((-4075361828442544034 ? 24 : 2147483648)))));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_7] [i_6] [i_2] [i_0 + 4] = (((arr_20 [i_0] [i_1] [i_6]) ? ((16 ? -835778908894416102 : 127)) : 4075361828442544070));
                            arr_26 [i_0 - 3] [i_0 - 3] [i_0 - 3] = (((arr_2 [i_6]) ? (((arr_1 [i_0 + 3]) ? -11 : var_3)) : (((1 > (arr_0 [16]))))));
                            var_16 = (min(var_16, (((arr_3 [i_0] [i_1] [i_6]) ? (arr_6 [i_6] [i_7]) : 7284))));
                            arr_27 [1] [i_1] [i_2] [i_2] [i_6] [i_6] [i_7] = (((arr_21 [i_0] [i_1] [i_0] [i_0] [i_0 - 1]) ? (arr_3 [i_0 - 3] [i_0 - 1] [i_0 - 3]) : 11444471930167364169));
                            arr_28 [i_7] [i_2] [i_1] [i_0 - 1] = var_10;
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, (((((((arr_2 [13]) & (arr_0 [i_0])))) ? (~var_3) : (((arr_31 [i_0 - 2] [i_0 - 2] [i_2] [i_6] [i_0 - 2] [i_2]) ? 2249510481130725741 : (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))))));
                            var_18 ^= (arr_7 [i_0 + 2] [i_8]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_39 [i_0 + 1] [i_9] = (!-var_2);
                                var_19 ^= ((((min((arr_36 [i_0] [i_0] [i_0 + 4] [i_0] [i_0 - 2] [i_0 + 3]), 2577))) >> (arr_36 [i_0] [i_1] [3] [i_9 + 2] [i_9 + 2] [i_10])));
                            }
                        }
                    }
                    var_20 = (min(((var_5 ? (arr_13 [5] [i_1] [i_1] [i_2]) : (var_6 & var_10))), (-69 ^ 49159)));
                    var_21 = (min(var_21, (arr_32 [i_0 + 1] [i_0 + 3])));
                    arr_40 [i_0] [13] [i_0] [2] = (64 ? 32256 : 14);
                }
            }
        }
    }
    var_22 = (max(var_7, (max(var_9, (var_10 * var_3)))));
    var_23 = var_10;
    var_24 = var_8;
    var_25 -= (max(1, var_8));
    #pragma endscop
}
