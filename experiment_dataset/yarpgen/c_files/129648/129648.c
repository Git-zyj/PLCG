/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = ((min(((min(0, 34196))), (((arr_2 [i_1] [i_1] [i_0]) ^ 65535)))) << (((~0) ? (((!(arr_1 [i_0])))) : ((min((arr_1 [i_0]), 23258))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (((max((max((arr_2 [i_0] [i_0] [i_4]), (arr_6 [i_4] [i_2] [i_2] [i_1] [i_1] [i_0]))), ((min(var_15, (arr_3 [i_0] [i_3] [i_2])))))) - ((((!((min(65521, (arr_0 [i_1] [i_4]))))))))));
                                var_19 = 1;
                                var_20 = (((1 ^ (max((arr_4 [7]), 1846546646)))) >> (((!(((arr_8 [i_3] [i_1] [i_2] [i_4] [i_4]) != 11375067136568510444))))));
                                var_21 = (arr_7 [i_0] [i_1] [i_0] [i_3] [1]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_17 [i_6] [i_6] [15] [i_1] [i_0] = ((-((~(max((arr_2 [i_1] [i_5] [i_6]), -2105262666489373430))))));
                            arr_18 [i_0] = (arr_7 [i_0] [i_1] [i_5] [i_5] [14]);
                            var_22 = (max(var_22, (((+(((1 || 8401) - 31)))))));
                            arr_19 [i_0] [i_1] [i_5] [i_6] = ((+(max(1622876313, (((arr_2 [1] [i_1] [i_5]) + 3997935166))))));
                            var_23 += (((((~((1 ? 1 : 8401))))) ? ((((1479430299 ^ -24041) ? ((((arr_14 [i_5] [i_1] [i_0]) > (arr_4 [i_0])))) : (110 % -19)))) : (min(((((arr_2 [i_0] [i_1] [i_1]) % var_0))), (arr_4 [i_1])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_24 = (min((((((((arr_5 [i_0] [i_1]) - var_16))) != (arr_2 [i_0] [i_1] [i_7])))), 1));
                                arr_28 [i_0] [i_1] [i_7 + 1] [i_7] [i_9 - 3] = (!1);
                                var_25 = (max(var_25, ((((((0 ^ ((1 ? 1 : (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0])))))) ? ((((((arr_6 [i_0] [i_0] [i_1] [i_7] [i_8] [i_9 - 1]) ? -20820 : 1478)) | ((max((arr_21 [i_1] [i_7] [i_8] [i_1]), var_15)))))) : ((((min((arr_8 [i_0] [i_1] [i_7 + 2] [i_8] [13]), 118))) ? (arr_2 [i_7] [i_1] [i_0]) : (((1 * (arr_16 [i_0] [i_1] [i_7] [i_8] [i_9])))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    arr_37 [i_10] [i_10] [i_10] = (arr_32 [i_12]);
                    arr_38 [i_10] [i_10] [i_12] [i_12] = (((arr_3 [i_12] [i_11] [i_10]) || (214765732 ^ 32739)));
                    arr_39 [i_10] [i_11] [i_10] [i_12] = (((((arr_6 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) - (arr_14 [i_10] [i_11] [i_10])))) ? ((((!(arr_36 [0] [0] [i_12]))))) : (min(((((arr_0 [i_10] [i_11]) && (arr_24 [i_10] [i_11] [i_11] [i_12])))), ((0 ? (arr_8 [i_12] [1] [i_11] [i_11] [i_10]) : 42548)))));
                }
            }
        }
    }
    #pragma endscop
}
