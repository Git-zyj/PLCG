/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_15 ^= (((((arr_0 [i_1 - 1] [i_1 - 1]) & 2939739288872141975)) & 145));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_16 = ((+(max((arr_4 [i_2 - 1] [i_2]), var_14))));
                    var_17 = (min(var_17, 1));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_18 = (((arr_5 [i_1 - 3] [i_1 + 1]) ? (((arr_1 [i_0 - 2]) ? var_13 : (arr_5 [i_1 - 1] [i_1 + 1]))) : ((max((arr_2 [i_1 - 3] [i_1 - 3] [i_1 - 3]), 255)))));

                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_19 = (min(var_19, ((((arr_7 [i_0] [i_0 - 2] [i_0 - 2]) ? 12009 : (~1))))));
                            var_20 = 2769934084887740087;
                            arr_16 [i_4] [i_4] [i_4] [i_4] = (arr_1 [19]);
                        }
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            arr_21 [1] [i_0] [i_1] [i_3] [i_4] [i_6 + 4] [i_6 + 3] = ((-((max(var_4, var_12)))));
                            var_21 = var_14;
                            var_22 = (min(var_22, -1));
                            var_23 = (((arr_11 [i_6] [i_4]) ? (((max((min(79, var_11)), (max(var_11, 165)))))) : (max((arr_9 [i_0] [i_0 - 1] [i_3]), var_13))));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_24 = (min(var_24, ((-(~0)))));
                            arr_24 [i_0] [17] [i_4] [i_4] [i_4] [i_0] = (min((((12009 << (123 - 116)))), ((~(arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] [i_0 - 3] [i_1 - 1])))));
                        }
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            var_25 = ((((max((arr_12 [i_4] [i_1 - 1] [i_1] [i_1] [16] [16]), var_12))) || (((1 ? -12014 : 26445)))));
                            var_26 = ((arr_1 [i_0 - 2]) ? ((((var_14 < ((max(-12009, 1))))))) : var_8);
                        }

                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            var_27 = (min(var_27, (((~(max(var_4, ((73657146491907377 ? 0 : 1777169582)))))))));
                            arr_31 [6] &= (min(var_9, ((((arr_27 [i_4] [i_4] [12] [i_4 - 3] [i_4]) < 1)))));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_28 = (min(((max(((~(arr_15 [i_4]))), 1))), (((arr_23 [i_10] [i_10] [i_4] [i_4] [i_4 + 3] [i_0 + 2]) ? var_8 : (((var_4 ? var_11 : 1)))))));
                            var_29 = (arr_15 [i_3]);
                        }
                        arr_35 [i_4] [i_1 - 1] [i_3] [i_4] = ((((var_1 ? (arr_30 [i_4] [i_1 + 1] [i_3] [i_4] [i_0 + 2] [i_1 - 2] [i_0 + 2]) : var_1)) << (var_8 - 4516617712899742130)));
                    }
                    var_30 = ((1 && (58742 > var_5)));
                    var_31 += (var_6 ? (((((~var_5) && ((max((arr_1 [i_3]), (arr_2 [i_0 - 3] [i_0 + 1] [i_0 + 1])))))))) : (((arr_29 [i_1 - 3] [4] [i_0 - 1] [12] [4] [i_0 + 2]) ? var_0 : var_13)));
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        var_32 -= ((((min(var_2, var_14))) ? ((((((min(1, 1))) < -var_10)))) : (min(12328885692305910512, (arr_17 [6] [i_1 - 3] [i_11] [i_11] [i_11])))));
                        var_33 = 208;
                    }
                    var_34 = (((((12009 ? 145 : 1))) ? (arr_0 [i_0] [i_0]) : 1));
                    var_35 ^= 7384433583210891251;
                }
                var_36 = (max(var_36, ((((((536 ? (((arr_1 [1]) ? var_11 : var_6)) : (max(1, var_1))))) ? ((~(arr_4 [i_0 + 1] [i_1 + 1]))) : 45484)))));
            }
        }
    }
    var_37 = ((var_5 > ((min(10373, 5234834330059521332)))));
    var_38 = ((!(((((min(11009, var_3))) ? (var_12 && var_4) : 1)))));
    #pragma endscop
}
