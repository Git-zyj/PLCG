/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1119874444;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (min(((max((arr_3 [i_0] [i_1]), -1))), 736262320))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = (((((4294967281 ? 1148577761 : 1148577761))) / 1980065343));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 + 1] [i_3] [i_1] [i_1] [i_0 + 1] = 4193280;
                                var_16 = 4294967278;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_17 = (((min(1196349533, -228459121))) ? (((((0 << (((arr_13 [i_0] [i_1] [i_2] [i_5] [i_6]) + 732638407)))) | (-1192759733 | 524287)))) : ((-(min(0, -1693082974)))));
                                arr_22 [i_0] [i_1] [i_0] [i_5] [i_2] &= ((((((arr_12 [i_1]) | 4294967276))) ? 4294967265 : (max((((arr_10 [16] [i_1] [i_6] [i_5 - 1] [i_1] [16]) ^ 4294967295)), (27 || var_12)))));
                                var_18 = (min(var_18, ((((1636938062 ? 4294967284 : (arr_5 [i_2] [i_1] [i_2] [i_5])))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {
                    var_19 = 4294967257;
                    var_20 = var_13;
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_0] [i_1] [i_1] |= 4294967265;
                    arr_30 [i_8] = 2047787217;
                    arr_31 [i_0] [i_1] [i_8] = (((((3199787732 ? (-2147483647 - 1) : 4294967278)) * (max((arr_8 [i_8] [i_1] [i_0]), -967893473)))));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {

                        for (int i_11 = 2; i_11 < 21;i_11 += 1)
                        {
                            arr_42 [i_0] [i_9] [i_0 - 1] [i_0] [i_9] = (arr_3 [i_11 - 1] [i_0 + 1]);
                            arr_43 [i_9] = 3199787732;
                            var_21 ^= 351041389;
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_22 ^= -39514729;
                            arr_46 [i_0] [i_0] [i_1] [i_9] [i_10 - 3] [i_12] |= 736894824;
                        }
                        arr_47 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_9] = (((((var_7 ? -211814808 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))) ? ((1924591911 ? 4294967262 : var_12)) : -1));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 20;i_14 += 1)
                        {
                            {
                                arr_53 [i_0] [i_9] = -285029885;
                                var_23 = min(((3199787732 ? ((991231617 ? 2097144975 : 2147483647)) : (arr_50 [i_0] [i_0 - 2] [i_0 + 1]))), (((((0 ? 4193280 : var_4)) >= 1217225865))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min((1072490705 ^ 4294967276), ((((4294967295 >= var_10) ? var_11 : ((var_11 ? var_5 : 0)))))));
    var_25 = (min(var_25, ((((var_0 | 4294967295) ? (((var_3 ? 351041389 : 234881024))) : ((((((1217225865 ? 4294967276 : var_7)) != var_12)))))))));
    #pragma endscop
}
