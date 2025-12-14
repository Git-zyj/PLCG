/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((((((var_4 ? (((arr_1 [i_1]) ? (arr_5 [i_0] [i_0]) : var_1)) : (min((arr_1 [i_1]), var_3))))) ? (41899 > 23636) : ((((23636 || 23637) <= (var_2 + var_1)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 *= (((23637 ? 41899 : 40283)));
                                var_12 = (((arr_11 [i_1] [i_1] [i_4] [i_1] [i_3]) << (1274532325 - 1274532325)));
                                var_13 ^= (41898 ? 23636 : -69);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_0;
    var_15 = min(var_6, var_3);
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_16 = var_0;
                            arr_23 [i_5 + 3] [i_5 + 4] [i_5] [i_5] [i_7] = ((((min((arr_7 [i_5] [i_5] [i_7]), (arr_10 [i_5 + 3] [i_6] [i_7] [i_8 - 1]))) * (~4))));
                            var_17 = (((((var_1 ? (var_8 * var_3) : (((arr_4 [i_7]) ? 1454517742 : (arr_3 [i_5])))))) ? (arr_10 [i_5 + 1] [i_5 + 2] [i_5] [i_5 + 2]) : ((((arr_9 [i_7] [i_7] [i_8 + 1] [9] [i_7]) ? var_4 : (arr_9 [i_7] [0] [i_8 - 1] [i_8] [i_7]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_18 = (arr_3 [i_10]);
                            arr_29 [i_5] [i_10] [i_5] [i_5] [i_5] = ((((min(23637, 41899))) ? ((41900 ? (12697066718610285113 >= var_9) : ((23635 + (arr_19 [i_5] [i_5] [i_10]))))) : 23636));
                            arr_30 [i_5] [i_6] [i_10] [i_6] = (arr_1 [i_10]);
                        }
                    }
                }
                var_19 &= (arr_1 [i_5 + 2]);
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 12;i_13 += 1)
                        {
                            {
                                arr_40 [i_5] [i_5] [i_5] [i_12] [i_5] [i_13] = ((((max(var_5, (arr_31 [i_5] [i_5 - 1] [i_5 + 4])))) ? ((~(max(41900, 0)))) : (((arr_18 [i_12] [i_5 + 2]) / (arr_18 [i_5 + 3] [i_5 + 1])))));
                                arr_41 [i_13] [i_12] [i_11] [i_12] [i_5] = (((min((arr_0 [i_13 + 1] [i_13 - 1]), var_8)) | var_6));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 9;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 12;i_16 += 1)
                        {
                            {
                                var_20 = (arr_11 [i_5] [i_15] [i_14 - 1] [i_15 + 2] [i_16]);
                                var_21 = (max(var_21, ((min((arr_32 [i_16 - 3] [i_15 + 2] [i_14] [i_6]), (((((3020434971 ? 0 : 106)) < (arr_15 [6] [i_14])))))))));
                                var_22 += 41899;
                                var_23 = (min(var_23, var_0));
                                var_24 += (((arr_12 [i_15] [i_15 + 1] [18] [14] [i_15 + 3] [i_15 + 2]) == (arr_46 [i_5] [i_5] [8] [i_15 - 1] [i_5] [12])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
