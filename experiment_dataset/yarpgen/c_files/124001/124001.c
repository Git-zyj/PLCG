/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (max((var_5 / var_11), (((((var_3 << (var_1 - 5003)))) ? (var_2 < 255) : ((2949 >> (var_1 - 4985)))))));
    var_14 = (((!((min(var_9, 1553430120817918290))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((var_7 || (16893313952891633325 || var_9)));
        arr_4 [i_0] [i_0] = ((778883633 && ((!(arr_3 [i_0])))));
        var_16 = var_8;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 ^= (min(((var_4 || (~-778883634))), (max((!var_7), ((!(arr_7 [i_1] [i_1])))))));
        arr_8 [i_1] [4] = (!((((arr_2 [i_1] [i_1]) & (max(var_2, var_6))))));
        arr_9 [i_1] [13] = (~1553430120817918291);
        var_18 = (min(var_18, (((((((var_5 ? 16893313952891633325 : var_1) <= (var_2 % var_7)))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_19 = ((~(var_3 % var_5)));
            var_20 = ((-(~var_3)));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_21 &= ((arr_19 [6] [i_2] [i_3] [i_3 + 1]) ? var_6 : var_7);
                        var_22 = ((-(2951202823 & -146518801533746466)));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_23 = (var_4 <= -778883633);
                        var_24 = (((var_11 ^ var_0) ? (arr_5 [i_2] [11]) : var_8));
                    }
                }
            }
            var_25 = (var_12 ? (var_4 ^ -1691594664) : -var_8);
            var_26 = (((var_2 ? var_8 : var_1)));
            var_27 = ((var_3 ? (arr_3 [i_6]) : var_6));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_28 *= ((((16893313952891633340 ? 399823131 : 9223372036854775807)) & (arr_20 [i_9] [i_9] [i_2] [i_2])));
            arr_34 [0] [0] [0] = ((((405771222 ? -146518801533746466 : (arr_15 [i_2] [i_2] [i_9])))) ? 3346061400 : 67107840);
        }
        var_29 = (max(var_29, var_9));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        arr_39 [i_10] = (((arr_35 [i_10] [i_10]) ? (((var_10 ^ var_8) ? (max(var_3, -90)) : 65530)) : (65535 / 4)));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_30 = (((((63002 | 3131331209) < 1343764474))) - ((((var_6 ? var_4 : var_11)))));
                                var_31 = (max(var_31, (((~(((max(var_3, var_10)) / var_3)))))));
                            }
                        }
                    }
                    var_32 &= ((!((max((arr_44 [i_10] [i_10] [i_10] [i_10]), (arr_44 [i_10] [i_11] [i_12] [i_12]))))));
                    arr_51 [i_10] [i_10] [i_11] [i_12] = ((((max((max(var_6, var_3)), (((778883606 != (arr_40 [i_10] [i_10]))))))) ? (max((((arr_50 [i_10] [i_12] [i_12] [i_12] [i_12]) ? var_11 : var_0)), var_12)) : (((arr_35 [i_10] [i_11]) | (arr_35 [i_11] [i_12])))));
                    arr_52 [1] [i_10] [i_10] = (((min((((var_11 ? var_1 : (arr_40 [i_10] [i_10])))), (arr_46 [i_12] [i_12] [i_12] [8]))) > ((((var_10 ? 3346061393 : 15)) % ((var_7 ? var_11 : var_10))))));
                }
            }
        }
        arr_53 [i_10] = (((((var_3 != var_2) <= (arr_37 [i_10] [i_10]))) ? var_9 : (min((min(var_1, var_4)), ((((arr_47 [i_10] [14] [i_10] [i_10] [i_10] [i_10]) ? var_11 : var_12)))))));
    }
    #pragma endscop
}
