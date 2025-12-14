/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] = ((3379663745 || (arr_7 [i_0] [3] [1] [i_0])));
                            arr_13 [i_0] [3] [i_2] [i_3] [i_0] = (((arr_7 [13] [i_2] [9] [i_0]) ? ((~(min(1553541843, (arr_3 [i_0]))))) : ((~(((arr_0 [i_0]) >> (((arr_3 [1]) + 6569545874383503730))))))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] = (((arr_11 [i_0] [i_1] [i_1] [i_3]) ? (((arr_6 [i_2] [i_1] [i_2]) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_6 [i_2] [i_1] [i_2]))) : ((~(min((arr_10 [i_2] [i_2] [i_0] [i_0] [i_2]), (arr_10 [3] [i_1] [3] [i_3] [i_2])))))));
                            var_16 *= (min(((((((arr_3 [i_0]) % 915303551))) || (arr_3 [i_2]))), ((!((min(114, 36998)))))));
                            var_17 += (max(1665783307, ((((arr_3 [i_1]) != (min((arr_6 [i_1] [i_2] [i_3]), (-2147483647 - 1))))))));
                        }
                    }
                }
                var_18 = (min(var_5, (min((arr_0 [i_0]), (arr_4 [i_1] [i_1] [i_0])))));
                arr_15 [i_0] [i_0] [i_1] = ((+(((min((arr_8 [i_0]), 18446744073709551615)) | (arr_10 [i_0] [8] [i_0] [i_0] [12])))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_19 [i_4] = 89;
        arr_20 [13] = var_3;
        arr_21 [19] [19] |= ((((((!(arr_16 [i_4] [i_4]))))) != (arr_18 [i_4])));
    }
    var_19 = var_15;
    #pragma endscop
}
