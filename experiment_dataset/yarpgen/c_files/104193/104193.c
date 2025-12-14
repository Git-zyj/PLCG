/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (16450 & var_18);
    var_20 |= (min(140, var_10));
    var_21 = (max(var_21, var_9));
    var_22 = (min(((var_6 ? (((1 ? 65535 : var_16))) : (min(var_4, var_0)))), var_1));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_23 = var_14;
                            arr_14 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4] = (((((arr_0 [i_4]) != (arr_0 [i_3]))) ? ((min(49070, var_5))) : (~56)));
                            arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] = 255;
                            arr_16 [i_4] = arr_8 [1] [i_1] [i_1] [i_1] [i_1];
                            arr_17 [i_0] = (((56375 ? (arr_1 [i_3]) : 49085)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (1 != var_13);
                            var_24 = ((16442 | (!6796711034446409070)));
                        }
                        arr_21 [1] [i_1] [i_2] [1] [i_1] [i_3] = var_2;
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_25 [i_6] [i_0] [i_1] [i_0] = ((4 != (arr_24 [i_0] [i_0])));
                        arr_26 [i_6] [i_2] [i_2] [4] [i_1] [i_0] = 16477;
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_25 = ((((1 ? 242 : 16465)) & ((250 ? 251 : 16436))));
                        var_26 = var_7;
                        arr_29 [i_0] [15] [i_2] [i_7] [15] = var_10;
                        var_27 = arr_19 [i_2];
                        arr_30 [i_0] [i_0] [14] [i_7] &= (arr_2 [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_28 = (max(var_28, var_9));
                        arr_35 [i_0] [0] [i_8] = (((((((-(arr_28 [16] [i_2] [i_8])))) <= 12565565463506678849)) ? (((arr_0 [i_0]) ? var_12 : var_0)) : 246));
                        var_29 = (((max(((~(arr_33 [i_8] [i_8]))), ((var_0 ? (arr_1 [1]) : (arr_11 [i_2] [i_1] [i_2] [i_0] [i_1] [i_8]))))) >= (arr_0 [i_0])));
                        var_30 = ((68 ? 197 : ((max(16, (!var_2))))));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_31 = (max(var_31, 18446744073709551612));
                            arr_40 [i_0] [i_1] [i_2] [i_9] [i_2] [i_10] = var_15;
                            var_32 = ((127 ? 1649923897242591513 : 1));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_33 = (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_34 = -69;
                        }
                        var_35 -= 49067;
                        arr_43 [2] [2] [19] [i_9] = (((((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? var_2 : (((arr_9 [13] [13] [15] [i_2] [3]) ? var_10 : 13835))));
                    }
                }
            }
        }
        arr_44 [i_0] |= (var_6 < -5823770618846748888);
        var_36 = ((((((arr_3 [i_0] [i_0]) ? (((15289981894087676629 ? 194 : var_12))) : (min(var_4, (arr_2 [i_0])))))) ? 10255207063269527532 : (((((max((arr_5 [i_0]), var_2))) ? (max(var_5, var_12)) : ((var_15 << (16489 - 16487))))))));
        arr_45 [i_0] = ((((16429 ? (49070 ^ var_6) : (arr_3 [15] [i_0])))) ? (((max(1, var_10)))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [4]));
        var_37 = (max(var_37, (max(6522485227048921582, 16471))));
    }
    #pragma endscop
}
