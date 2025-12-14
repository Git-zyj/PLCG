/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((15727411736504083693 << (4294967265 - 4294967249))) <= ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_10 = ((((((((arr_7 [i_2] [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_3] [i_0] [i_2]) : (arr_9 [i_0] [i_3] [i_2] [i_1] [i_1])))))) - ((var_1 ? (arr_3 [i_0]) : (min(var_7, (arr_5 [i_0] [i_1] [i_2])))))));
                        var_11 = (min(var_11, ((((((arr_3 [i_1]) <= -726831160)) ? (((arr_0 [i_0]) * (1443401225 <= 183))) : (arr_1 [i_2] [i_3]))))));
                        var_12 ^= (((520192 + 2147483647) << (((((arr_1 [i_3] [i_1]) ? 252 : (((arr_0 [i_1]) << (1185565750 - 1185565749))))) - 6531082340310139742))));
                    }
                }
            }
        }
        arr_10 [i_0] = (((var_6 ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_13 = (arr_4 [i_0] [1]);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_14 = ((max(var_4, var_5)));
        var_15 = ((((2567940779 - (((max(252, var_3))))))) ? (((((var_4 ? var_5 : (arr_1 [i_4] [i_4])))) / ((var_9 ? (arr_7 [i_4] [i_4]) : (arr_0 [18]))))) : ((((max(252, 2567940779)) << (var_4 - 168)))));
        var_16 = (min(var_16, 4));
        var_17 = (((((var_1 ? (((var_8 ? 251 : 90))) : (-88281512082239945 / var_9)))) ? (((var_5 * 0) * 1)) : ((min((arr_6 [i_4] [20] [18] [3]), (arr_6 [i_4] [i_4] [i_4] [i_4]))))));

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_16 [i_5] [i_4] = ((!(~var_7)));
            var_18 = ((((((var_8 ? (arr_6 [9] [i_5] [23] [i_4]) : (arr_11 [i_5]))) * (((max(19, 1)))))) <= ((((!var_4) * (arr_6 [i_4] [i_5] [i_5] [i_5]))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_19 = (max((((((var_0 ? var_7 : (arr_5 [i_6] [i_5] [i_4])))) ? ((max(var_6, 2077643671))) : (arr_9 [i_4] [i_4] [22] [10] [i_4]))), ((min((arr_7 [i_5] [i_6]), 63)))));
                        var_20 = var_5;

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_21 -= (!2079756861);
                            var_22 = (min(var_22, (((((max((max(var_0, (arr_11 [i_7]))), (arr_17 [i_8 - 1] [i_5])))) ? 16777215 : (((arr_9 [i_8 - 1] [i_7] [1] [1] [23]) ? (max(269037603, var_3)) : ((var_7 ? (arr_3 [i_4]) : (arr_3 [i_4]))))))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, ((((var_9 / var_5) || (((19059 << (!4398046511103)))))))));
    var_24 = (((var_8 ? var_0 : var_2)));
    #pragma endscop
}
