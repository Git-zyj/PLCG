/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((1 ? 2595663135775374375 : 18446744073709551615))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (((((((arr_6 [i_0] [i_0] [i_0 + 4]) || (arr_6 [i_0] [i_0 + 2] [i_0 - 1]))))) + (arr_6 [i_0] [i_0] [i_0 + 2])));
                    var_15 = (min(var_15, 15851080937934177233));
                }
            }
        }
        var_16 = (min(var_16, (((1161869547 - (((arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 3]) + (((arr_3 [i_0] [i_0]) + 192)))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_17 = ((((arr_14 [i_3]) ? (arr_12 [i_3]) : (arr_14 [i_3]))));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_18 [i_3] [i_4] = ((((((((arr_12 [i_3]) - (arr_17 [i_3] [i_4] [i_3])))) || (arr_12 [8]))) ? (max(((91 - (arr_15 [i_3] [i_3] [i_4]))), 18276)) : (arr_13 [i_4])));
            var_18 = 1;
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_19 *= ((((((arr_19 [i_5 + 1] [i_5 + 1] [i_6 + 1]) | 660385599766359001))) ? ((-(((65535 && (arr_11 [i_3])))))) : ((((66 ? 61028 : 65)) * ((225 - (arr_24 [i_3] [i_4] [i_5] [i_5 - 1] [i_6] [8] [i_7])))))));
                            var_20 = (max(1186598023, (min((arr_20 [i_6 - 1] [0] [i_5 + 1]), (arr_12 [i_5 + 1])))));
                        }
                        var_21 = (((((max(1, 15082890104676054881)))) || 17));
                        arr_26 [i_3] [16] [i_3] [i_6 + 1] = ((((((arr_19 [14] [14] [i_6]) | 1)) << (((min(2147483643, (arr_20 [i_4] [14] [i_6]))) + 151)))));
                        var_22 = (min(var_22, 1837542206));
                    }
                }
            }
        }
        var_23 = (max(var_23, (((!((min((arr_25 [i_3] [i_3]), (arr_25 [i_3] [i_3])))))))));
    }
    var_24 += var_9;
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            {
                var_25 = 1;
                var_26 += ((((((27 ? (arr_17 [0] [i_8] [i_9]) : (arr_19 [i_8] [3] [i_8 - 1]))))) & ((min((arr_17 [i_8 - 1] [i_9] [i_8]), (arr_17 [i_8 - 1] [i_8 - 1] [i_9]))))));
            }
        }
    }
    #pragma endscop
}
