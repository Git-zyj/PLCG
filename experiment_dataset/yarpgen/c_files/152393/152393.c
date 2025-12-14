/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (arr_2 [i_0] [i_1]);
                var_21 = (max(var_21, ((min(((min(8553, 4640))), ((4639 ? -105 : 2097863990)))))));
                var_22 = ((7912251867036392512 ? -2097864013 : 4661));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((((((var_14 ? 226785052 : (arr_7 [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] [i_0])))) ? (((((max((arr_8 [i_1] [i_2] [i_3]), (arr_4 [19] [i_0])))) ? ((max(-2097864016, 4633))) : (arr_2 [i_0 - 2] [i_0 - 2])))) : (arr_3 [i_0 - 2] [20]))))));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 20;i_4 += 1)
                            {
                                var_24 = (((arr_1 [i_2]) ? (arr_6 [i_1] [i_2] [i_3]) : 2097863994));
                                arr_11 [6] [i_1] [i_2] [i_3] [6] = 17752619926024015905;
                                var_25 = (arr_3 [i_0 - 1] [i_4]);
                                arr_12 [i_3] [i_3] [i_2] [4] [i_4] = ((var_1 & var_17) >= (arr_0 [i_0 + 1]));
                                arr_13 [i_2] |= (((arr_8 [0] [i_4] [i_2]) >= (arr_6 [i_0] [i_1] [i_4])));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_26 -= ((max((var_11 == var_5), (arr_6 [i_0 - 1] [i_1] [i_3]))));
                                var_27 = (arr_0 [i_0 - 1]);
                            }
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                var_28 = (max(((((var_16 ? (arr_9 [i_3] [i_3] [i_2] [i_3] [6]) : var_11)) | -1950485800)), ((var_10 ? var_16 : (arr_6 [i_0 + 1] [11] [i_2])))));
                                var_29 = (((arr_14 [i_0] [i_0] [i_2]) ^ (min((min((arr_2 [i_0] [0]), var_1)), ((min(var_14, var_0)))))));
                            }
                            var_30 = ((!((min(4639, 0)))));
                            var_31 *= (((((-(arr_0 [i_0 - 2])))) != (max(12335297351211529696, var_12))));
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        arr_22 [i_7] = ((min(var_5, (arr_20 [1] [i_7 - 1]))));
        var_32 = ((4643 ? 120 : -11));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 4; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        var_33 = (~var_18);
                        var_34 = (max(var_34, (((-(arr_31 [5] [5]))))));
                    }
                }
            }
        }
        var_35 = (max(((((min(var_7, 1050513456250981440))) ? (max(9223372036854775807, var_8)) : 56)), var_8));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_36 = (min(((((0 <= -14555) & (arr_26 [i_8] [i_12])))), ((((var_16 ? (arr_27 [4] [1]) : (arr_23 [i_12] [i_12]))) >> (var_16 + 1976872473)))));
                        arr_41 [i_8] = (min((arr_23 [i_8] [i_13 + 1]), ((min((arr_32 [i_13 - 2]), (arr_32 [i_13 + 2]))))));
                    }
                }
            }
        }
        var_37 = (((((max(0, var_10))) ? (-1874299124 + 0) : 4294967281)));
    }
    #pragma endscop
}
