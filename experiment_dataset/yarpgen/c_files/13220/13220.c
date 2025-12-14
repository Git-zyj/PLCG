/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_7 || var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_19 = 8790882590855737170;

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_3] = ((var_0 | ((6441045739250021234 | (((~(arr_7 [i_0] [i_0] [i_3]))))))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_0] = arr_1 [i_1];
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_20 = ((((min((arr_2 [i_0]), var_10))) ? ((var_15 ? (arr_9 [i_0] [i_1] [i_1] [2] [i_2] [i_4 - 1]) : (arr_13 [i_2]))) : (arr_13 [i_4 + 2])));
                        var_21 = (arr_14 [8] [i_1] [i_1] [i_4]);
                    }
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_22 = ((var_13 ? (((43097 ? 24576 : 65535))) : ((-(arr_10 [0] [i_1] [i_5] [i_1])))));
                    var_23 = (max(var_23, ((((arr_14 [i_0] [i_1] [i_1] [11]) - var_10)))));
                    arr_18 [i_0] [i_0] [i_0] = -132219135664661090;

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_0] [i_5] [i_6] = (arr_3 [i_1] [i_1]);

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_24 = (max(var_24, (arr_23 [i_0] [5] [i_0] [i_0] [i_0])));
                            arr_25 [i_7] [7] [i_5] [i_5] [i_1] [7] = (!var_0);
                        }
                        arr_26 [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0]);
                    }
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_25 |= (-8787819327825307158 || -8787819327825307153);
                    var_26 = (arr_17 [i_0] [i_1] [i_8]);
                }
                var_27 = (min(var_27, (((~(arr_1 [6]))))));
            }
        }
    }
    #pragma endscop
}
