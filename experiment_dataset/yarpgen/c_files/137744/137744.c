/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_0;
    var_16 = (!(((var_2 ? 1162754844 : (var_14 >> 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 *= -2067250013;
        arr_2 [i_0] = (!var_8);
        var_18 = (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_19 = 1326757974;

        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_8 [2] [i_1] = -181;
            var_20 *= max(((((24130 + 190) ? (arr_5 [1]) : (~-884796296)))), (max((arr_1 [i_1] [i_2]), (max(2027940697, 11457)))));
            arr_9 [i_1] = ((2560027218 ? (((((arr_6 [i_1] [10]) ? (arr_0 [i_1]) : (arr_4 [i_1]))))) : (arr_4 [i_1])));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, ((57422 << (34968 - 34968)))));
                    arr_16 [11] [i_3] [i_1] [i_5] = ((~((max((arr_15 [i_1] [i_1] [i_4] [i_5]), var_12)))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_1] [12] [2] [i_1] = (arr_17 [i_1] [1] [i_3] [1] [1] [i_1]);
                    var_22 = (((((arr_10 [i_1] [i_3] [i_4]) != (arr_4 [i_3]))) ? (((arr_13 [i_4] [i_6]) ^ (arr_6 [i_6] [i_3]))) : var_3));
                    var_23 += (min((max(12169, ((2675879944 ? 62669 : -11440)))), 52172));
                }
                var_24 = ((-23448 >= ((14312685001193971589 ? 1476069487 : 3292429161))));
                arr_21 [i_1] [6] [i_1] = -10961;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_25 [i_1] [8] [1] [8] = (min((~3669773674), (((min(20285, -6584819719562154025)) & ((22821 ? 7565090882817200338 : (arr_12 [i_1] [14])))))));
                var_25 = (max(var_25, (arr_1 [i_3] [i_1])));
                var_26 -= (3669773674 - 17);
            }
            var_27 *= (arr_7 [i_3] [i_3] [i_1]);
        }
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            arr_28 [12] [i_1] = (3738776038 ? (((-6584819719562154022 || (arr_12 [i_8 - 1] [i_8 - 1])))) : ((1 ? (arr_24 [i_1]) : (arr_12 [i_8 - 1] [i_8]))));
            var_28 += (arr_23 [i_1] [i_1] [12]);
            arr_29 [i_1] [i_1] [9] = -13365;
            arr_30 [2] [2] &= arr_1 [i_8] [i_8];
        }
        var_29 = 6584819719562154022;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        arr_33 [i_9] = (((arr_14 [i_9] [i_9] [i_9] [i_9] [i_9] [0]) ? -118 : (((arr_23 [i_9] [i_9] [4]) ^ (arr_18 [i_9] [i_9] [i_9])))));
        var_30 = var_4;
        arr_34 [i_9] = var_2;
    }
    #pragma endscop
}
