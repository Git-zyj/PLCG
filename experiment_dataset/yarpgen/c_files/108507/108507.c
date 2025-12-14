/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_7 [12] [i_1] [i_2] = (~65535);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (~var_10);
                                var_12 -= ((((min(var_0, ((7 ? (arr_3 [i_2]) : (arr_8 [i_0] [i_1] [i_2] [i_3])))))) && var_7));
                                var_13 &= ((-(((((var_0 & (arr_1 [i_2])))) ? (((arr_0 [i_2]) ? (arr_6 [18] [i_1] [i_4]) : 7)) : (((((arr_12 [i_2] [i_3]) || (arr_8 [8] [i_2] [i_1] [i_0])))))))));
                                var_14 = arr_1 [5];
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_15 -= (min(((((arr_6 [i_1] [i_5] [i_6]) && (arr_6 [i_0] [i_0] [i_5])))), (min(((min((arr_9 [i_0] [1] [i_0] [i_6]), (arr_8 [i_1] [i_1] [i_1] [i_1])))), 65535))));
                        var_16 = (min(1251340570, 65535));
                        arr_18 [i_0] [i_1] = (min((min(1, 3043626700)), (((~(arr_16 [i_0] [i_1] [i_5] [i_6] [6] [i_1]))))));
                        var_17 = (~-2969783753643316308);
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        var_18 = (((((min(3991492373, 1354497998)) > (!1))) ? ((((!7) || var_5))) : ((((-4367747667870777461 ? 2159 : 7))))));
                        var_19 |= (((arr_5 [i_0] [i_1] [i_5] [i_7]) + (arr_9 [7] [i_1] [i_5] [4])));
                        var_20 = var_9;
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_21 = 249;
                        var_22 = (max(var_22, (arr_12 [i_1] [i_1])));
                        var_23 ^= 196;
                        var_24 *= (((arr_2 [i_1] [i_5]) * (((arr_14 [i_5] [i_0] [i_5]) ? var_1 : (arr_14 [i_1] [i_5] [i_8])))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_25 = ((((((min((arr_26 [i_10] [i_9] [i_5] [i_1]), (arr_25 [i_0] [i_5] [i_0])))) ? (min(0, (arr_26 [11] [i_1] [i_5] [i_9]))) : (((min(127, (arr_2 [i_10] [i_1]))))))) * 2147483647));
                                arr_29 [i_0] [i_1] [i_1] [i_5] [i_9] [i_10] [i_10] = ((((min(var_8, 2) + var_6))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] = (((((arr_19 [i_12 - 1] [i_12] [i_12] [18] [i_12]) < var_10)) ? (arr_19 [i_12 - 1] [1] [1] [i_12] [i_12]) : (min((arr_19 [i_12 - 1] [i_12] [1] [17] [i_12]), 0))));
                                var_26 = (min(var_26, (((arr_10 [0] [i_0] [i_11 + 1] [i_12 - 1] [i_12] [i_12]) ? (((arr_10 [i_5] [i_0] [i_11 + 1] [i_12 - 1] [i_11 + 1] [i_12]) ? var_6 : (arr_10 [i_11] [i_11] [i_11 + 3] [i_12 - 1] [i_12] [i_12]))) : -1))));
                                arr_36 [i_0] = (arr_34 [i_0] [i_1] [i_5] [i_11] [i_1]);
                                arr_37 [i_0] [i_0] [i_5] [i_5] [i_5] = -1;
                            }
                        }
                    }
                }
                var_27 = (min(var_27, ((((58 ? 18115785172066212127 : 148))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            arr_43 [7] [i_1] = ((29 ^ (arr_32 [i_0] [i_1] [i_1] [i_13] [i_13] [i_14] [i_14])));
                            var_28 += var_10;
                        }
                    }
                }
                var_29 = (((-((var_8 ? 9223372036854775807 : (arr_34 [i_0] [19] [19] [i_0] [18]))))));
            }
        }
    }
    var_30 = (min(var_30, (((min(58, (~-1327342055))) >> ((((min(92, var_8))) ? -var_6 : 20))))));
    var_31 = var_3;
    #pragma endscop
}
