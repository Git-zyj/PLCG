/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_12));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 = ((((max((((var_10 ? var_5 : var_3))), var_10))) ? ((max((arr_3 [i_1] [i_0]), var_5))) : (((((1 << (var_10 - 8953463800308383678)))) ? (var_9 != var_2) : ((var_5 ? (arr_2 [i_1]) : (arr_6 [15] [i_1] [i_1])))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_16 = ((((((((arr_4 [i_2]) + 2147483647)) << ((((((var_0 ? -12706 : var_6)) + 12730)) - 23))))) && ((min((var_2 + var_7), (((var_3 ? -12692 : (arr_4 [i_1])))))))));
                var_17 = (((((var_8 << (8189 - 8160)))) || ((((arr_5 [18] [15]) ? ((var_2 ? 2852650448816754277 : (arr_6 [i_0] [i_0] [i_0]))) : ((33554431 ? var_10 : (arr_2 [i_1]))))))));
                var_18 |= (((var_8 ^ 15594093624892797339) ? (min((arr_1 [i_2] [i_1]), -8214)) : (((var_1 & (arr_1 [i_0] [i_2]))))));
                arr_9 [i_2] [i_1] [i_0] = (!16269220380958188165);
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_16 [i_3] = 2852650448816754284;
                        var_19 = (min(var_19, (170 == 24703)));
                    }
                }
            }
            arr_17 [i_0] [i_3] |= (!16521607705422707599);
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    {
                        var_20 += (arr_25 [i_0] [i_0] [0] [i_8]);
                        var_21 = ((((~var_12) ? (min(var_11, 19)) : (((arr_0 [i_0] [i_0]) ? var_4 : var_11)))));
                    }
                }
            }
            arr_27 [i_0] = var_8;
        }
        var_22 = (((((var_9 | var_2) || -8263485595544221257)) ? (((((min(var_5, var_3))) || (((var_12 ? (arr_23 [10] [i_0] [i_0] [i_0]) : 41956)))))) : (min(var_13, (((arr_7 [i_0] [i_0] [i_0] [17]) ? var_5 : var_9))))));
    }
    var_23 |= ((-(((((var_12 ? var_1 : 2147483647))) ? ((max(var_11, var_2))) : var_7))));
    var_24 = var_7;
    #pragma endscop
}
