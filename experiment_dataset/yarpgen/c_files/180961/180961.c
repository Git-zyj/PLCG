/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = 8721349882942960273;
                    arr_7 [i_0] [i_2] [i_0] [i_0] = (min((arr_3 [i_0]), 7));
                    var_20 = (arr_5 [i_0] [i_1] [i_2]);
                    var_21 -= ((-1436541268 <= (arr_1 [i_0])));

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_10 [i_3 + 1] [3] [i_1] [i_0] = (((arr_4 [i_3 + 2] [i_3 + 2] [i_3 + 1]) ? (arr_3 [i_2]) : ((((((arr_4 [i_0] [i_0] [i_0]) / (arr_8 [i_3] [i_2] [i_0] [i_0])))) ? (arr_6 [i_3] [i_3] [i_3 + 3]) : (min(1731969149, 2880547480))))));
                        arr_11 [i_0] [i_3 + 3] = 4069608343;
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        var_22 = 262143;
                        var_23 = (min(1, (arr_6 [i_1] [i_1] [i_1])));
                    }
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_2] [i_5 + 3] [i_1] = (min((((225358955 ? (arr_13 [i_5 + 3] [i_5 - 1]) : 42637))), ((69 ? (((arr_12 [i_0] [i_0] [i_2] [i_5 + 2]) & (arr_5 [i_5 + 4] [i_2] [i_1]))) : ((((arr_3 [i_0]) / 1)))))));
                        var_24 ^= (arr_6 [i_0] [i_1] [i_0]);
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_25 = ((((arr_4 [i_0] [i_0] [i_0]) ? 0 : ((0 ? 4294705149 : 0)))));

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_26 -= 225358953;
                            var_27 = (-9223372036854775805 ? (((arr_19 [i_1]) ? 654575474 : ((-738371681 ? (arr_14 [i_0]) : (arr_1 [i_0]))))) : ((((2980777231 ? -6396333776907623386 : -1731969150)))));
                            var_28 = 4294705149;
                            var_29 = -37;
                        }
                    }
                }
            }
        }
    }
    var_30 += 127;
    #pragma endscop
}
