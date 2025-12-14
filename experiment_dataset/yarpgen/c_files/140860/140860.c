/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_0 ? 50743 : var_8)) << (var_7 - 770414203))) / var_1));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((min((arr_1 [i_0] [i_0]), var_8))), 0))) ? (((((((((arr_0 [i_0]) <= var_2)))) != (arr_0 [i_0]))))) : (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = var_9;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, ((max(-16535, (((arr_10 [i_1] [i_1]) & (arr_10 [i_1] [i_2]))))))));
                        var_13 += ((-(arr_11 [i_0] [i_1] [12])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_14 = 14779;
                            arr_15 [i_0] [14] [i_3] [i_1] |= (((((4965634235964113939 ? var_3 : (arr_6 [i_0] [i_1] [i_1])))) ? ((max(4294967295, (arr_7 [i_0] [i_3] [i_4])))) : (max((~50743), (((arr_0 [i_4]) ? var_6 : (arr_8 [i_1] [i_1])))))));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] [i_0] = (~16646144);
                            var_15 = ((~((~(arr_0 [i_1])))));
                        }
                        var_16 = var_3;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_21 [8] = ((((((((arr_20 [i_5]) ? var_1 : (arr_19 [i_5])))) ? (arr_19 [i_5]) : (arr_19 [i_5])))) ? (((arr_18 [i_5]) ? (((arr_18 [i_5]) ? var_6 : var_0)) : (arr_18 [i_5]))) : (((-(arr_19 [i_5])))));
        arr_22 [i_5] = (((((max(4278321122, var_6)) ? var_4 : ((min(14786, (arr_18 [i_5]))))))));
        var_17 += (min(var_7, (((-((max((arr_19 [i_5]), var_4))))))));
        arr_23 [i_5] = (max((((arr_18 [i_5]) ? (arr_18 [i_5]) : (arr_18 [i_5]))), (arr_18 [i_5])));
        var_18 = ((((min((arr_18 [i_5]), var_6))) ? (((((((arr_18 [i_5]) % (arr_18 [i_5]))) >= var_3)))) : var_10));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_19 = (max(var_7, (~var_9)));
        var_20 += (min((max(1, (arr_27 [i_6] [i_6]))), -136941546));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                {
                    arr_32 [i_8] [i_7] = var_4;
                    arr_33 [i_6] [i_8] [i_8] [10] = ((((((((arr_24 [i_7]) ? (arr_25 [i_6] [i_8]) : var_1))) ? ((max((arr_28 [i_6] [i_6]), (arr_20 [i_7])))) : ((max((arr_20 [i_8 - 3]), (arr_19 [i_8])))))) + ((-((max(var_0, var_8)))))));
                    var_21 = (((min(-1, 4255882867088207169)) >> (((arr_27 [i_6] [i_6]) - 136))));
                }
            }
        }
    }
    var_22 = (min(var_5, var_10));
    #pragma endscop
}
