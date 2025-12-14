/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? (((65384 >> (31028 - 31011)))) : (min(152, 1493501208453809835))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_12 [1] [i_1] [i_2] [i_3] [i_3] = 34508;
                            var_16 = ((((((var_14 >= (arr_3 [i_0] [i_0 - 1] [i_3 - 4]))))) / (arr_10 [i_3 - 3] [i_3] [i_3] [i_1] [i_3 - 2] [i_3 - 3])));
                            var_17 = 65389;
                        }
                        arr_13 [i_2] [i_0] [i_2] [i_3] [i_3] &= ((((max(-105, -96))) ? 13421 : (((!((((arr_6 [i_3]) % var_8))))))));
                        var_18 = 65389;
                        arr_14 [i_1] [i_2] [i_0] [i_2] = ((((max(8757981934830896558, (arr_7 [i_1] [11] [i_1] [i_1])))) ? (!42154) : ((var_4 ? (arr_6 [i_1]) : var_9))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_19 = ((17622 ? -1493501208453809836 : ((((arr_2 [i_0]) ? (arr_8 [i_5]) : var_8)))));
                        arr_17 [i_1] [i_1] [i_1] = ((1493501208453809849 ? 65384 : (arr_6 [i_1])));
                        arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_9 [i_0] [i_0 - 3] [i_0 + 2] [i_0] [i_0 - 3]);
                    }
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        arr_22 [i_1] [i_2] [i_1] = arr_5 [i_0] [i_1] [i_2] [i_2];
                        var_20 += (max((min(var_4, 15454538662945494647), var_1)));
                        var_21 = (max(var_21, (((arr_5 [i_0] [i_0] [i_0] [i_6]) / 29146))));
                    }
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        var_22 = var_1;
                        var_23 = ((((((arr_1 [i_7 - 3]) | (arr_1 [i_7 - 2])))) ? (max(43957, 275311880)) : (((((-6854619513277960756 ? -54 : 8724920653091122646))) ? (((arr_2 [i_2]) ? 1690777121 : (arr_2 [i_1]))) : -1571614448))));
                    }
                    arr_25 [i_1] [10] [i_2] = var_10;
                    var_24 |= (+(max((arr_7 [6] [2] [i_0 - 2] [i_0 + 1]), (arr_7 [2] [i_1] [i_2] [2]))));
                    var_25 += (min((~1525), 97));
                }
            }
        }
    }
    var_26 = 64383;
    var_27 *= ((min(var_5, (((var_8 ? var_10 : var_13))))));
    #pragma endscop
}
