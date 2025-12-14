/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] = ((18014398509481983 / (arr_8 [i_0] [i_1] [i_2] [i_3])));
                        var_17 = (max(var_17, (~65535)));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_18 &= 18014398509481978;
                            var_19 = (~(arr_1 [i_0]));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_20 = (min(var_20, 71));
                            var_21 = (min(var_21, ((((arr_0 [i_3]) >> (((arr_12 [i_3] [i_1] [i_2] [i_1] [i_1]) + 224)))))));
                            var_22 = (min(var_22, (((-18014398509481984 + (arr_7 [i_0] [i_1] [i_3]))))));
                            var_23 = (((var_5 >> (var_9 - 9151))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_24 *= ((144115188075855871 ? (!var_10) : (arr_3 [i_2])));
                        var_25 = (arr_19 [i_2]);
                        var_26 &= 18014398509481993;
                        arr_20 [i_0] [i_2] [i_2] [i_6] = ((-7826648814461523126 + (((arr_12 [i_0] [i_0] [i_0] [4] [i_0]) ? var_3 : -18014398509481999))));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_24 [i_2] [i_2] [1] [i_2] = ((!(!var_12)));
                        arr_25 [i_7] [i_7] [i_2] [i_7] [i_2] [i_2] = 28694;
                        var_27 = (255 - var_3);
                        var_28 = (~111);
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_29 = (((arr_21 [i_0] [i_0] [i_1] [9] [i_2] [18]) < (arr_26 [i_2])));
                        var_30 = (min(var_30, (arr_1 [i_0])));
                        var_31 = ((!((((arr_14 [i_1] [i_2] [i_2] [i_1] [i_0] [i_0] [i_2]) ^ var_11)))));
                    }
                    var_32 = ((-894080329899207026 ? (arr_14 [i_2] [i_2] [i_2] [i_2] [i_1] [i_2] [i_1]) : (arr_14 [i_0] [i_2] [1] [i_0] [i_1] [i_1] [i_0])));
                    arr_30 [i_2] [i_2] [i_2] = ((-(arr_6 [i_0] [i_1] [i_2])));
                }
            }
        }
        arr_31 [i_0] [i_0] = 11811;
    }
    var_33 = var_4;
    #pragma endscop
}
