/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (max(11978375470588768070, ((max(1, 3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (min((max(var_2, ((min((arr_2 [i_0]), 33))))), (((~(max(var_6, 1)))))));
                    arr_9 [i_0] [i_2] [i_2] [i_2] &= (min((max((max((arr_6 [i_1] [i_2]), var_0)), ((-(arr_7 [i_1]))))), ((min((((-(arr_6 [i_2] [i_1])))), 1264539730)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] = ((-(~var_0)));
                        var_18 &= (!6468368603120783545);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] [i_2] &= (~-var_9);
                        arr_16 [i_0] [i_1] = ((!(arr_10 [i_0] [i_1] [i_2] [i_2] [i_4])));
                    }
                    arr_17 [i_0] = ((-(max((!13892164414134302043), (arr_7 [i_0])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_19 = (~(!-16953));
        var_20 = (!128);
    }
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_32 [i_6 + 1] [i_7] [i_6] [i_9] = (max((max((~6468368603120783550), ((min((arr_25 [i_6] [i_8]), (arr_29 [i_9 - 1])))))), ((max(6468368603120783546, (arr_27 [i_6] [i_7] [i_8 - 1] [i_9]))))));
                        arr_33 [i_6] [i_7] [i_8 - 3] [i_6] = (min((max(((max(var_11, (arr_23 [i_7])))), (min(-8061460303324058628, var_0)))), (max((max(var_14, 14278965274881692861)), ((max(2669923182, 8061460303324058635)))))));
                        var_21 = max(((min(var_12, (~64)))), (max(((max((arr_25 [i_6] [i_7]), 8643889913994637755))), (max((arr_26 [i_8] [i_7] [i_6 + 2]), -6545208126483757562)))));
                        arr_34 [i_6] [i_7] [i_6] [i_8 - 2] [i_9] = min((max(((~(arr_24 [i_9 - 1]))), ((min(var_9, var_7))))), (arr_21 [i_6]));
                    }
                }
            }
        }
        arr_35 [i_6] = (max((min((max(6468368603120783545, 0)), ((max((arr_24 [i_6 + 1]), (arr_22 [i_6])))))), (max((max((arr_29 [i_6 + 2]), 11978375470588768070)), (((-(arr_30 [i_6]))))))));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_39 [i_10] = (max((min(-var_3, ((max((arr_25 [i_10] [i_10]), -2949))))), -32767));
        var_22 = max((((-(~var_8)))), ((+(max((arr_20 [i_10]), (arr_20 [i_10]))))));
        var_23 = (max(var_23, ((((max(var_16, (arr_28 [i_10] [i_10] [i_10]))))))));
        arr_40 [10] &= (min(-112, 1));
    }
    #pragma endscop
}
