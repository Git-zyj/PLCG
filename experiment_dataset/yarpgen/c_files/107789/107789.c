/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_9;
    var_15 = (min((425 && 425), -1168823575));
    var_16 = (((((max(var_8, var_6)) / (var_12 || var_11))) * (!150)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_17 = ((-1229760750 & (1450921167 <= 23584)));
                        var_18 += 1;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_19 = (((arr_2 [i_3]) ? (arr_5 [i_2]) : (((((arr_0 [i_1] [i_0]) == var_11))))));
                            var_20 = -1168823575;
                            var_21 -= (arr_6 [i_0] [i_1] [i_2] [i_3]);
                            var_22 = (min(var_22, ((((!(arr_4 [i_4] [i_4] [i_2])))))));
                            var_23 = ((-25250 ? 120 : -426));
                        }
                        var_24 = (arr_8 [14] [i_3] [14]);
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_25 &= var_3;
                        var_26 = ((!((((852705551 ? 1 : -727999454688833043))))));
                        var_27 = ((var_12 && (((min(1, -32741))))));
                        var_28 -= (!1992110629);
                        var_29 = (min(181, ((((min(704, -32741))) * 41600))));
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 4; i_7 < 18;i_7 += 1)
                        {
                            var_30 = (((-25250 / (arr_22 [i_0]))));
                            var_31 = (min(var_31, (arr_7 [i_0] [i_0] [i_0] [i_0])));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_32 = (min(var_32, 1837032953));
                            var_33 = (min(var_33, (32758 & -1897336183)));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_34 = 22319;
                            var_35 = (max(-23560, ((((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]) || (arr_11 [i_6] [i_6 + 2] [i_2] [i_6] [i_6]))))));
                        }
                        var_36 = 127;
                    }
                    var_37 = (~-65118);
                }
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    var_38 = var_13;
                    var_39 = (((((!(5687638313075522218 / var_13)))) < 16));
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_40 = (((min((arr_2 [i_0]), (arr_2 [i_1]))) >= (arr_2 [i_1])));
                    var_41 = (!-var_9);
                    var_42 = (max(126, 5687638313075522218));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_43 = (min(var_43, ((min((((((126 >= (arr_21 [i_11] [i_1])))) >> (180 - 154))), (var_1 % -27215))))));
                                var_44 = (min((((var_0 || (41943 <= var_7)))), ((min(var_4, (arr_4 [i_0] [i_1] [i_1]))))));
                            }
                        }
                    }
                }
                var_45 &= (~25890);
                var_46 = (((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) % 125));
                var_47 = arr_36 [i_1] [i_0] [i_0];
            }
        }
    }
    #pragma endscop
}
