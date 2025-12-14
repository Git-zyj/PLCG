/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [12] [i_1] [i_1] [i_2] = var_10;
                    var_18 = (((~100) == (max(((((arr_3 [i_1] [i_1]) >= 1))), (((arr_5 [i_0] [i_1] [i_2]) ? 1 : 255))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0] = (((min(69, ((183 >> (183 - 181)))))) ? ((var_10 ? ((min(38598, var_5))) : (arr_9 [i_0] [i_0] [i_0] [10] [8] [i_3]))) : 172);

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_19 = ((((0 & (arr_2 [i_3])))) ? ((~(arr_2 [i_0]))) : ((1 ? var_4 : var_14)));
                            var_20 = 2575514913087612723;
                            var_21 = (max(var_21, (((!((((arr_3 [i_0] [i_1 - 2]) ? (arr_3 [i_1 - 1] [i_1 + 2]) : 1822729005))))))));
                        }
                        arr_15 [i_0] [i_1] [i_2] [i_0] = (var_11 || 18446744073709551615);
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_22 = (min(var_22, -1423724679));
                        arr_18 [i_0] [i_1 + 2] [i_0] [i_5] = (((0 >> (172 - 158))) - 1048575);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_28 [i_7] [i_6] [i_7] [i_7] = 255;
                    var_23 = var_6;
                    arr_29 [i_6] |= (var_8 != 1);
                }
                arr_30 [i_7] [i_7] = 4;

                /* vectorizable */
                for (int i_9 = 4; i_9 < 19;i_9 += 1)
                {
                    var_24 = (max(var_24, 1));
                    arr_33 [i_7] [i_7] [i_9] = (var_2 <= 30);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_25 += (((((var_2 - (arr_23 [1])))) || (arr_26 [i_9 - 3] [i_9] [i_9] [i_9 + 4])));
                                arr_39 [i_6] [i_7] [i_9 + 1] [i_10] [i_11] = ((arr_35 [i_9] [i_9 - 2] [i_9] [i_9]) ? (arr_35 [i_9 + 3] [i_9 + 2] [i_9] [i_9]) : var_4);
                            }
                        }
                    }
                    var_26 = (max(var_26, 180));
                    arr_40 [i_9] [i_7] [16] = (arr_20 [i_9 - 3]);
                }
            }
        }
    }
    #pragma endscop
}
