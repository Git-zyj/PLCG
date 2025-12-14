/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 ^= (((min(((((arr_2 [i_0 + 2]) || 0))), (arr_2 [i_0]))) > ((((((arr_0 [i_0 + 2] [1]) || -1)) ? (arr_2 [i_0 + 1]) : (var_6 / var_8))))));
        var_13 ^= max(-var_4, ((-(arr_0 [i_0 - 1] [i_0 + 1]))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_14 ^= ((((arr_6 [i_0] [i_0] [0] [i_0]) < (arr_0 [i_1] [i_1]))));

                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    var_15 ^= (var_10 + var_6);
                    var_16 ^= (arr_8 [i_0] [i_1] [i_2] [i_1]);
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_17 ^= var_4;
                    var_18 ^= var_7;
                    var_19 = (max(var_19, ((((arr_11 [15] [i_0 + 2]) < (arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                }
            }
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_20 ^= ((((var_6 < (arr_10 [i_5 - 1] [i_5 + 1] [i_0 + 2] [i_0 + 1] [i_0]))) ? ((min(var_6, (arr_17 [i_1] [i_6] [i_1] [i_6])))) : var_3));
                    var_21 ^= (min(var_6, (((arr_7 [i_5 - 2] [i_5 - 3] [i_5]) % (((arr_15 [i_6] [i_5 - 2] [i_1] [i_0]) ? var_8 : var_11))))));
                    var_22 ^= (-8274 >= 4);
                    var_23 ^= var_11;

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_24 ^= (((-var_10 < var_11) ? (((var_8 != (var_6 || var_8)))) : (min((arr_19 [i_5 - 2] [i_5 - 2] [10] [i_6] [i_7] [i_1] [i_6]), (max(var_7, (arr_15 [i_7] [i_5 - 2] [13] [i_0 + 2])))))));
                        var_25 ^= (max(-5, (arr_13 [i_0 + 1])));
                        var_26 ^= (((-(arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_6]))) > ((-(arr_16 [i_7] [i_6] [i_5 - 2] [i_1] [i_0] [i_0]))));
                        var_27 ^= var_7;
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_28 = (max(var_28, 4));
                        var_29 = (min(var_29, ((min((((-(var_11 != var_8)))), (max((max(var_2, 4700415319860255237)), var_2)))))));
                        var_30 = (min(var_30, 133));
                    }
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                {
                    var_31 ^= ((-((((arr_16 [12] [6] [i_5] [i_1] [i_1] [i_0]) > 4294967287)))));
                    var_32 ^= (239 || var_9);
                    var_33 = (min(var_33, ((!((max((arr_25 [i_0 + 2] [i_0 - 1]), var_7)))))));
                }
                for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    var_34 ^= (2 < var_2);
                    var_35 ^= 1;
                    var_36 = (max(var_36, (((((arr_22 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) > (arr_22 [i_0] [5] [i_0 + 1] [i_0] [i_0])))))));
                    var_37 ^= ((((max((arr_13 [i_0 + 1]), 2911746690))) ? (min((min(230, 16265406999385895829)), var_0)) : (arr_7 [i_0] [i_5 + 1] [i_0])));
                    var_38 ^= -var_11;
                }
                var_39 ^= 26;
            }
            for (int i_11 = 3; i_11 < 15;i_11 += 1)
            {
                var_40 ^= -var_11;

                /* vectorizable */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_41 = (min(var_41, (arr_24 [i_0] [i_1] [i_1] [i_1] [i_12] [i_12])));
                    var_42 ^= (arr_23 [6] [6]);
                    var_43 ^= (((~16) > (arr_7 [i_0 + 1] [i_1] [14])));
                }
                var_44 ^= ((((((min(0, (arr_34 [i_1] [i_0] [i_11] [13] [i_0] [i_0 + 2])))) ? (arr_21 [i_0] [i_0] [i_1] [i_1] [8]) : (arr_31 [3] [3] [3] [i_11]))) | (arr_10 [i_11 - 3] [i_11 - 3] [i_1] [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_45 ^= var_1;
                            var_46 ^= (-(((arr_7 [i_0] [i_0] [i_11]) ? (arr_10 [i_14 - 2] [i_14 + 2] [i_13 + 1] [i_0] [i_0]) : var_4)));
                            var_47 ^= (min(var_9, ((min(var_2, 239)))));
                        }
                    }
                }
            }
            var_48 ^= max((min(16, 1998409924)), (((((max(var_5, -31850))) || var_10))));
            var_49 = (max(var_49, (arr_19 [i_1] [1] [i_1] [i_1] [1] [i_0 + 1] [i_0])));
        }
        for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
        {
            var_50 ^= -var_0;
            var_51 ^= (((arr_26 [4] [i_15] [i_15] [4]) != (arr_37 [i_0] [i_0] [1] [i_15] [i_15] [i_0] [i_0])));
            var_52 ^= 230;
        }
        for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
        {
            var_53 ^= ((((((((((arr_25 [i_0] [i_16]) ? (arr_6 [i_0] [i_0] [i_0 + 2] [8]) : 2799567501))) || 1495399794)))) ^ (arr_13 [14])));
            var_54 ^= (min(0, ((((arr_22 [i_0 + 1] [i_0 - 1] [i_0] [i_16] [i_16]) >= 15)))));
        }
        var_55 ^= -8;
        var_56 ^= (min((((-(((-2147483647 - 1) ? 0 : 1))))), (max((((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? var_1 : 57)), ((min(62, 37)))))));
    }
    var_57 ^= -0;
    var_58 ^= (max(var_0, (((var_1 != (max(var_0, 5607463749304810293)))))));
    var_59 ^= (229 + 1);
    var_60 ^= (max(var_8, var_4));
    #pragma endscop
}
