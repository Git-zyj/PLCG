/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (max(((min(0, var_12))), -270121026));
                var_21 = ((((((12006 ? 0 : 579562334)))) ? ((((((arr_4 [i_0] [i_1]) ? var_13 : 4340050717276274466))) ? -var_17 : 1878991397)) : ((((arr_4 [i_1 + 2] [i_1 + 1]) ? var_14 : (arr_4 [i_1 - 1] [i_1 + 3]))))));
                arr_5 [i_0] [i_1 + 2] = (max((((arr_4 [i_1 + 3] [13]) ^ 2464379502)), (((~(arr_4 [i_1 - 1] [i_1]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_22 = (arr_7 [8]);

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_12 [1] [i_3] = 8038;
            var_23 -= ((~(arr_9 [i_3])));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_22 [i_2] [i_5] [i_2] [i_5] [i_6] [i_2] = (~19);
                            var_24 = (var_2 ? 1 : (arr_9 [i_2 - 1]));
                        }
                    }
                }
            }
            var_25 += var_17;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            var_26 += ((-22876 ? (~63) : (!var_9)));
                            var_27 -= var_3;
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            var_28 *= ((-(arr_13 [i_2 - 1] [i_2 - 1])));
                            var_29 = (min(var_29, (((-(arr_11 [i_8 + 2] [i_2 - 1]))))));
                        }
                        arr_33 [i_2] [i_8] [i_8] [5] = (((arr_18 [14] [i_4] [i_8 + 2]) ? ((~(arr_23 [i_2] [i_8]))) : (270121026 == 22929)));
                        arr_34 [i_2] [i_8] [15] [i_2] [i_2] [i_2] = (var_18 + ((18446744073709551602 >> (2415975893 - 2415975844))));
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 18;i_12 += 1)
        {
            var_30 = ((-((1 >> (((arr_23 [i_2] [8]) + 951264400970224250))))));
            var_31 ^= (2415975893 * var_18);
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            var_32 ^= 10970;
            arr_41 [i_2 - 2] = (((arr_19 [i_13]) ^ (arr_28 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [i_13] [i_13])));
            var_33 = ((-((var_1 ? -270121026 : 270121026))));
            var_34 = -1327922167;
            var_35 = (min(var_35, (((((((arr_20 [i_2 + 1] [i_13] [4] [6] [i_13] [4] [10]) ? var_7 : 281474976710656))) && (arr_32 [i_2 - 2] [i_2] [i_2] [i_13] [i_13] [i_13]))))));
        }
        var_36 = (~579562322);
        var_37 = (((270121009 ? var_4 : 8646911284551352320)) & var_8);
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        var_38 -= ((arr_28 [i_14] [1] [17] [i_14] [i_14] [i_14] [i_14]) * (var_13 || 2147483630));
        var_39 *= ((19 ^ (((~(arr_7 [i_14]))))));
        arr_45 [i_14] = ((arr_28 [1] [i_14] [i_14] [5] [i_14] [i_14] [5]) ? var_3 : 30);
    }
    #pragma endscop
}
