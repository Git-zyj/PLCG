/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((arr_3 [i_0] [i_0]) ? var_10 : (-9223372036854775807 - 1));
        arr_4 [i_0] = (max((!-584324548), (((arr_0 [i_0]) ? 17 : (arr_0 [i_0])))));
        var_14 = (((var_0 <= (arr_2 [i_0] [i_0]))));
    }
    var_15 = ((((~((var_5 ? var_9 : -852875049)))) >= var_6));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            {

                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    arr_11 [i_1] [i_1] [i_3] = ((((((min(114, 18446744073709551615))) ? 18 : ((max(var_9, 68))))) < (!22674)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_16 -= ((((((arr_13 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) ? 65518 : (arr_10 [i_3])))) ? ((4 ? 57975 : 0)) : ((17 - (arr_13 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))));
                                arr_19 [i_1] [5] [6] [6] [i_1] [i_5] = (((arr_16 [i_1 - 1] [i_2] [i_3 + 3] [i_1] [i_5]) ? -584324548 : -2147483618));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_22 [i_1] [i_2] = (min((arr_18 [i_2] [i_2] [i_3]), (min((arr_10 [i_1]), 255))));
                        var_17 ^= (~7584);
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            arr_29 [5] [i_2] [i_2] [i_7] [i_1] = (((arr_15 [i_1] [i_7] [i_3] [i_2] [i_1]) & 4294967295));
                            arr_30 [i_1] [i_1] = ((!(arr_6 [i_1])));
                            arr_31 [i_1] [i_2] [i_3 + 2] [i_7] [i_7] [i_1] [i_7] = (((arr_16 [i_8] [i_8] [i_8] [i_1] [i_8 - 1]) ? (arr_16 [i_1 - 1] [i_3] [6] [i_1] [i_8 + 1]) : (arr_16 [i_1 + 1] [15] [2] [i_1] [i_8 + 2])));
                            arr_32 [i_1] [i_1] [i_3 - 3] [i_3 - 3] = ((var_11 ? ((255 ? 5 : 4096)) : 17));
                        }
                        arr_33 [i_3] [i_1] = ((((min((arr_16 [i_1] [i_2] [i_2] [i_1] [i_2]), 141))) ? 263903210 : (((((var_4 + (arr_2 [i_1] [0])))) ? 248 : 0))));
                        var_18 = (min(var_18, (248 > 50094)));
                    }
                }

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_19 += ((2147483647 ? -3735 : 105));
                    var_20 ^= (((((~(arr_14 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [14])))) ? ((~(arr_6 [i_9]))) : ((118 ? (((arr_18 [i_1 - 1] [i_1] [8]) + (arr_8 [i_9] [i_2] [i_1]))) : ((~(arr_3 [10] [10])))))));
                    var_21 = (min(var_21, ((min((!1), ((126 ? 13148830922302947897 : 65525)))))));
                    var_22 = var_1;
                }
                arr_38 [i_1] = (arr_20 [1] [1] [i_2] [i_2] [i_1] [i_1 - 1]);
                var_23 = arr_28 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [14] [i_1 - 1];
            }
        }
    }
    var_24 = (min(var_24, (!var_6)));
    #pragma endscop
}
