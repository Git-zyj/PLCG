/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min(var_12, var_5)), var_5));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((~(arr_0 [2])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (((((min(478987868, -18)))) * 8192));
                                arr_13 [i_3] [i_0] [i_1] = (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (max((arr_0 [i_0]), var_1))));
                                var_22 = var_17;
                                var_23 = (((8192 ? var_13 : 3199594236686682314)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_24 = (min(var_24, ((((((-81 ? (((arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5]) ? -2067157131 : 5974369222340369781)) : (((0 ? 8177 : 10839)))))) ? ((((max((arr_9 [i_0]), var_18))) ? ((1 ? 22001 : var_4)) : var_17)) : (((((max((arr_5 [3]), 14))) ? (arr_6 [i_0 + 1] [i_1 + 1] [i_5] [i_5]) : (((arr_0 [6]) ? var_18 : var_11))))))))));
                        var_25 ^= (((((((max((arr_15 [i_1] [i_1] [i_2] [i_1]), (arr_5 [i_5])))) ? (((~(-127 - 1)))) : (arr_8 [i_0] [3] [3] [i_5])))) ? (arr_12 [13] [13] [i_1] [i_1] [i_2] [i_5]) : (max((((var_9 ? var_9 : var_16))), (max((arr_11 [i_0] [i_0] [i_2] [i_5]), (arr_8 [i_0 + 1] [i_0 + 1] [i_2] [i_5])))))));
                        var_26 = 1;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_19 [1] [i_0] = var_7;
                        var_27 ^= (max((((!((max(-4578821413004866802, -4578821413004866790)))))), 9109206007314252386));
                    }
                    var_28 = (max(var_28, ((((min(var_6, ((((arr_2 [10] [i_1] [i_2]) ? var_16 : (arr_4 [14] [14] [14])))))) * ((10839 ? 18 : 0)))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = (arr_10 [i_7] [i_7 + 1] [i_7]);
        arr_25 [i_7] = (min((((arr_15 [i_7] [i_7 + 1] [i_7] [i_7]) ? 478987872 : (max(11139235992295037248, (arr_11 [i_7 + 1] [i_7 + 1] [i_7] [i_7]))))), ((min(((max(65535, 65513))), 0)))));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_29 &= ((((max(9034956575067960247, ((min(31, 16383)))))) ? var_1 : 16388));
            var_30 ^= ((max((((arr_8 [i_8] [i_8] [i_7] [i_7]) ? (arr_3 [i_8] [i_8] [1]) : var_12)), (((arr_9 [i_7]) ? var_2 : var_11)))));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_31 = ((-11 ? (!3875456784580870254) : (((arr_28 [i_9]) ? 1 : var_15))));
            var_32 *= (arr_31 [i_9]);
            var_33 = ((5546620958850176207 < (arr_33 [i_10] [i_9])));
            arr_34 [13] [i_9] = 44;
        }
        var_34 = (min(var_34, ((((((var_6 ? (arr_31 [i_9]) : (arr_29 [i_9])))) ? ((2172 ? var_15 : var_10)) : (arr_28 [i_9]))))));
        arr_35 [i_9] = -var_8;
        var_35 = (!2);
    }
    var_36 = (~var_3);
    #pragma endscop
}
