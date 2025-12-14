/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 ^= (((var_8 || var_10) - (min((max((arr_1 [i_0]), var_5)), (max((arr_1 [11]), var_1))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_12 = (min(var_12, (((((((arr_8 [i_1 - 1] [i_1 - 1] [i_2]) ? (arr_8 [i_1 - 1] [i_3] [1]) : (arr_8 [i_1 - 1] [i_1 - 1] [i_2])))) ? ((((var_9 && (arr_4 [i_1 - 1]))))) : ((var_10 ? (max(var_9, (arr_12 [i_0] [i_1] [i_1] [2] [i_3] [i_3]))) : -1)))))));

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            var_13 = ((-(((arr_11 [13] [i_0] [i_1 - 1] [i_3]) ? (arr_11 [i_0] [i_1] [i_1 - 1] [1]) : (arr_11 [0] [i_0] [i_1 - 1] [15])))));
                            var_14 += ((min((arr_3 [i_0] [i_0]), var_10)) >= ((min(-1, 0))));
                            var_15 = ((-((43 ? -1330039106459344254 : 1330039106459344254))));
                            var_16 = (min(((max((arr_11 [i_0] [0] [i_2] [i_4 - 1]), (arr_11 [i_0] [i_2] [i_3] [4])))), ((-(arr_11 [i_2] [i_4 + 1] [i_0] [i_0])))));
                        }

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 18;i_5 += 1)
                        {
                            var_17 = (-(-1330039106459344254 & 170));
                            var_18 = (((arr_12 [i_1] [1] [i_1 - 1] [i_3] [i_3] [i_5 - 3]) / var_3));
                            var_19 += ((arr_13 [i_0] [i_1 - 1] [i_1 - 1] [1] [i_5]) - (arr_13 [5] [i_1] [i_1 - 1] [i_0] [i_5 - 1]));
                        }
                        var_20 |= (1330039106459344265 <= 1);
                        var_21 = (max(var_21, ((min(((max(var_8, var_3))), var_3)))));
                    }
                }
            }
            var_22 = ((-(((arr_11 [i_0] [i_0] [i_0] [1]) / (arr_15 [i_0] [i_0] [i_1])))));
            var_23 = 9403969114296685390;
            var_24 = (max((1 % 26888), (min(1, 685297820219451435))));
            var_25 = ((max(var_9, (arr_2 [i_0]))));
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                var_26 = ((((max((((arr_1 [i_6]) + var_9)), (arr_5 [i_6] [i_7])))) ? ((+((max((arr_3 [i_6] [i_7]), (arr_11 [i_6] [i_6] [i_7] [11])))))) : ((max((min((arr_6 [1] [i_6]), var_5)), var_1)))));
                var_27 = ((-(((1 && -5300822571662558092) ? (((min(var_5, (arr_11 [i_6] [0] [i_7] [i_6]))))) : (arr_18 [i_6])))));
                var_28 = (min((max(1, (var_5 || var_1))), (((!(arr_1 [i_6]))))));
            }
        }
    }
    var_29 ^= ((!(var_7 ^ var_7)));
    #pragma endscop
}
