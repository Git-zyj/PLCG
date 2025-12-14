/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((max((arr_4 [i_1] [i_1]), 63))) <= ((-(max(1956691670, (arr_1 [i_0] [i_0])))))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (arr_9 [i_0] [i_1] [i_3 + 1]);
                                var_12 = var_10;
                                arr_12 [i_0] [i_2] [i_0] [i_2] [i_4] = (arr_10 [i_0] [i_0] [i_0]);
                                arr_13 [i_1] [i_3] [i_2 + 1] [i_1] [i_1] [i_0] [i_1] |= ((((max(((var_8 ^ (arr_6 [i_4] [i_0] [i_0] [i_0]))), -63))) || (arr_1 [i_0] [i_1])));
                                arr_14 [i_2] = ((((-2142345693 ? (~-1) : ((((arr_8 [i_0] [i_2 + 1] [i_3] [i_2 + 1]) ? 65473 : 46812))))) & (arr_8 [i_0] [i_0] [i_2] [i_1])));
                            }
                        }
                    }
                    var_13 = (arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1]);
                    arr_15 [i_2] = ((((arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1]) ? 65480 : ((18446744073709551615 ? 18446744073709551603 : (arr_3 [i_0] [i_2 - 1] [i_2 - 1]))))) * var_10);
                    var_14 = (((((arr_2 [i_1] [i_1]) + 2147483647)) << (((arr_4 [i_0] [i_2]) - 7135596))));
                }
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    arr_20 [i_5] = (((-(arr_8 [i_5] [i_1] [i_0] [i_0]))) % (((arr_3 [i_0] [i_0] [i_0]) ? 84 : (arr_9 [i_5 - 1] [i_5 - 1] [i_5 + 2]))));
                    var_15 = ((68 ? 3504862890 : 65452));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_25 [i_7] [i_1] [i_6] [i_1] [8] [8] = (arr_9 [i_7] [i_7] [i_7]);
                        arr_26 [i_1] [i_6] = (((arr_3 [i_0] [i_6] [i_7]) <= -1620603383));
                        var_16 = (min(var_16, (arr_2 [i_6] [i_1])));
                    }
                    var_17 = 32767;
                }
            }
        }
    }
    var_18 = var_10;
    var_19 = var_3;
    #pragma endscop
}
